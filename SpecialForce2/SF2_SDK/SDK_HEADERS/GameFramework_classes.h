/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_LOADING_MOVIE                                      "LoadingMovie"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameTypes.EShakeParam
/*enum EShakeParam
{
	ESP_OffsetRandom                                   = 0,
	ESP_OffsetZero                                     = 1,
	ESP_MAX                                            = 2
};*/

// Enum GameFramework.GameCrowdAgent.EConformType
/*enum EConformType
{
	CFM_NavMesh                                        = 0,
	CFM_BSP                                            = 1,
	CFM_World                                          = 2,
	CFM_None                                           = 3,
	CFM_MAX                                            = 4
};*/

// Enum GameFramework.GameCrowdAgentBehavior.ECrowdBehaviorEvent
/*enum ECrowdBehaviorEvent
{
	CBE_None                                           = 0,
	CBE_Spawn                                          = 1,
	CBE_Random                                         = 2,
	CBE_SeePlayer                                      = 3,
	CBE_EncounterAgent                                 = 4,
	CBE_TakeDamage                                     = 5,
	CBE_GroupWaiting                                   = 6,
	CBE_Uneasy                                         = 7,
	CBE_Alert                                          = 8,
	CBE_Panic                                          = 9,
	CBE_MAX                                            = 10
};*/

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
/*enum ERecoilStart
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_MAX                                            = 2
};*/

// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
/*enum ECameraViewportTypes
{
	CVT_16to9_Full                                     = 0,
	CVT_16to9_VertSplit                                = 1,
	CVT_16to9_HorizSplit                               = 2,
	CVT_4to3_Full                                      = 3,
	CVT_4to3_HorizSplit                                = 4,
	CVT_4to3_VertSplit                                 = 5,
	CVT_MAX                                            = 6
};*/

// Enum GameFramework.MobileHUD.EZoneType
/*enum EZoneType
{
	ZoneType_Button                                    = 0,
	ZoneType_Joystick                                  = 1,
	ZoneType_Trackball                                 = 2,
	ZoneType_Tilt                                      = 3,
	ZoneType_MAX                                       = 4
};*/

// Enum GameFramework.MobileHUD.EZoneState
/*enum EZoneState
{
	ZoneState_Inactive                                 = 0,
	ZoneState_Activating                               = 1,
	ZoneState_Active                                   = 2,
	ZoneState_Deactivating                             = 3,
	ZoneState_MAX                                      = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.GameAIController
// 0x0038 (0x0424 - 0x03EC)
class AGameAIController : public AAIController
{
public:
	class UGameAICommand*                              CommandList;                                      		// 0x03EC (0x0004) [0x0000000004002003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditInline )
	unsigned long                                      bHasRunawayCommandList : 1;                       		// 0x03F0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bAILogging : 1;                                   		// 0x03F0 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAILogToWindow : 1;                               		// 0x03F0 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bFlushAILogEachLine : 1;                          		// 0x03F0 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bMapBasedLogName : 1;                             		// 0x03F0 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAIDrawDebug : 1;                                 		// 0x03F0 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAIBroken : 1;                                    		// 0x03F0 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	class AFileLog*                                    AILogFile;                                        		// 0x03F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DebugTextMaxLen;                                  		// 0x03F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAICmdHistoryItem >                 CommandHistory;                                   		// 0x03FC (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	int                                                CommandHistoryNum;                                		// 0x0408 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FName >                             AILogFilter;                                      		// 0x040C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DemoActionString;                                 		// 0x0418 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2745 ];

		return pClassPointer;
	};

	struct FString eventGetActionString ( );
	void SetDesiredRotation ( struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime );
	void eventAILog_Internal ( struct FString LogText, struct FName LogCategory, unsigned long bForce );
	void RecordDemoAILog ( struct FString LogText );
	void eventDestroyed ( );
	void ReachedIntermediateMoveGoal ( );
	void ReachedMoveGoal ( );
	float GetDestinationOffset ( );
	class UGameAICommand* GetAICommandInStack ( class UClass* InClass );
	class UGameAICommand* FindCommandOfClass ( class UClass* SearchClass );
	void DumpCommandStack ( );
	void CheckCommandCount ( );
	class UGameAICommand* GetActiveCommand ( );
	bool AbortCommand ( class UGameAICommand* AbortCmd, class UClass* AbortClass );
	void PopCommand ( class UGameAICommand* ToBePoppedCommand );
	void PushCommand ( class UGameAICommand* NewCommand );
	void AllCommands ( class UClass* BaseClass, class UGameAICommand** Cmd );
};

UClass* AGameAIController::pClassPointer = NULL;

// Class GameFramework.GameAICommand
// 0x001C (0x0058 - 0x003C)
class UGameAICommand : public UAICommandBase
{
public:
	class UGameAICommand*                              ChildCommand;                                     		// 0x003C (0x0004) [0x0000000004002003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditInline )
	struct FName                                       ChildStatus;                                      		// 0x0040 (0x0008) [0x0000000000002003]              ( CPF_Edit | CPF_Const | CPF_Transient )
	class AGameAIController*                           GameAIOwner;                                      		// 0x0048 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FName                                       Status;                                           		// 0x004C (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bAllowNewSameClassInstance : 1;                   		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReplaceActiveSameClassInstance : 1;              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAborted : 1;                                     		// 0x0054 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIgnoreNotifies : 1;                              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIgnoreStepAside : 1;                             		// 0x0054 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPendingPop : 1;                                  		// 0x0054 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2747 ];

		return pClassPointer;
	};

	bool HandlePathObstruction ( class AActor* BlockedBy );
	bool MoveUnreachable ( struct FVector AttemptedDest, class AActor* AttemptedTarget );
	void NotifyNeedRepath ( );
	struct FString eventGetDebugVerboseText ( );
	void GetDebugOverheadText ( class APlayerController* PC, TArray< struct FString >* outtext );
	void eventDrawDebug ( class AHUD* H, struct FName Category );
	struct FString eventGetDumpString ( );
	void Resumed ( struct FName OldCommandName );
	void Paused ( class UGameAICommand* NewCommand );
	void Popped ( );
	void Pushed ( );
	void PostPopped ( );
	void PrePushed ( class AGameAIController* AI );
	bool AllowStateTransitionTo ( struct FName StateName );
	bool AllowTransitionTo ( class UClass* AttemptCommand );
	void Tick ( float DeltaTime );
	bool ShouldIgnoreNotifies ( );
	void eventInternalTick ( float DeltaTime );
	void eventInternalResumed ( struct FName OldCommandName );
	void eventInternalPaused ( class UGameAICommand* NewCommand );
	void eventInternalPopped ( );
	void eventInternalPushed ( );
	void eventInternalPrePushed ( class AGameAIController* AI );
	bool InitCommand ( class AGameAIController* AI );
	bool InitCommandUserActor ( class AGameAIController* AI, class AActor* UserActor );
};

UClass* UGameAICommand::pClassPointer = NULL;

// Class GameFramework.GameCameraBlockingVolume
// 0x0000 (0x0264 - 0x0264)
class AGameCameraBlockingVolume : public ABlockingVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2749 ];

		return pClassPointer;
	};

};

UClass* AGameCameraBlockingVolume::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgent
// 0x0208 (0x0430 - 0x0228)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	struct FPointer                                    VfTable_IInterface_RVO;                           		// 0x0228 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UGameCrowdGroup*                             MyGroup;                                          		// 0x022C (0x0004) [0x0000000000000000]              
	struct FVector                                     PreferredVelocity;                                		// 0x0230 (0x000C) [0x0000000000000000]              
	struct FVector                                     PendingVelocity;                                  		// 0x023C (0x000C) [0x0000000000000000]              
	class AGameCrowdDestination*                       CurrentDestination;                               		// 0x0248 (0x0004) [0x0000000000000000]              
	class AGameCrowdDestination*                       BehaviorDestination;                              		// 0x024C (0x0004) [0x0000000000000000]              
	class AGameCrowdDestination*                       PreviousDestination;                              		// 0x0250 (0x0004) [0x0000000000000000]              
	float                                              InterpZTranslation;                               		// 0x0254 (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeadBodyDuration;                                 		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0260 (0x0004) [0x00000000040A000A]              ( CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	int                                                ConformTraceFrameCount;                           		// 0x0264 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FNearbyDynamicItem >                NearbyDynamics;                                   		// 0x0268 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bUniformScale : 1;                                		// 0x0274 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCheckForObstacles : 1;                           		// 0x0274 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseNavMeshPathing : 1;                           		// 0x0274 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bWantsSeePlayerNotification : 1;                  		// 0x0274 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAllowPitching : 1;                               		// 0x0274 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bHitObstacle : 1;                                 		// 0x0274 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBadHitNormal : 1;                                		// 0x0274 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bSimulateThisTick : 1;                            		// 0x0274 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPotentialEncounter : 1;                          		// 0x0274 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bIsPanicked : 1;                                  		// 0x0274 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bWantsGroupIdle : 1;                              		// 0x0274 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bPreferVisibleDestination : 1;                    		// 0x0274 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bPreferVisibleDestinationOnSpawn : 1;             		// 0x0274 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bHasNotifiedSpawner : 1;                          		// 0x0274 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bIsInSpawnPool : 1;                               		// 0x0274 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bPaused : 1;                                      		// 0x0274 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned char                                      ConformType;                                      		// 0x0278 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ConformTraceDist;                                 		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ConformTraceInterval;                             		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentConformTraceInterval;                      		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              LastGroundZ;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	float                                              AwareRadius;                                      		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AvoidOtherRadius;                                 		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAvoidOtherSampleItem >             AvoidOtherSampleList;                             		// 0x0294 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PENALTY_COEFF_ANGLETOGOAL;                        		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PENALTY_COEFF_ANGLETOVEL;                         		// 0x02A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PENALTY_COEFF_MAG;                                		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MIN_PENALTY_THRESHOLD;                            		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastProgressTime;                                 		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFallbackActiveTime;                           		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPathLaneValue;                                 		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentPathLaneValue;                             		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtraPathCost;                                    		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotateToTargetSpeed;                              		// 0x02C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxYawRate;                                       		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeshMinScale3D;                                   		// 0x02CC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeshMaxScale3D;                                   		// 0x02D8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              EyeZOffset;                                       		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              ProximityLODDist;                                 		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VisibleProximityLODDist;                          		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastKnownGoodPosition;                            		// 0x02F0 (0x000C) [0x0000000000000000]              
	float                                              GroundOffset;                                     		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     IntermediatePoint;                                		// 0x0300 (0x000C) [0x0000000000000000]              
	struct FVector                                     SearchExtent;                                     		// 0x030C (0x000C) [0x0000000000000000]              
	class UClass*                                      NavigationHandleClass;                            		// 0x0318 (0x0004) [0x0000000000000000]              
	class UNavigationHandle*                           NavigationHandle;                                 		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                ObstacleCheckCount;                               		// 0x0320 (0x0004) [0x0000000000000000]              
	float                                              WalkableFloorZ;                                   		// 0x0324 (0x0004) [0x0000000000000000]              
	float                                              LastPathingAttempt;                               		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              LastUpdateTime;                                   		// 0x032C (0x0004) [0x0000000000000000]              
	float                                              NotVisibleLifeSpan;                               		// 0x0330 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdAgent*                             MyArchetype;                                      		// 0x0334 (0x0004) [0x0000000000000000]              
	float                                              MaxWalkingSpeed;                                  		// 0x0338 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRunningSpeed;                                  		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeed;                                         		// 0x0340 (0x0004) [0x0000000000000000]              
	TArray< struct FRecentInteraction >                RecentInteractions;                               		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BeaconMaxDist;                                    		// 0x0350 (0x0004) [0x0000000000000000]              
	struct FVector                                     BeaconOffset;                                     		// 0x0354 (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  BeaconTexture;                                    		// 0x0360 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                BeaconColor;                                      		// 0x0364 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   AmbientSoundCue;                                  		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             AmbientSoundComponent;                            		// 0x0378 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                                  		// 0x037C (0x0004) [0x0000000000000000]              
	float                                              CurrentBehaviorActivationTime;                    		// 0x0380 (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    EncounterAgentBehaviors;                          		// 0x0384 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    SeePlayerBehaviors;                               		// 0x0390 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MaxSeePlayerDistSq;                               		// 0x039C (0x0004) [0x0000000000000000]              
	float                                              SeePlayerInterval;                                		// 0x03A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FBehaviorEntry >                    SpawnBehaviors;                                   		// 0x03A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    UneasyBehaviors;                                  		// 0x03B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    AlertBehaviors;                                   		// 0x03BC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    PanicBehaviors;                                   		// 0x03C8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    RandomBehaviors;                                  		// 0x03D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    TakeDamageBehaviors;                              		// 0x03E0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              RandomBehaviorInterval;                           		// 0x03EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceUpdateTime;                                  		// 0x03F0 (0x0004) [0x0000000000000000]              
	float                                              ReachThreshold;                                   		// 0x03F4 (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    GroupWaitingBehaviors;                            		// 0x03F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DesiredGroupRadius;                               		// 0x0404 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DesiredGroupRadiusSq;                             		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              MaxLOSLifeDistanceSq;                             		// 0x040C (0x0004) [0x0000000000000000]              
	class UGameCrowdSpawnerInterface*                  MySpawner;                                        		// 0x0410 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0414 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FVector                                     SpawnOffset;                                      		// 0x0418 (0x000C) [0x0000000000000000]              
	float                                              InitialLastRenderTime;                            		// 0x0424 (0x0004) [0x0000000000000000]              
	struct FColor                                      DebugAgentColor;                                  		// 0x0428 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdDestination*                       DebugSpawnDest;                                   		// 0x042C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2751 ];

		return pClassPointer;
	};

	void InitDebugColor ( );
	struct FString GetBehaviorString ( );
	struct FString GetDestString ( );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	struct FVector eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath );
	void eventInitNavigationHandle ( );
	void eventOverlappedActorEvent ( class AActor* A );
	void TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventFireDeathEvent ( );
	void PlayDeath ( struct FVector KillMomentum );
	void eventUpdateIntermediatePoint ( class AActor* DestinationActor );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	bool IsIdle ( );
	void SetCurrentBehavior ( class UGameCrowdAgentBehavior* BehaviorArchetype );
	void eventStopBehavior ( );
	void eventHandleBehaviorEvent ( unsigned char EventType, class AActor* InInstigator, unsigned long bViralCause, unsigned long bPropagateViralFlag );
	void ActivateInstancedBehavior ( class UGameCrowdAgentBehavior* NewBehaviorObject );
	void eventActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor );
	void ResetSeePlayer ( );
	void TryRandomBehavior ( );
	void eventNotifySeePlayer ( class APlayerController* PC );
	void PlaySpawnBehavior ( );
	void eventHandlePotentialAgentEncounter ( );
	void eventStopIdleAnimation ( );
	void eventPlayIdleAnimation ( );
	void OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action );
	void InitializeAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, unsigned long bWarmupPosition, unsigned long bCheckWarmupVisibility, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo );
	struct FVector GetAttemptedSpawnLocation ( float Pct, struct FVector CurPos, float CurRadius, struct FVector DestPos, float DestRadius );
	void SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void Destroyed ( );
	void ResetPooledAgent ( );
	void eventKillAgent ( );
	void PostBeginPlay ( );
	void SetMaxSpeed ( );
	void eventSetCurrentDestination ( class AGameCrowdDestination* NewDest );
	void eventWaitForGroupMembers ( );
	bool PickBehaviorFrom ( TArray< struct FBehaviorEntry > BehaviorList, struct FVector BestCameraLoc );
	bool IsPanicked ( );
	void eventFellOutOfWorld ( class UClass* dmgType );
	struct FVector GetCollisionExtent ( );
};

UClass* AGameCrowdAgent::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgentSkeletal
// 0x0080 (0x04B0 - 0x0430)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x0430 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimNodeBlend*                              SpeedBlendNode;                                   		// 0x0434 (0x0004) [0x0000000000000000]              
	class UAnimNodeSlot*                               FullBodySlot;                                     		// 0x0438 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           ActionSeqNode;                                    		// 0x043C (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           WalkSeqNode;                                      		// 0x0440 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           RunSeqNode;                                       		// 0x0444 (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   AgentTree;                                        		// 0x0448 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             WalkAnimNames;                                    		// 0x044C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             RunAnimNames;                                     		// 0x0458 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             IdleAnimNames;                                    		// 0x0464 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             DeathAnimNames;                                   		// 0x0470 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              SpeedBlendStart;                                  		// 0x047C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedBlendEnd;                                    		// 0x0480 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimVelRate;                                      		// 0x0484 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeedBlendChangeSpeed;                         		// 0x0488 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MoveSyncGroupName;                                		// 0x048C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGameCrowdAttachmentList >          Attachments;                                      		// 0x0494 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MaxTargetAcquireTime;                             		// 0x04A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotionVelocity : 1;                       		// 0x04A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsPlayingIdleAnimation : 1;                      		// 0x04A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsPlayingDeathAnimation : 1;                     		// 0x04A4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAnimateThisTick : 1;                             		// 0x04A4 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              MaxAnimationDistance;                             		// 0x04A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAnimationDistanceSq;                           		// 0x04AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2753 ];

		return pClassPointer;
	};

	void CreateAttachments ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void eventStopIdleAnimation ( );
	void eventPlayIdleAnimation ( );
	void eventClearLatentAnimation ( );
	void OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action );
	void SetRootMotion ( unsigned long bRootMotionEnabled );
	void PlayDeath ( struct FVector KillMomentum );
	void SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows );
	void PostBeginPlay ( );
};

UClass* AGameCrowdAgentSkeletal::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgentSM
// 0x0008 (0x0438 - 0x0430)
class AGameCrowdAgentSM : public AGameCrowdAgent
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0430 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   MeshColor;                                        		// 0x0434 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2755 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	void ActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor );
	void ChangeDebugColor ( struct FColor InC );
	void InitDebugColor ( );
	void PostBeginPlay ( );
};

UClass* AGameCrowdAgentSM::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgentBehavior
// 0x0034 (0x0070 - 0x003C)
class UGameCrowdAgentBehavior : public UObject
{
public:
	unsigned char                                      MyEventType;                                      		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      ViralBehaviorEvent;                               		// 0x003D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              DurationOfBehavior;                               		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeUntilStopBehavior;                            		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIdleBehavior : 1;                                		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFaceActionTargetFirst : 1;                       		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsViralBehavior : 1;                             		// 0x0048 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPassOnIsViralBehaviorFlag : 1;                   		// 0x0048 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class AActor*                                      ActionTarget;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              MaxPlayerDistance;                                		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViralRadius;                                      		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DurationBeforeBecomesViral;                       		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeToBecomeViral;                                		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DurationOfViralBehaviorPropagation;               		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeToStopPropagatingViralBehavior;               		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AGameCrowdAgent*                             MyAgent;                                          		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FColor                                      DebugBehaviorColor;                               		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2757 ];

		return pClassPointer;
	};

	bool AllowBehaviorAt ( class AGameCrowdDestination* Destination );
	bool AllowThisDestination ( class AGameCrowdDestination* Destination );
	void eventPropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent );
	class AActor* GetBehaviorInstigator ( );
	void ActivatedBy ( class AActor* NewActionTarget );
	class AActor* GetDestinationActor ( );
	void ChangingDestination ( class AGameCrowdDestination* NewDest );
	struct FString GetBehaviorString ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopBehavior ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
	bool HandleMovement ( );
	void eventFinishedTargetRotation ( );
	bool CanBeUsedBy ( class AGameCrowdAgent* Agent, struct FVector CameraLoc );
	void eventTick ( float DeltaTime );
	bool ShouldEndIdle ( );
	class AGameCrowdBehaviorPoint* TriggerCrowdBehavior ( unsigned char EventType, class AActor* Instigator, struct FVector AtLocation, float InRange, float InDuration, class AActor* BaseActor, unsigned long bRequireLOS );
};

UClass* UGameCrowdAgentBehavior::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x002C (0x009C - 0x0070)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	TArray< struct FName >                             AnimationList;                                    		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotion : 1;                               		// 0x0084 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLookAtPlayer : 1;                                		// 0x0084 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0084 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlendBetweenAnims : 1;                           		// 0x0084 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class AActor*                                      CustomActionTarget;                               		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                LoopIndex;                                        		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoopTime;                                         		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                AnimationIndex;                                   		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2759 ];

		return pClassPointer;
	};

	struct FString GetBehaviorString ( );
	void StopBehavior ( );
	void PlayAgentAnimationNow ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void SetSequenceOutput ( );
	void eventFinishedTargetRotation ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
};

UClass* UGameCrowdBehavior_PlayAnimation::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x0004 (0x0074 - 0x0070)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                       		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2761 ];

		return pClassPointer;
	};

	struct FString GetBehaviorString ( );
	bool AllowBehaviorAt ( class AGameCrowdDestination* Destination );
	bool AllowThisDestination ( class AGameCrowdDestination* Destination );
	class AActor* GetBehaviorInstigator ( );
	void StopBehavior ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
	void ActivatedBy ( class AActor* NewActionTarget );
};

UClass* UGameCrowdBehavior_RunFromPanic::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_WaitForGroup
// 0x0000 (0x0070 - 0x0070)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2763 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	bool ShouldEndIdle ( );
	struct FString GetBehaviorString ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
};

UClass* UGameCrowdBehavior_WaitForGroup::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x0008 (0x0078 - 0x0070)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned long                                      bStoppingBehavior : 1;                            		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                    		// 0x0074 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2765 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	bool ShouldEndIdle ( );
	struct FString GetBehaviorString ( );
	class AActor* GetDestinationActor ( );
	void ChangingDestination ( class AGameCrowdDestination* NewDest );
	bool HandleMovement ( );
};

UClass* UGameCrowdBehavior_WaitInQueue::pClassPointer = NULL;

// Class GameFramework.GameCrowdGroup
// 0x000C (0x0048 - 0x003C)
class UGameCrowdGroup : public UObject
{
public:
	TArray< class AGameCrowdAgent* >                   Members;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2767 ];

		return pClassPointer;
	};

	void UpdateDestinations ( class AGameCrowdDestination* NewDestination );
	void RemoveMember ( class AGameCrowdAgent* Agent );
	void AddMember ( class AGameCrowdAgent* Agent );
};

UClass* UGameCrowdGroup::pClassPointer = NULL;

// Class GameFramework.GameCrowdInfoVolume
// 0x000C (0x026C - 0x0260)
class AGameCrowdInfoVolume : public AVolume
{
public:
	TArray< class AGameCrowdDestination* >             PotentialSpawnPoints;                             		// 0x0260 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2769 ];

		return pClassPointer;
	};

	void UnTouch ( class AActor* Other );
	void Touch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AGameCrowdInfoVolume::pClassPointer = NULL;

// Class GameFramework.GameCrowdInteractionPoint
// 0x0008 (0x022C - 0x0224)
class AGameCrowdInteractionPoint : public AActor
{
public:
	unsigned long                                      bIsEnabled : 1;                                   		// 0x0224 (0x0004) [0x0000000000000021] [0x00000001] ( CPF_Edit | CPF_Net )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x0228 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2771 ];

		return pClassPointer;
	};

	void OnToggle ( class USeqAct_Toggle* Action );
};

UClass* AGameCrowdInteractionPoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehaviorPoint
// 0x0014 (0x0240 - 0x022C)
class AGameCrowdBehaviorPoint : public AGameCrowdInteractionPoint
{
public:
	float                                              RadiusOfBehaviorEvent;                            		// 0x022C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DurationOfBehaviorEvent;                          		// 0x0230 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      EventType;                                        		// 0x0234 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRequireLOS : 1;                                  		// 0x0238 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class AActor*                                      Initiator;                                        		// 0x023C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2773 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void DestroySelf ( );
	void eventPostBeginPlay ( );
};

UClass* AGameCrowdBehaviorPoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdDestination
// 0x0080 (0x02AC - 0x022C)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;            		// 0x022C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bKillWhenReached : 1;                             		// 0x0230 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowAsPreviousDestination : 1;                  		// 0x0230 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAvoidWhenPanicked : 1;                           		// 0x0230 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSkipBehaviorIfPanicked : 1;                      		// 0x0230 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bFleeDestination : 1;                             		// 0x0230 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bMustReachExactly : 1;                            		// 0x0230 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bHasRestrictions : 1;                             		// 0x0230 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bAllowsSpawning : 1;                              		// 0x0230 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bAllowCloudSpawning : 1;                          		// 0x0230 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bAllowVisibleSpawning : 1;                        		// 0x0230 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bLineSpawner : 1;                                 		// 0x0230 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bSpawnAtEdge : 1;                                 		// 0x0230 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bSoftPerimeter : 1;                               		// 0x0230 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bIsVisible : 1;                                   		// 0x0230 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bWillBeVisible : 1;                               		// 0x0230 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bCanSpawnHereNow : 1;                             		// 0x0230 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bIsBeyondSpawnDistance : 1;                       		// 0x0230 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bAdjacentToVisibleNode : 1;                       		// 0x0230 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bHasNavigationMesh : 1;                           		// 0x0230 (0x0004) [0x0000000000000000] [0x00040000] 
	TArray< class AGameCrowdDestination* >             NextDestinations;                                 		// 0x0234 (0x000C) [0x0000000000600001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                        		// 0x0240 (0x0004) [0x0000000000200001]              ( CPF_Edit )
	int                                                Capacity;                                         		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Frequency;                                        		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CustomerCount;                                    		// 0x024C (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            SupportedAgentClasses;                            		// 0x0250 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           SupportedArchetypes;                              		// 0x025C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UClass* >                            RestrictedAgentClasses;                           		// 0x0268 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           RestrictedArchetypes;                             		// 0x0274 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ExactReachTolerance;                              		// 0x0280 (0x0004) [0x0000000000000000]              
	struct FName                                       InteractionTag;                                   		// 0x0284 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteractionDelay;                                 		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FBehaviorEntry >                    ReachedBehaviors;                                 		// 0x0290 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AGameCrowdAgent*                             AgentEnRoute;                                     		// 0x029C (0x0004) [0x0000000000000000]              
	float                                              Priority;                                         		// 0x02A0 (0x0004) [0x0000000000000000]              
	float                                              LastSpawnTime;                                    		// 0x02A4 (0x0004) [0x0000000000000000]              
	class AGameCrowdPopulationManager*                 MyPopMgr;                                         		// 0x02A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2775 ];

		return pClassPointer;
	};

	void DrawDebug ( unsigned long bPresistent, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo );
	float GetDestinationRadius ( );
	void PrioritizeSpawnPoint ( float MaxSpawnDist, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo );
	bool AnalyzeSpawnPoint ( float MaxSpawnDistSq, unsigned long bForceNavMeshPathing, class UNavigationHandle* NavHandle, TArray< struct FCrowdSpawnerPlayerInfo >* PlayerInfo );
	void GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot );
	float GetSpawnRadius ( );
	bool eventAllowableDestinationFor ( class AGameCrowdAgent* Agent );
	bool AtCapacity ( unsigned char CheckCnt );
	void eventIncrementCustomerCount ( class AGameCrowdAgent* ArrivingAgent );
	void eventDecrementCustomerCount ( class AGameCrowdAgent* DepartingAgent );
	void PickNewDestinationFor ( class AGameCrowdAgent* Agent, unsigned long bIgnoreRestrictions );
	void eventReachedDestination ( class AGameCrowdAgent* Agent );
	void Destroyed ( );
	void PostBeginPlay ( );
	bool ReachedByAgent ( class AGameCrowdAgent* Agent, struct FVector TestPosition, unsigned long bTestExactly );
};

UClass* AGameCrowdDestination::pClassPointer = NULL;

// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x001C (0x0248 - 0x022C)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                                		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                            		// 0x0230 (0x0004) [0x0000000000000000]              
	class AGameCrowdAgent*                             QueuedAgent;                                      		// 0x0234 (0x0004) [0x0000000000000000]              
	class AGameCrowdDestination*                       QueueDestination;                                 		// 0x0238 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bClearingQueue : 1;                               		// 0x023C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingAdvance : 1;                              		// 0x023C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AverageReactionTime;                              		// 0x0240 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      QueueBehaviorClass;                               		// 0x0244 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2777 ];

		return pClassPointer;
	};

	bool HasCustomer ( );
	void ClearQueue ( class AGameCrowdAgent* OldCustomer );
	void AddCustomer ( class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition );
	void ActuallyAdvance ( );
	void AdvanceCustomerTo ( class AGameCrowdInteractionPoint* FrontPosition );
	void eventReachedDestination ( class AGameCrowdAgent* Agent );
	bool HasSpace ( );
	bool QueueReachedBy ( class AGameCrowdAgent* Agent, struct FVector TestPosition );
};

UClass* AGameCrowdDestinationQueuePoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdPopulationManager
// 0x00C8 (0x02EC - 0x0224)
class AGameCrowdPopulationManager : public ACrowdPopulationManagerBase
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;              		// 0x0224 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FCrowdSpawnInfoItem                         CloudSpawnInfo;                                   		// 0x0228 (0x007C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCrowdSpawnInfoItem >               ScriptedSpawnInfo;                                		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AGameCrowdInfoVolume*                        ActiveCrowdInfoVolume;                            		// 0x02B0 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             GlobalPotentialSpawnPoints;                       		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SplitScreenNumReduction;                          		// 0x02C0 (0x0004) [0x0000000000000000]              
	float                                              PlayerPositionPredictionTime;                     		// 0x02C4 (0x0004) [0x0000000000000000]              
	float                                              HeadVisibilityOffset;                             		// 0x02C8 (0x0004) [0x0000000000000000]              
	class UClass*                                      NavigationHandleClass;                            		// 0x02CC (0x0004) [0x0000000000000000]              
	class UNavigationHandle*                           NavigationHandle;                                 		// 0x02D0 (0x0004) [0x0000000000000000]              
	class AGameCrowdAgent*                             QueryingAgent;                                    		// 0x02D4 (0x0004) [0x0000000000000000]              
	TArray< struct FCrowdSpawnerPlayerInfo >           PlayerInfo;                                       		// 0x02D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastPlayerInfoUpdateTime;                         		// 0x02E4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDebugSpawns : 1;                                 		// 0x02E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPauseCrowd : 1;                                  		// 0x02E8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2779 ];

		return pClassPointer;
	};

	class AGameCrowdAgent* eventCreateNewAgent ( class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem* Item );
	bool Warmup ( int WarmupNum, struct FCrowdSpawnInfoItem* Item );
	class AGameCrowdAgent* SpawnAgent ( class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem* Item );
	class AGameCrowdAgent* SpawnAgentByIdx ( int SpawnerIdx, class AGameCrowdDestination* SpawnLoc );
	bool ValidateSpawnAt ( class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem* Item );
	void AddPrioritizedSpawnPoint ( class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem* Item );
	void AnalyzeSpawnPoints ( int StartIndex, int NumToUpdate, struct FCrowdSpawnInfoItem* Item );
	void eventPrioritizeSpawnPoints ( float DeltaTime, struct FCrowdSpawnInfoItem* Item );
	bool StaticGetPlayerInfo ( TArray< struct FCrowdSpawnerPlayerInfo >* out_PlayerInfo );
	bool GetPlayerInfo ( );
	class AGameCrowdDestination* eventPickSpawnPoint ( struct FCrowdSpawnInfoItem* Item );
	bool eventUpdateSpawner ( float DeltaTime, struct FCrowdSpawnInfoItem* Item );
	void UpdateAllSpawners ( float DeltaTime );
	void Tick ( float DeltaTime );
	bool ShouldDebugDestinations ( );
	bool IsSpawningActive ( );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void AgentDestroyed ( class AGameCrowdAgent* Agent );
	void eventFlushAllAgents ( );
	void eventFlushAgents ( struct FCrowdSpawnInfoItem Item );
	int eventCreateSpawner ( class USeqAct_GameCrowdPopulationManagerToggle* inAction );
	void SetCrowdInfoVolume ( class AGameCrowdInfoVolume* Vol );
	void RemoveSpawnPoint ( class AGameCrowdDestination* GCD );
	void AddSpawnPoint ( class AGameCrowdDestination* GCD );
	void eventNotifyPathChanged ( );
	void PostBeginPlay ( );
};

UClass* AGameCrowdPopulationManager::pClassPointer = NULL;

// Class GameFramework.GameCrowdReplicationActor
// 0x000C (0x0230 - 0x0224)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                          		// 0x0224 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bSpawningActive : 1;                              		// 0x0228 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	int                                                DestroyAllCount;                                  		// 0x022C (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2781 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AGameCrowdReplicationActor::pClassPointer = NULL;

// Class GameFramework.GameCrowdSpawnRelativeActor
// 0x0000 (0x0224 - 0x0224)
class AGameCrowdSpawnRelativeActor : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2783 ];

		return pClassPointer;
	};

};

UClass* AGameCrowdSpawnRelativeActor::pClassPointer = NULL;

// Class GameFramework.GameDamageType
// 0x003C (0x00B4 - 0x0078)
class UGameDamageType : public UDamageType
{
public:
	class UMaterialInterface*                          MI_DamageOverlay;                                 		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   ExtraSoundToPlayWhenDamaged;                      		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bEnvironmentalDamage : 1;                         		// 0x0080 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bHighKickDeathAnimation : 1;                      		// 0x0080 (0x0004) [0x0000000000004002] [0x00000002] ( CPF_Const | CPF_Config )
	unsigned long                                      bForceRagdollDeath : 1;                           		// 0x0080 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bSuppressImpactFX : 1;                            		// 0x0080 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bSuppressBloodDecals : 1;                         		// 0x0080 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bSuppressPlayExplosiveRadialDamageEffects : 1;    		// 0x0080 (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	unsigned long                                      bAllowHeadShotGib : 1;                            		// 0x0080 (0x0004) [0x0000000000004002] [0x00000040] ( CPF_Const | CPF_Config )
	float                                              DistFromHitLocToGib;                              		// 0x0084 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	struct FCanvasIcon                                 KilledByIcon;                                     		// 0x0088 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FCanvasIcon                                 HeadshotIcon;                                     		// 0x009C (0x0014) [0x0000000000000002]              ( CPF_Const )
	float                                              IconScale;                                        		// 0x00B0 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2785 ];

		return pClassPointer;
	};

	void HandleDamageFX ( class AGamePawn* DamagedPawn, struct FTakeHitInfo* HitInfo );
	bool ShouldHeadShotGib ( class APawn* TestPawn, class APawn* Instigator );
	void PlayExtraDamageSound ( class APawn* VictimPawn );
	bool IsScriptedDamageType ( );
	bool ShouldPlayForceFeedback ( class APawn* DamagedPawn );
	void HandleDeadPlayer ( class AGamePlayerController* Player );
	void HandleKilledPawn ( class APawn* KilledPawn, class APawn* Instigator );
	void HandleDamagedPawn ( class APawn* DamagedPawn, class APawn* Instigator, int DamageAmt, struct FVector Momentum );
	void ModifyDamage ( class APawn* Victim, class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, int* out_Damage, struct FVector* out_Momentum );
	bool ShouldGib ( class APawn* TestPawn, class APawn* Instigator );
};

UClass* UGameDamageType::pClassPointer = NULL;

// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x01EC - 0x01EC)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2787 ];

		return pClassPointer;
	};

};

UClass* UGameDestinationConnRenderingComponent::pClassPointer = NULL;

// Class GameFramework.GameExplosion
// 0x00AC (0x00E8 - 0x003C)
class UGameExplosion : public UObject
{
public:
	unsigned long                                      bDirectionalExplosion : 1;                        		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDamageNeverBlocked : 1;                          		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAllowTeammateCringes : 1;                        		// 0x003C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFullDamageToAttachee : 1;                        		// 0x003C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;            		// 0x003C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bCausesFracture : 1;                              		// 0x003C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bAllowPerMaterialFX : 1;                          		// 0x003C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;		// 0x003C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bUseMapSpecificValues : 1;                        		// 0x003C (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bUseOverlapCheck : 1;                             		// 0x003C (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;           		// 0x003C (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bAutoControllerVibration : 1;                     		// 0x003C (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bUsingBBLocationWhenExplode : 1;                  		// 0x003C (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	float                                              DirectionalExplosionAngleDeg;                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageDelay;                                      		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFalloffExponent;                            		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      ActorToIgnoreForDamage;                           		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;        		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockDownRadius;                                  		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockDownStrength;                                		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CringeRadius;                                     		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   CringeDuration;                                   		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MomentumTransferScale;                            		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ExtraParticleEmitterTemplate;                     		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplosionEmitterScale;                            		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      HitActor;                                         		// 0x0088 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x008C (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0098 (0x000C) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPointLightComponent*                        ExploLight;                                       		// 0x00A8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploLightFadeOutTime;                            		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URadialBlurComponent*                        ExploRadialBlur;                                  		// 0x00B0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploRadialBlurFadeOutTime;                       		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExploRadialBlurMaxBlur;                           		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FractureMeshRadius;                               		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FracturePartVel;                                  		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraShake*                                CamShake;                                         		// 0x00C4 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Left;                                    		// 0x00C8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Right;                                   		// 0x00CC (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Rear;                                    		// 0x00D0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              CamShakeInnerRadius;                              		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamShakeOuterRadius;                              		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamShakeFalloff;                                  		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      CameraLensEffect;                                 		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraLensEffectRadius;                           		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2789 ];

		return pClassPointer;
	};

};

UClass* UGameExplosion::pClassPointer = NULL;

// Class GameFramework.GameExplosionActor
// 0x005C (0x0280 - 0x0224)
class AGameExplosionActor : public AActor
{
public:
	unsigned long                                      bHasExploded : 1;                                 		// 0x0224 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bActiveReloadBonusActive : 1;                     		// 0x0224 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0224 (0x0004) [0x0000000000000000] [0x00000004] 
	class UPointLightComponent*                        ExplosionLight;                                   		// 0x0228 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              LightFadeTime;                                    		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LightFadeTimeRemaining;                           		// 0x0230 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LightInitialBrightness;                           		// 0x0234 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URadialBlurComponent*                        ExplosionRadialBlur;                              		// 0x0238 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              RadialBlurFadeTime;                               		// 0x023C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadialBlurFadeTimeRemaining;                      		// 0x0240 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadialBlurMaxBlurAmount;                          		// 0x0244 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x0248 (0x0004) [0x0000000000000000]              
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                           		// 0x024C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AController*                                 InstigatorController;                             		// 0x0250 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActorFromPhysMaterialTrace;                    		// 0x0254 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocationFromPhysMaterialTrace;                 		// 0x0258 (0x000C) [0x0000000000000000]              
	class AActor*                                      Attachee;                                         		// 0x0264 (0x0004) [0x0000000000000000]              
	class AController*                                 AttacheeController;                               		// 0x0268 (0x0004) [0x0000000000000000]              
	float                                              DirectionalExplosionMinDot;                       		// 0x026C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ExplosionDirection;                               		// 0x0270 (0x000C) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              ExtraHowLongToLive;                               		// 0x027C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2791 ];

		return pClassPointer;
	};

	class UCameraShake* ChooseCameraShake ( struct FVector Epicenter, class APlayerController* PC );
	void SpawnCameraLensEffects ( class UPhysicalMaterial* PhysMtrl );
	void DoExplosionCameraEffects ( class UPhysicalMaterial* PhysMtrl );
	void ActuallyDoExplosionCameraEffects ( class UPhysicalMaterial* PhysMtrl );
	void Tick ( float DeltaTime );
	void DoExplosionDamage ( );
	void DrawDebug ( );
	bool IgnoreMaterialbyLeaning ( struct FVector VDir );
	void Explode ( class UGameExplosion* NewExplosionTemplate, struct FVector Direction );
	void SpawnExplosionFogVolume ( );
	void SpawnExplosionDecal ( );
	void SpawnExplosionParticleSystem ( class UParticleSystem* Template );
	void UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial );
	void KnockdownPawn ( class AGamePawn* Victim, float DistFromExplosion );
	void CringePawn ( class AGamePawn* Victim, float DistFromExplosion );
	void DoCringesAndKnockdowns ( );
	bool ShouldDoCringeFor ( class AGamePawn* Victim );
	void DoBreakFracturedMeshes ( struct FVector ExploOrigin, float DamageRadius, float RBStrength, class UClass* dmgType );
	float AdjustBaseDamage ( float Damage, class AActor* Victim );
	float ReduceDamage ( class AActor* Victim, class AController** outModController );
	void TakeDamageFromHurtExplosion ( class AActor* Victim, struct FVector ExploOrigin, unsigned long bDamageBlocked );
	bool IsDamageBlockable ( class AActor* HitActor, class AActor* Victim, struct FTraceHitInfo HitInfo );
	void HurtExplosion ( float BaseDamage, float DamageRadius, float DamageFalloffExp, class UClass* DamageType, float MomentumScale, struct FVector ExploOrigin, class AActor* IgnoredActor, class UClass* ActorClassToIgnoreForDamage, class AController* InstigatedByController, unsigned long bDoFullDamage );
	bool IsBehindExplosion ( class AActor* A );
	struct FVector GetBoundingBoxCengerForDamageBlock ( class AActor* Victim );
	bool IsIgnoreDamage ( class AActor* HitActor );
	bool IsIgnoreDamageBlockActor ( class AActor* HitActor );
	bool DoFullDamageToActor ( class AActor* Victim );
	class UPhysicalMaterial* GetPhysicalMaterial ( );
	void eventDestroyed ( );
	void eventPreBeginPlay ( );
};

UClass* AGameExplosionActor::pClassPointer = NULL;

// Class GameFramework.GameHUD
// 0x0000 (0x04B0 - 0x04B0)
class AGameHUD : public AHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2793 ];

		return pClassPointer;
	};

};

UClass* AGameHUD::pClassPointer = NULL;

// Class GameFramework.MobileHUD
// 0x003C (0x04EC - 0x04B0)
class AMobileHUD : public AGameHUD
{
public:
	unsigned long                                      bShowGameHUD : 1;                                 		// 0x04B0 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bForceMobileHUD : 1;                              		// 0x04B0 (0x0004) [0x0000000000044000] [0x00000002] ( CPF_Config | CPF_GlobalConfig )
	class UTexture2D*                                  ZoneBackgroundOn;                                 		// 0x04B4 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ZoneBackgroundSmallOn;                            		// 0x04B8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ZoneBackgroundTinyOn;                             		// 0x04BC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  FireZoneBackground;                               		// 0x04C0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  MoveZoneBackground;                               		// 0x04C4 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SteerZoneBackground;                              		// 0x04C8 (0x0004) [0x0000000000000000]              
	struct FColor                                      ZoneTileColor;                                    		// 0x04CC (0x0004) [0x0000000000000000]              
	struct FColor                                      ZoneTextColor;                                    		// 0x04D0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  AnalogHat;                                        		// 0x04D4 (0x0004) [0x0000000000000000]              
	TArray< struct FMobileInputZone >                  MobileInputZones;                                 		// 0x04D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                MobileInputConfig;                                		// 0x04E4 (0x0004) [0x0000000000000000]              
	int                                                MobileInputConfigMAX;                             		// 0x04E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2795 ];

		return pClassPointer;
	};

	void ResetMobileInputConfig ( );
	void NextMobileInputConfig ( );
	void DrawInputOverlays ( );
	void PostRender ( );
	void PostBeginPlay ( );
};

UClass* AMobileHUD::pClassPointer = NULL;

// Class GameFramework.GamePawn
// 0x0004 (0x04E0 - 0x04DC)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bLastHitWasHeadShot : 1;                          		// 0x04DC (0x0004) [0x0000000000002020] [0x00000001] ( CPF_Net | CPF_Transient )
	unsigned long                                      bRespondToExplosions : 1;                         		// 0x04DC (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2797 ];

		return pClassPointer;
	};

	void ReattachMeshWithoutBeingSeen ( );
	void ReattachMesh ( );
	void eventUpdateShadowSettings ( unsigned long bInWantShadow );
	void eventCringe ( float Duration );
	void ServerKnockdown ( struct FVector RBLinearVelocity, struct FVector RBAngularVelocity, struct FVector RadialOrigin, float RadialRadius, float RadialStrength, struct FVector PointImpulse, struct FVector PointImpulsePosition, struct FName PointImpulseBoneName );
	void GetTargetFrictionCylinder ( float* CylinderRadius, float* CylinderHeight );
};

UClass* AGamePawn::pClassPointer = NULL;

// Class GameFramework.GamePlayerController
// 0x0010 (0x0684 - 0x0674)
class AGamePlayerController : public APlayerController
{
public:
	unsigned long                                      bWarnCrowdMembers : 1;                            		// 0x0674 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugCrowdAwareness : 1;                         		// 0x0674 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsWarmupPaused : 1;                              		// 0x0674 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              AgentAwareRadius;                                 		// 0x0678 (0x0004) [0x0000000000000000]              
	struct FName                                       CurrentSoundMode;                                 		// 0x067C (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2799 ];

		return pClassPointer;
	};

	void ClientColorFade ( struct FColor FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime );
	void eventWarmupPause ( unsigned long bDesiredPauseState );
	bool CanUnpauseWarmup ( );
	void GetCurrentMovie ( struct FString* MovieName );
	void eventClientStopMovie ( float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie );
	void eventClientPlayMovie ( struct FString MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame );
	void KeepPlayingLoadingMovie ( );
	void ShowLoadingMovie ( unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays );
	struct FName GetCurrentSoundMode ( );
	void SetSoundMode ( struct FName InSoundModeName );
	void DoForceFeedbackForScreenShake ( class UCameraShake* ShakeData, float Scale );
	void eventNotifyCrowdAgentInRadius ( class AGameCrowdAgent* Agent );
	void eventNotifyCrowdAgentRefresh ( );
	void CrowdDebug ( unsigned long bEnabled );
	int GetUIPlayerIndex ( );
};

UClass* AGamePlayerController::pClassPointer = NULL;

// Class GameFramework.GamePlayerInput
// 0x0000 (0x0174 - 0x0174)
class UGamePlayerInput : public UPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2801 ];

		return pClassPointer;
	};

};

UClass* UGamePlayerInput::pClassPointer = NULL;

// Class GameFramework.GameProjectile
// 0x0000 (0x0264 - 0x0264)
class AGameProjectile : public AProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2803 ];

		return pClassPointer;
	};

};

UClass* AGameProjectile::pClassPointer = NULL;

// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2805 ];

		return pClassPointer;
	};

};

UClass* UGameTypes::pClassPointer = NULL;

// Class GameFramework.GameVehicle
// 0x0000 (0x0678 - 0x0678)
class AGameVehicle : public ASVehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2807 ];

		return pClassPointer;
	};

};

UClass* AGameVehicle::pClassPointer = NULL;

// Class GameFramework.GameWeapon
// 0x0000 (0x0314 - 0x0314)
class AGameWeapon : public AWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2809 ];

		return pClassPointer;
	};

};

UClass* AGameWeapon::pClassPointer = NULL;

// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0014 (0x0064 - 0x0050)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                         		// 0x0050 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     OutOfViewLocation;                                		// 0x0054 (0x000C) [0x0000000000000000]              
	unsigned long                                      bShowDebug : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2811 ];

		return pClassPointer;
	};

	void Recycle ( );
	bool MustBeHiddenFromThisPoint ( class UNavigationHandle* NavHandle, struct FVector InOutOfViewLocation );
	void RecycleNative ( );
};

UClass* UNavMeshGoal_OutOfViewFrom::pClassPointer = NULL;

// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x0010 (0x0060 - 0x0050)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	float                                              DistanceToCheck;                                  		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector >                           LocationsToCheck;                                 		// 0x0054 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2813 ];

		return pClassPointer;
	};

	void Recycle ( );
	bool BiasAgainstPolysWithinDistanceOfLocations ( class UNavigationHandle* NavHandle, float InDistanceToCheck, TArray< struct FVector > InLocationsToCheck );
};

UClass* UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::pClassPointer = NULL;

// Class GameFramework.SeqAct_ControlGameMovie
// 0x0014 (0x010C - 0x00F8)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                        		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                StartOfRenderingMovieFrame;                       		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EndOfRenderingMovieFrame;                         		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2815 ];

		return pClassPointer;
	};

};

UClass* USeqAct_ControlGameMovie::pClassPointer = NULL;

// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle
// 0x0040 (0x0128 - 0x00E8)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	float                                              WarmupPopulationPct;                              		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                   		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearOldArchetypes : 1;                          		// 0x00F0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                 		// 0x00F0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCastShadows : 1;                                 		// 0x00F0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFillPotentialSpawnPoints : 1;                    		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bForceObstacleChecking : 1;                       		// 0x00F0 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bForceNavMeshPathing : 1;                         		// 0x00F0 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIndividualSpawner : 1;                           		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                MaxAgents;                                        		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnRate;                                        		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLightingChannelContainer                   AgentLightingChannel;                             		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              MaxSpawnDist;                                     		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinBehindSpawnDist;                               		// 0x0104 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             PotentialSpawnPoints;                             		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AgentWarmupTime;                                  		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                NumAgentsToTickPerFrame;                          		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AGameCrowdAgent* >                   LastSpawnedList;                                  		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2817 ];

		return pClassPointer;
	};

	void AgentDestroyed ( class AGameCrowdAgent* Agent );
	float GetMaxSpawnDist ( );
	void eventFillCrowdSpawnInfoItem ( class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem* out_Item );
	int eventGetObjClassVersion ( );
};

UClass* USeqAct_GameCrowdPopulationManagerToggle::pClassPointer = NULL;

// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0000 (0x0128 - 0x0128)
class USeqAct_GameCrowdSpawner : public USeqAct_GameCrowdPopulationManagerToggle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2819 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USeqAct_GameCrowdSpawner::pClassPointer = NULL;

// Class GameFramework.SeqAct_ModifyProperty
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray< struct FPropertyInfo >                     Properties;                                       		// 0x00E8 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2821 ];

		return pClassPointer;
	};

};

UClass* USeqAct_ModifyProperty::pClassPointer = NULL;

// Class GameFramework.SeqAct_PlayAgentAnimation
// 0x0024 (0x011C - 0x00F8)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	TArray< struct FName >                             AnimationList;                                    		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotion : 1;                               		// 0x010C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFaceActionTargetFirst : 1;                       		// 0x010C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x010C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlendBetweenAnims : 1;                           		// 0x010C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	int                                                LoopIndex;                                        		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoopTime;                                         		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      ActionTarget;                                     		// 0x0118 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2823 ];

		return pClassPointer;
	};

	void SetCurrentAnimationActionFor ( class AGameCrowdAgentSkeletal* Agent );
	int eventGetObjClassVersion ( );
};

UClass* USeqAct_PlayAgentAnimation::pClassPointer = NULL;

// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0100 - 0x0100)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2825 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_CrowdAgentReachedDestination::pClassPointer = NULL;

// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x0140 - 0x00C4)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                             		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlayRecoil : 1;                                  		// 0x00C4 (0x0004) [0x0000000000002001] [0x00000002] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bOldPlayRecoil : 1;                               		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bApplyControl : 1;                                		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FRecoilDef                                  Recoil;                                           		// 0x00C8 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Aim;                                              		// 0x0138 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2827 ];

		return pClassPointer;
	};

};

UClass* UGameSkelCtrl_Recoil::pClassPointer = NULL;

// Class GameFramework.GameCameraBase
// 0x0008 (0x0044 - 0x003C)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                     		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bResetCameraInterpolation : 1;                    		// 0x0040 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2829 ];

		return pClassPointer;
	};

	void UpdatePlayerInput ( class UPlayerInput* Input );
	void eventModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void Init ( );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	void ResetInterpolation ( );
	void OnBecomeInActive ( class UGameCameraBase* NewCamera );
	void OnBecomeActive ( class UGameCameraBase* OldCamera );
};

UClass* UGameCameraBase::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCamera
// 0x0134 (0x0178 - 0x0044)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	struct FVector                                     LastActualCameraOrigin;                           		// 0x0044 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              WorstLocBlockedPct;                               		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              WorstLocPenetrationExtentScale;                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlendOutTime;                          		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlendInTime;                           		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlockedPct;                            		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              PenetrationExtentScale;                           		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastActualOriginOffset;                           		// 0x0068 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastActualCameraOriginRot;                        		// 0x0074 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              OriginOffsetInterpSpeed;                          		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastViewOffset;                                   		// 0x0084 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastCamFOV;                                       		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                            		// 0x0094 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UClass*                                      ThirdPersonCamDefaultClass;                       		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                   		// 0x009C (0x0004) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	float                                              LastHeightAdjustment;                             		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPitchAdjustment;                              		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastYawAdjustment;                                		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LeftoverPitchAdjustment;                          		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Focus_BackOffStrength;                            		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Focus_StepHeightAdjustment;                       		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Focus_MaxTries;                                   		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Focus_FastAdjustKickInTime;                       		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFocusChangeTime;                              		// 0x00C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ActualFocusPointWorldLoc;                         		// 0x00C4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastFocusPointLoc;                                		// 0x00D0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FCamFocusPointParams                        FocusPoint;                                       		// 0x00DC (0x0034) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFocusPointSet : 1;                               		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFocusPointSuccessful : 1;                        		// 0x0110 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDoingACameraTurn : 1;                            		// 0x0110 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTurnAlignTargetWhenFinished : 1;                 		// 0x0110 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0110 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDoingDirectLook : 1;                             		// 0x0110 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bDebugChangedCameraMode : 1;                      		// 0x0110 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	float                                              TurnCurTime;                                      		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                TurnStartAngle;                                   		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                TurnEndAngle;                                     		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              TurnTotalTime;                                    		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              TurnDelay;                                        		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                LastPostCamTurnYaw;                               		// 0x0128 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                DirectLookYaw;                                    		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DirectLookInterpSpeed;                            		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WorstLocInterpSpeed;                              		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastWorstLocationLocal;                           		// 0x0138 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastPreModifierCameraLoc;                         		// 0x0144 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastPreModifierCameraRot;                         		// 0x0150 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FPenetrationAvoidanceFeeler >       PenetrationAvoidanceFeelers;                      		// 0x015C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              OffsetAdjustmentInterpSpeed;                      		// 0x0168 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LastOffsetAdjustment;                             		// 0x016C (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2831 ];

		return pClassPointer;
	};

	void ResetInterpolation ( );
	void eventModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void OnBecomeActive ( class UGameCameraBase* OldCamera );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void UpdateCameraMode ( class APawn* P );
	class UGameThirdPersonCameraMode* FindBestCameraMode ( class APawn* P );
	void AdjustFocusPointInterpolation ( struct FRotator Delta );
	struct FVector GetActualFocusLocation ( );
	void eventUpdateFocusPoint ( class APawn* P );
	void ClearFocusPoint ( unsigned long bLeaveCameraRotation );
	class AActor* GetFocusActor ( );
	void SetFocusOnActor ( class AActor* FocusActor, struct FName FocusBoneName, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg );
	void SetFocusOnLoc ( struct FVector FocusWorldLoc, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg );
	void AdjustTurn ( int AngleOffset );
	void EndTurn ( );
	void BeginTurn ( int StartAngle, int EndAngle, float TimeSec, float DelaySec, unsigned long bAlignTargetWhenFinished );
	void PlayerUpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	float eventGetDesiredFOV ( class APawn* ViewedPawn );
	void Init ( );
	void Reset ( );
	class UGameThirdPersonCameraMode* CreateCameraMode ( class UClass* ModeClass );
};

UClass* UGameThirdPersonCamera::pClassPointer = NULL;

// Class GameFramework.GamePlayerCamera
// 0x0070 (0x04E0 - 0x0470)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                   		// 0x0470 (0x0004) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	class UClass*                                      ThirdPersonCameraClass;                           		// 0x0474 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UGameCameraBase*                             FixedCam;                                         		// 0x0478 (0x0004) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	class UClass*                                      FixedCameraClass;                                 		// 0x047C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UGameCameraBase*                             CurrentCamera;                                    		// 0x0480 (0x0004) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	unsigned long                                      bUseForcedCamFOV : 1;                             		// 0x0484 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bInterpolateCamChanges : 1;                       		// 0x0484 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bResetInterp : 1;                                 		// 0x0484 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              ForcedCamFOV;                                     		// 0x0488 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      LastViewTarget;                                   		// 0x048C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SplitScreenShakeScale;                            		// 0x0490 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class AActor*                                      LastTargetBase;                                   		// 0x0494 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0498 (0x0008) MISSED OFFSET
	struct FMatrix                                     LastTargetBaseTM;                                 		// 0x04A0 (0x0040) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2833 ];

		return pClassPointer;
	};

	float AdjustFOVForViewport ( float inHorizFOV, class APawn* CameraTargetPawn );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void ResetInterpolation ( );
	void SetColorScale ( struct FVector NewColorScale );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void UpdateCameraLensEffects ( struct FTViewTarget* OutVT );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	bool ShouldConstrainAspectRatio ( );
	class UGameCameraBase* FindBestCameraType ( class AActor* CameraTarget );
	void Reset ( );
	void PostBeginPlay ( );
	void CacheLastTargetBaseInfo ( class AActor* TargetBase );
	class UGameCameraBase* CreateCamera ( class UClass* CameraClass );
};

UClass* AGamePlayerCamera::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCameraMode
// 0x01EC (0x0228 - 0x003C)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                   		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FOVAngle;                                         		// 0x0040 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              BlendTime;                                        		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bLockedToViewTarget : 1;                          		// 0x0048 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bDirectLook : 1;                                  		// 0x0048 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bFollowTarget : 1;                                		// 0x0048 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bInterpLocation : 1;                              		// 0x0048 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUsePerAxisOriginLocInterp : 1;                   		// 0x0048 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bInterpRotation : 1;                              		// 0x0048 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bRotInterpSpeedConstant : 1;                      		// 0x0048 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bDoPredictiveAvoidance : 1;                       		// 0x0048 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
	unsigned long                                      bValidateWorstLoc : 1;                            		// 0x0048 (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSkipCameraCollision : 1;                         		// 0x0048 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bApplyDeltaViewOffset : 1;                        		// 0x0048 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bAdjustDOF : 1;                                   		// 0x0048 (0x0004) [0x0000000000000003] [0x00000800] ( CPF_Edit | CPF_Const )
	unsigned long                                      bDOFUpdated : 1;                                  		// 0x0048 (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	unsigned long                                      bInterpViewOffsetOnlyForCamTransition : 1;        		// 0x0048 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	float                                              FollowingInterpSpeed_Pitch;                       		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingInterpSpeed_Yaw;                         		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingInterpSpeed_Roll;                        		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingCameraVelThreshold;                      		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              OriginLocInterpSpeed;                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PerAxisOriginLocInterpSpeed;                      		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              OriginRotInterpSpeed;                             		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     StrafeLeftAdjustment;                             		// 0x0070 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     StrafeRightAdjustment;                            		// 0x007C (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetScalingThreshold;                     		// 0x0088 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetInterpSpeedIn;                        		// 0x008C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetInterpSpeedOut;                       		// 0x0090 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LastStrafeOffset;                                 		// 0x0094 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     RunFwdAdjustment;                                 		// 0x00A0 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     RunBackAdjustment;                                		// 0x00AC (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetScalingThreshold;                        		// 0x00B8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetInterpSpeedIn;                           		// 0x00BC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetInterpSpeedOut;                          		// 0x00C0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LastRunOffset;                                    		// 0x00C4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     WorstLocOffset;                                   		// 0x00D0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     TargetRelativeCameraOriginOffset;                 		// 0x00DC (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FViewOffsetData                             ViewOffset;                                       		// 0x00E8 (0x0024) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[ 0x6 ];            		// 0x010C (0x00D8) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_FalloffExponent;                              		// 0x01E4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_BlurKernelSize;                               		// 0x01E8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_FocusInnerRadius;                             		// 0x01EC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_MaxNearBlurAmount;                            		// 0x01F0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_MaxFarBlurAmount;                             		// 0x01F4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LastDOFRadius;                                    		// 0x01F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastDOFDistance;                                  		// 0x01FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DOFDistanceInterpSpeed;                           		// 0x0200 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     DOFTraceExtent;                                   		// 0x0204 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_RadiusFalloff;                                		// 0x0210 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DOF_RadiusRange;                                  		// 0x0214 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DOF_RadiusDistRange;                              		// 0x021C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ViewOffsetInterp;                                 		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2835 ];

		return pClassPointer;
	};

	void UpdatePlayerInput ( class UPlayerInput* Input );
	void SetViewOffset ( struct FViewOffsetData* NewViewOffset );
	void ModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void UpdatePostProcess ( float DeltaTime, struct FTViewTarget* VT );
	struct FVector DOFTrace ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace );
	struct FVector GetDOFFocusLoc ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	bool SetFocusPoint ( class APawn* ViewedPawn );
	struct FVector eventGetCameraWorstCaseLoc ( class APawn* TargetPawn );
	float GetDesiredFOV ( class APawn* ViewedPawn );
	struct FVector eventAdjustViewOffset ( class APawn* P, struct FVector Offset );
	void OnBecomeInActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode );
	void OnBecomeActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode );
	void Init ( );
};

UClass* UGameThirdPersonCameraMode::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000C (0x0234 - 0x0228)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	float                                              WorstLocAimingZOffset;                            		// 0x0228 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bTemporaryOriginRotInterp : 1;                    		// 0x022C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              TemporaryOriginRotInterpSpeed;                    		// 0x0230 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2837 ];

		return pClassPointer;
	};

};

UClass* UGameThirdPersonCameraMode_Default::pClassPointer = NULL;

// Class GameFramework.GameDecal
// 0x0008 (0x031C - 0x0314)
class UGameDecal : public UDecalComponent
{
public:
	class UMaterialInstanceTimeVarying*                MITV_Decal;                                       		// 0x0314 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APawn*                                       Instigator;                                       		// 0x0318 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2839 ];

		return pClassPointer;
	};

};

UClass* UGameDecal::pClassPointer = NULL;

// Class GameFramework.GameDecalManager
// 0x0004 (0x0258 - 0x0254)
class AGameDecalManager : public ADecalManager
{
public:
	float                                              MinDecalDistanceSq;                               		// 0x0254 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2841 ];

		return pClassPointer;
	};

	class UGameDecal* SpawnDecalMinimal ( float InDecalLifeSpan, float InCanSpawnDistance, struct FVector* DecalLocation );
	bool IsTooCloseToActiveDecal ( float InCanSpawnDistance, struct FVector* DecalLocation );
};

UClass* AGameDecalManager::pClassPointer = NULL;

// Class GameFramework.GameParticleEventManager
// 0x0000 (0x0224 - 0x0224)
class AGameParticleEventManager : public AParticleEventManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2843 ];

		return pClassPointer;
	};

	void eventHandleParticleModuleEventSendToGame ( struct FName EventType, class UParticleModuleEventSendToGame* InEvent, struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName );
};

UClass* AGameParticleEventManager::pClassPointer = NULL;

// Class GameFramework.GameSpecialMove
// 0x0040 (0x007C - 0x003C)
class UGameSpecialMove : public UObject
{
public:
	class AGamePawn*                                   PawnOwner;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	struct FName                                       Handle;                                           		// 0x0040 (0x0008) [0x0000000000000000]              
	float                                              LastCanDoSpecialMoveTime;                         		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLastCanDoSpecialMove : 1;                        		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReachPreciseDestination : 1;                     		// 0x004C (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bReachedPreciseDestination : 1;                   		// 0x004C (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bReachPreciseRotation : 1;                        		// 0x004C (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bReachedPreciseRotation : 1;                      		// 0x004C (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bForcePrecisePosition : 1;                        		// 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     PreciseDestination;                               		// 0x0050 (0x000C) [0x0000000000000002]              ( CPF_Const )
	class AActor*                                      PreciseDestBase;                                  		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     PreciseDestRelOffset;                             		// 0x0060 (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              PreciseRotationInterpolationTime;                 		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    PreciseRotation;                                  		// 0x0070 (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2845 ];

		return pClassPointer;
	};

	struct FVector RelativeToWorldOffset ( struct FRotator InRotation, struct FVector RelativeSpaceOffset );
	struct FVector WorldToRelativeOffset ( struct FRotator InRotation, struct FVector WorldSpaceOffset );
	void ForcePawnRotation ( class APawn* P, struct FRotator NewRotation );
	bool MessageEvent ( struct FName EventName, class UObject* Sender );
	void ResetFacePreciseRotation ( );
	void eventReachedPrecisePosition ( );
	void SetFacePreciseRotation ( struct FRotator RotationToFace, float InterpolationTime );
	void SetReachPreciseDestination ( struct FVector DestinationToReach, unsigned long bCancel );
	bool ShouldReplicate ( );
	void SpecialMoveFlagsUpdated ( );
	void Tick ( float DeltaTime );
	void SpecialMoveEnded ( struct FName PrevMove, struct FName NextMove );
	void SpecialMoveStarted ( unsigned long bForced, struct FName PrevMove );
	bool InternalCanDoSpecialMove ( );
	bool CanDoSpecialMove ( unsigned long bForceCheck );
	bool CanOverrideSpecialMove ( struct FName InMove );
	bool CanOverrideMoveWith ( struct FName NewMove );
	bool CanChainMove ( struct FName NextMove );
	void ExtractSpecialMoveFlags ( int Flags );
	void InitSpecialMoveFlags ( int* out_Flags );
	void InitSpecialMove ( class AGamePawn* inPawn, struct FName InHandle );
};

UClass* UGameSpecialMove::pClassPointer = NULL;

// Class GameFramework.GameCrowdSpawnerInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37053 ];

		return pClassPointer;
	};

	float GetMaxSpawnDist ( );
	void AgentDestroyed ( class AGameCrowdAgent* Agent );
};

UClass* UGameCrowdSpawnerInterface::pClassPointer = NULL;

// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37270 ];

		return pClassPointer;
	};

	void GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot );
};

UClass* UGameCrowdSpawnInterface::pClassPointer = NULL;

// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x02AC - 0x02AC)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37271 ];

		return pClassPointer;
	};

};

UClass* ADynamicGameCrowdDestination::pClassPointer = NULL;

// Class GameFramework.GameAICmd_Hover_MoveToGoal
// 0x0034 (0x008C - 0x0058)
class UGameAICmd_Hover_MoveToGoal : public UGameAICommand
{
public:
	class AActor*                                      Path;                                             		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      Find;                                             		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      Goal;                                             		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Radius;                                           		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasFiring : 1;                                   		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              DesiredHoverHeight;                               		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              CurrentHoverHeight;                               		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SubGoalReachDist;                                 		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              GoalDistance;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FVector                                     MoveVectDest;                                     		// 0x007C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UReachSpec*                                  CurrentSpec;                                      		// 0x0088 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37351 ];

		return pClassPointer;
	};

	bool IsEnemyBasedOnInterpActor ( class APawn* InEnemy );
	bool HandlePathObstruction ( class AActor* BlockedBy );
	void Pushed ( );
	bool MoveToGoal ( class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight );
};

UClass* UGameAICmd_Hover_MoveToGoal::pClassPointer = NULL;

// Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh
// 0x008C (0x00E4 - 0x0058)
class UGameAICmd_Hover_MoveToGoal_Mesh : public UGameAICommand
{
public:
	class AActor*                                      Find;                                             		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Radius;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasFiring : 1;                                   		// 0x0060 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bFinalApproach : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFallbackMoveToMesh : 1;                          		// 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              DesiredHoverHeight;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              CurrentHoverHeight;                               		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SubGoalReachDist;                                 		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              GoalDistance;                                     		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     IntermediatePoint;                                		// 0x0074 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastMovePoint;                                    		// 0x0080 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                NumMovePointFails;                                		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaxMovePointFails;                                		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FVector                                     FallbackDest;                                     		// 0x0094 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      MoveToActor;                                      		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FBasedPosition                              LastMoveTargetPathLocation;                       		// 0x00A4 (0x0034) [0x0000000000000000]              
	struct FVector                                     InitialFinalDestination;                          		// 0x00D8 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37397 ];

		return pClassPointer;
	};

	void eventDrawDebug ( class AHUD* H, struct FName Category );
	bool IsEnemyBasedOnInterpActor ( class APawn* InEnemy );
	bool ShouldUpdateBreadCrumbs ( );
	bool HasReachedGoal ( );
	void ReEvaluatePath ( );
	bool HandlePathObstruction ( class AActor* BlockedBy );
	void Tick ( float DeltaTime );
	void Popped ( );
	void Pushed ( );
	bool HoverBackToMesh ( class AGameAIController* AI );
	bool HoverToPoint ( class AGameAIController* AI, struct FVector InPoint, float InGoalDistance, float InHoverHeight );
	bool HoverToGoal ( class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight );
};

UClass* UGameAICmd_Hover_MoveToGoal_Mesh::pClassPointer = NULL;

// Class GameFramework.GameCrowd_ListOfAgents
// 0x000C (0x0048 - 0x003C)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	TArray< struct FAgentArchetypeInfo >               ListOfAgents;                                     		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37578 ];

		return pClassPointer;
	};

};

UClass* UGameCrowd_ListOfAgents::pClassPointer = NULL;

// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x02AC - 0x02AC)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38028 ];

		return pClassPointer;
	};

};

UClass* AGameCrowdInteractionDestination::pClassPointer = NULL;

// Class GameFramework.GameExplosionContent
// 0x0048 (0x0084 - 0x003C)
class UGameExplosionContent : public UObject
{
public:
	unsigned long                                      bAutoControllerVibration : 1;                     		// 0x003C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;           		// 0x003C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class USoundCue*                                   ExplosionSound;                                   		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake;                                         		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Left;                                    		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Right;                                   		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Rear;                                    		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeInnerRadius;                              		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeOuterRadius;                              		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeFalloff;                                  		// 0x005C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UClass*                                      CameraLensEffect;                                 		// 0x0060 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CameraLensEffectRadius;                           		// 0x0064 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPointLightComponent*                        ExploLight;                                       		// 0x0068 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploLightFadeOutTime;                            		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class URadialBlurComponent*                        ExploRadialBlur;                                  		// 0x0070 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploRadialBlurFadeOutTime;                       		// 0x0074 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ExploRadialBlurMaxBlur;                           		// 0x0078 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x007C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                               		// 0x0080 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38465 ];

		return pClassPointer;
	};

};

UClass* UGameExplosionContent::pClassPointer = NULL;

// Class GameFramework.GameFixedCamera
// 0x0004 (0x0048 - 0x0044)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                       		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38486 ];

		return pClassPointer;
	};

	void OnBecomeActive ( class UGameCameraBase* OldCamera );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
};

UClass* UGameFixedCamera::pClassPointer = NULL;

// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x0310 - 0x0310)
class AGameKActorSpawnableEffect : public AKActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38497 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void eventFellOutOfWorld ( class UClass* dmgType );
	void eventPostBeginPlay ( );
};

UClass* AGameKActorSpawnableEffect::pClassPointer = NULL;

// Class GameFramework.GameWaveForms
// 0x0010 (0x004C - 0x003C)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                           		// 0x003C (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                            		// 0x0040 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                               		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38611 ];

		return pClassPointer;
	};

};

UClass* UGameWaveForms::pClassPointer = NULL;

// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0004 (0x0040 - 0x003C)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                    		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39087 ];

		return pClassPointer;
	};

};

UClass* UPMESTG_LeaveADecalBase::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif