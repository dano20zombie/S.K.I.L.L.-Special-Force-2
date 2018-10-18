/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct SFGame.SFTypes.sVipGradeInfo
// 0x0024
struct FsVipGradeInfo
{
	unsigned char                                      Grade;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                from_point;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                to_point;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Discount;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AddEXP;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              AddSpGauge;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              AddRoomOtherExpRate;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              AddRoomOtherSpGaugeRate;                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              AddLuckyPoint;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SModeStatInfo
// 0x0008
struct FSModeStatInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SFacebookUserInfo
// 0x0024
struct FSFacebookUserInfo
{
	struct FQWord                                      FacebookID;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     FacebookName;                                     		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                USN;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.TwitchTVResolutionInfo
// 0x0014
struct FTwitchTVResolutionInfo
{
	struct FString                                     ResolutionText;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Width;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SClanInfo
// 0x013C
struct FSClanInfo
{
	struct FString                                     CSN;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WebURL;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Area;                                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MemeberCount;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MasterUSN;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MasterName;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Notice;                                           		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Regdate;                                          		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanPoint;                                        		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameCount;                                        		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WinCount;                                         		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PageCount;                                        		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AreaText;                                         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RegularCount;                                     		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaxClanCount;                                     		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanRank;                                         		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMark;                                         		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMarkEffect;                                   		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Mode_No;                                          		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Map_No;                                           		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           OptionDataValue;                                  		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nCSN;                                             		// 0x0114 (0x0004) [0x0000000000000000]              
	struct FString                                     GFXClanPoint;                                     		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nMemeberCount;                                    		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                nRegularCount;                                    		// 0x0128 (0x0004) [0x0000000000000000]              
	int                                                nGameCount;                                       		// 0x012C (0x0004) [0x0000000000000000]              
	int                                                nWinCount;                                        		// 0x0130 (0x0004) [0x0000000000000000]              
	int                                                nMaxClanCount;                                    		// 0x0134 (0x0004) [0x0000000000000000]              
	int                                                nClanRank;                                        		// 0x0138 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SFiringRangeListInfo
// 0x006C
struct FSFiringRangeListInfo
{
	struct FString                                     Rank;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     USN;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CSN;                                              		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMark;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Score;                                            		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Initial;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nUSN;                                             		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                nCSN;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                nScore;                                           		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.S1VS1UserRankInfo
// 0x006C
struct FS1VS1UserRankInfo
{
	struct FString                                     RankingStartDate;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Ranking;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Rank;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     USN;                                              		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Kill;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Death;                                            		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Win;                                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Lose;                                             		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SClanRecommend
// 0x0078
struct FSClanRecommend
{
	struct FString                                     ClanIndex;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     USN;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CSN;                                              		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMaster;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMark;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RecommendUSN;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RecommendNick;                                    		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RecommendDate;                                    		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Result;                                           		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SClanModeMap
// 0x001C
struct FSClanModeMap
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Img;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalName;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SDetailOption
// 0x0028
struct FSDetailOption
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           DropDownName;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultSelectedIndex;                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SDropDownMenu
// 0x0024
struct USFTypes_FSDropDownMenu
{
	class UGFxClikWidget*                              DropDownMenuWidget;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     DropDownWidgetName;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Tag;                                              		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultSelectedIndex;                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.DistortionData
// 0x0008
struct FDistortionData
{
	float                                              LifeSpan;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Quantity;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SRecvPacketHandler
// 0x0028
struct FSRecvPacketHandler
{
	int                                                ProtocolID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   OKHandler;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TransactionHandler;                               		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AutoHandler;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.GameCondition
// 0x000C
struct FGameCondition
{
	int                                                Kill;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HeadShot;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.UserConditionData
// 0x001C
struct FUserConditionData
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FGameCondition                              RecentCondition;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FGameCondition                              BaseCondition;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SBombSPData
// 0x002C
struct FSBombSPData
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GiveSP;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FQWord                                      CouponSN[ 0x3 ];                                  		// 0x0008 (0x0018) [0x0000000000000000]              
	int                                                RemainNumber[ 0x3 ];                              		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sPlayerVIPInfo
// 0x0028
struct FsPlayerVIPInfo
{
	struct FString                                     ItemCode;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DailyVipPoint;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TotalVipPoint;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      VipGrade;                                         		// 0x0014 (0x0001) [0x0000000000000000]              
	float                                              Discount;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     ExpriedDate;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.sPawnTuneInfo
// 0x0010
struct FsPawnTuneInfo
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TakeDamageRatio;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              GroundSpeedRatio;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DodgeSpeed;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sWeaponTuneInfo
// 0x0024
struct FsWeaponTuneInfo
{
	struct FString                                     WeaponClassString;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      WeaponClass;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              InstantHitDamage;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Thickness;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TracerTemplate;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ExtraTracerTemplate;                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sWeaponInitInfo
// 0x0058
struct FsWeaponInitInfo
{
	struct FString                                     WeaponClassString;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      WeaponClass;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              InstantHitDamage;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              ReloadTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              WeaponRange;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                AmmoInMgzCount;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                AmmoCount;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              KnockBack;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              StoppingPower;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                PenetrationCount;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              PenetrationPower;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                bForceAutomatic;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                bUseLoopReload;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Spread;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                SGPelletCount;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              GrazeDamageRate;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              GrazeExtend;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RoundBurst;                                       		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.sAjdPawnProp
// 0x0034
struct FsAjdPawnProp
{
	unsigned char                                      AIType;                                           		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Health;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageAdj;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageAdjRadi;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundSpeed;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SprintingPct;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WalkingPct;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CustomScaleRate;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IntenseMulByTime;                                 		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BeginIntenseMulByTime;                            		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxIntenseMulByTime;                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DropItemCount;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PawnAggroMultiplier;                              		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.SFTakeHitInfo
// 0x0038
struct FSFTakeHitInfo
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       HitBone;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                HitBoneIndex;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	class AActor*                                      DamagedBy;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                HitType;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.MapRotationInfo
// 0x0008
struct FMapRotationInfo
{
	int                                                ModeID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SliceState
// 0x0014
struct FSliceState
{
	struct FPlane                                      SlicePlane;                                       		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                StaticMeshComponentID;                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.UsableInGameItemData
// 0x001C
struct FUsableInGameItemData
{
	struct FString                                     ItemType;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ItemValue;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Amount;                                           		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.SDamageResist
// 0x0008
struct FSDamageResist
{
	class UClass*                                      DamageTypeClass;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReduceRate;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.SQuickJoin
// 0x0010
struct FSQuickJoin
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CustomModeType;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PickUpWeapon;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SPackageItem
// 0x000C
struct FSPackageItem
{
	int                                                pkg_itemid;                                       		// 0x0000 (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	int                                                sub_itemid;                                       		// 0x0004 (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	int                                                counts;                                           		// 0x0008 (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
};

// ScriptStruct SFGame.SFTypes.SRecommendItemType
// 0x0018
struct FSRecommendItemType
{
	struct FString                                     Typename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemArray;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SRecommendItem
// 0x0020
struct FSRecommendItem
{
	int                                                MaxRank;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxSP;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           KeyTypes;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           BaseTypes;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SGuideItem
// 0x0014
struct FSGuideItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ModeItemCode;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUnSelected : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTypes.AIPawnScore
// 0x001C
struct FAIPawnScore
{
	unsigned char                                      PawnType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTeamReward : 1;                                  		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      RewardBuff;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BasisScore;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BasisModeExp;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BasisModeMoney;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CriticalDistance;                                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.DamageRatioByGameMode
// 0x000C
struct FDamageRatioByGameMode
{
	float                                              DamageRatio;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageTypeName;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.InGameStoreItem
// 0x0068
struct FInGameStoreItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                UsableLevel;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Price;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ResellPrice;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              PriceRatio;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              UpgradePriceRate;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     TabName;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TabImage;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GroupIndex;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      InstantBuy : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     strInstantMsg;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LogData;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     ParticleName;                                     		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SoundName;                                        		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisableInUseItem : 1;                            		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTypes.WeaponAmmo
// 0x0014
struct FWeaponAmmo
{
	unsigned char                                      WeaponGroup;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddedAmmo;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LimitAmmo;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddedMagazine;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LimitMagazine;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.SRepairAllDialogInfo
// 0x0050
struct FSRepairAllDialogInfo
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     msg;                                              		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           WeaponNames;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           WeaponImgs;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RepairGauges;                                     		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      NeedSps;                                          		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQWord >                            ItemSNs;                                          		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SRepairDialogInfo
// 0x0050
struct FSRepairDialogInfo
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     MySp;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NeedSp;                                           		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     msg;                                              		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponName;                                       		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponImg;                                        		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RepairGauge;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ItemSN;                                           		// 0x0048 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SResellDialogInfo
// 0x0018
struct FSResellDialogInfo
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ItemSN;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                DialogType;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SSpawnableAlienInfo
// 0x0020
struct FSSpawnableAlienInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     ClassName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CombatType;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            AttackTypes;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.EnemyInfo
// 0x0008
struct FEnemyInfo
{
	unsigned char                                      EnemyType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              EnemySpawnRate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sWaveInfo
// 0x0030
struct FsWaveInfo
{
	int                                                WavePointsRemaining;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxAliveRatio;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              EndOfRoundDelay;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      UseSecondarySpawnPoint : 1;                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      NextWaveWhenEliminateEnemy : 1;                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                ExplicitNextWaveIndex;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FEnemyInfo >                        EnemyInfoList;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIgnorePlayerCounterOnThisWave : 1;               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPauseWhenAllSpawn : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     EventExtermination;                               		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.AdditionalModeResult
// 0x000C
struct FAdditionalModeResult
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.AddtionalIdleMotion
// 0x0010
struct FAddtionalIdleMotion
{
	float                                              MinDelay;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxDelay;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       IdleMotionName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SSupportMap
// 0x0014
struct FSSupportMap
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      VIPMapUnlock : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTypes.CachedSupportMap
// 0x0010
struct FCachedSupportMap
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSSupportMap >                      Maps;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SShutDownNoti
// 0x0014
struct FSShutDownNoti
{
	int                                                NotiType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RemainTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ShutDownName;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SShutDownLaw
// 0x0010
struct FSShutDownLaw
{
	struct FString                                     ShutDownName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ShutDownCode;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SPvEDifficultyUIInfo
// 0x001C
struct FSPvEDifficultyUIInfo
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      LevelCode;                                        		// 0x000C (0x0001) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	struct FString                                     LevelText;                                        		// 0x0010 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SMapCaption
// 0x0024
struct FSMapCaption
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ImageURL;                                         		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0018 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SEmblemInfo
// 0x0010
struct FSEmblemInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                Condition;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      Available : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTypes.SWeaponProgressionTask
// 0x0044
struct FSWeaponProgressionTask
{
	struct FName                                       SupplyCode;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TaskIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSPBuyable : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LimitRank;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                CurProgress;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MaxProgress;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     ChallengeName;                                    		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChallengeImage;                                   		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChallengeMessage;                                 		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SAdditionalInfo
// 0x0008
struct FSAdditionalInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.ChallengeLocalized
// 0x0018
struct FChallengeLocalized
{
	struct FString                                     ChallengeName;                                    		// 0x0000 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UI_Message;                                       		// 0x000C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.ChallengeData
// 0x0074
struct FChallengeData
{
	int                                                Group;                                            		// 0x0000 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	int                                                TaskIndex;                                        		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       Contents;                                         		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                from_GoalPoint;                                   		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                to_GoalPoint;                                     		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SupplyCode;                                       		// 0x0018 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                ChallengePoint;                                   		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     WeaponType;                                       		// 0x0024 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                GameModeID;                                       		// 0x0030 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MissionID;                                        		// 0x0034 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MapID;                                            		// 0x0038 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      AIType;                                           		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      AIGrade;                                          		// 0x003D (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                TotalPlayerCounter;                               		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       RewardType;                                       		// 0x0044 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     RewardValue;                                      		// 0x004C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ImageSet;                                         		// 0x0058 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     SheetName;                                        		// 0x0064 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x0070 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SFGame.SFTypes.SFWeaponLogMember
// 0x0048
struct FSFWeaponLogMember
{
	struct FString                                     WeaponImgName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponCI;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                KillPercent;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                AssistPercent;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HeadShotPercent;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                EtcPercent;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ValidAccuracy;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                HeadAccuracy;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                ChestAccuracy;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                EtcAccuracy;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              KADRatio;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SFWeaponLog
// 0x0048
struct FSFWeaponLog
{
	struct FName                                       WeaponItemCode;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ImgName;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayTime;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                DeadCount;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                AssistCount;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                HitEnemyCount;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                HeadShotCount;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                TotalHitCount;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                HeadHitCount;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                HeadPointHitCount;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ChestHitCount;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sEmoticonData
// 0x0018
struct FsEmoticonData
{
	struct FString                                     Src;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     tgt;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SItemPriceInfo
// 0x0010
struct FSItemPriceInfo
{
	struct FString                                     Type;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SCharRange
// 0x0008
struct FSCharRange
{
	int                                                Start;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                End;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SPromotionEventInfo
// 0x0038
struct FSPromotionEventInfo
{
	TArray< int >                                      GameModeIDArray;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PromotionID;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFinal : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     PromotionName;                                    		// 0x0014 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PromotionExplain;                                 		// 0x0020 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ColorInProgress;                                  		// 0x002C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SRecvReward
// 0x0054
struct FSRecvReward
{
	int                                                reward;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     RewardText;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RewardType;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      ItemSN;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	struct FQWord                                      ItemNSN;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FString                                     EndDate;                                          		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Durability;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned char                                      SupplyItemType;                                   		// 0x003C (0x0001) [0x0000000000000000]              
	struct FString                                     IsInUse;                                          		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsShow : 1;                                       		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ItemCount;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SPromotionEvent
// 0x008C
struct FSPromotionEvent
{
	unsigned char                                      PromotionID;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      PromotionParentID;                                		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FString                                     PromotionName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PromotionTitle;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PromotionDesc;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SpecialText;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UIType;                                           		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PromotionStartDate;                               		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PromotionEndDate;                                 		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      IsDailyEvent;                                     		// 0x0058 (0x0001) [0x0000000000000000]              
	int                                                DailyStartTime;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                DailyEndTime;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      MaxStep;                                          		// 0x0064 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           StepArray;                                        		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSRecvReward >                      RecvRewardArray;                                  		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrentValue;                                     		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.sRandomBoxInfo
// 0x0024
struct FsRandomBoxInfo
{
	int                                                BoxID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     EndDate;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                KeyID;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                KeyCount;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     IsShow;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SFUITabList
// 0x002C
struct FSFUITabList
{
	int                                                Code;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Filter;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconID;                                           		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bVip : 1;                                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTypes.sRecvRandomBoxReward
// 0x0014
struct FsRecvRandomBoxReward
{
	int                                                BoxID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RewardID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     RareType;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SRecvPromoEventReward
// 0x0058
struct FSRecvPromoEventReward
{
	int                                                PromotionID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSRecvReward                                RecvReward;                                       		// 0x0004 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SRecvChallengeReward
// 0x0018
struct FSRecvChallengeReward
{
	struct FName                                       SupplyCode;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TaskIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FSRecvReward >                      RewardArray;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.AwardValue
// 0x0018
struct FAwardValue
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              N;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     S;                                                		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.Int
// 0x0008
struct FInt
{
	int                                                Hi;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Low;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SEventItem
// 0x0024
struct FSEventItem
{
	struct FString                                     EventName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkURL;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     context;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SFindUserInfo
// 0x0020
struct FSFindUserInfo
{
	int                                                USN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ServerNumber;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ChannelNumber;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                channelType;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RoomNumber;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SGiftItem
// 0x0044
struct FSGiftItem
{
	struct FQWord                                      GiftNSN;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                GiftValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                USN;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GiftType;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Date;                                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUsable : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Message;                                          		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.ItemSetInfos
// 0x0144
struct FItemSetInfos
{
	unsigned char                                      bCachedPawnItemIDTable;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      bCachedPriWeaponItemIDTable[ 0x3 ];               		// 0x0001 (0x0003) [0x0000000000000000]              
	unsigned char                                      bCachedSecWeaponItemIDTable[ 0x3 ];               		// 0x0004 (0x0003) [0x0000000000000000]              
	int                                                PawnItemIDTable[ 0xD ];                           		// 0x0008 (0x0034) [0x0000000000000000]              
	int                                                WeaponItemIDTable1Pri[ 0xB ];                     		// 0x003C (0x002C) [0x0000000000000000]              
	int                                                WeaponItemIDTable1Sec[ 0xB ];                     		// 0x0068 (0x002C) [0x0000000000000000]              
	int                                                WeaponItemIDTable2Pri[ 0xB ];                     		// 0x0094 (0x002C) [0x0000000000000000]              
	int                                                WeaponItemIDTable2Sec[ 0xB ];                     		// 0x00C0 (0x002C) [0x0000000000000000]              
	int                                                WeaponItemIDTable3Pri[ 0xB ];                     		// 0x00EC (0x002C) [0x0000000000000000]              
	int                                                WeaponItemIDTable3Sec[ 0xB ];                     		// 0x0118 (0x002C) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sItemAdditionalEffect
// 0x0020
struct FsItemAdditionalEffect
{
	float                                              LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ClanPoint;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Jump;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              HP;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Swap;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Reload;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.AttendanceBoxItemInfo
// 0x0010
struct FAttendanceBoxItemInfo
{
	struct FString                                     RewardType;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RewardValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.AttendanceEventInfo
// 0x0040
struct FAttendanceEventInfo
{
	struct FAttendanceBoxItemInfo                      BoxItems[ 0x2 ];                                  		// 0x0000 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BoxIndex;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                EventID;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                CurrScore;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      BoxAcquireType;                                   		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned long                                      IsShowItem : 1;                                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     TaskDate;                                         		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SFeverValues
// 0x000C
struct FSFeverValues
{
	int                                                AddEXP;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AddSP;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AddLP;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SFeverTimeEvent
// 0x008C
struct FSFeverTimeEvent
{
	int                                                Number;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     StartDate;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FinishDate;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StartTime;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FinishTime;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ApplyDay;                                         		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFeverValues                               Values;                                           		// 0x004C (0x000C) [0x0000000000000000]              
	struct FString                                     RewardItemID;                                     		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SaleItemID;                                       		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ParsedRewardItemID;                               		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ParsedSaleItemID;                                 		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFerverEventActive : 1;                           		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTypes.Time_t
// 0x0020
struct FTime_t
{
	int                                                Year;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Month;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DayOfWeek;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Hour;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Min;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Sec;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MSec;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SRealTimeEvent
// 0x00C4
struct FSRealTimeEvent
{
	int                                                EventNumber;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FQWord                                      EventStartDate;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FQWord                                      EventEndDate;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       EventType;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                EventCondition1;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     EventCondition1Value;                             		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EventCondition2;                                  		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EventCondition2Value;                             		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FTime_t                                     ParsedEventStartDate;                             		// 0x003C (0x0020) [0x0000000000000000]              
	struct FTime_t                                     ParsedEventEndDate;                               		// 0x005C (0x0020) [0x0000000000000000]              
	TArray< int >                                      ParsedEventValues1;                               		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ParsedEventValues2;                               		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EXPValue;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                SPValue;                                          		// 0x0098 (0x0004) [0x0000000000000000]              
	struct FString                                     BoxType;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BoxCounter;                                       		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FString                                     EventName;                                        		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EventDescription;                                 		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.ResourceInfo
// 0x000C
struct FResourceInfo
{
	class UObject*                                     Resource;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ResourceName;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sItemContext
// 0x0010
struct FsItemContext
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     context;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SChannelFillInfo
// 0x0008
struct FSChannelFillInfo
{
	int                                                MinPlayerRatio;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FillType;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SChannelSetting
// 0x0028
struct FSChannelSetting
{
	int                                                nServerID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nChannelNum;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nType;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nPeopleNum;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nMaxPeople;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxVipCount;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      nEnable;                                          		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                nFriendNum;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nClanNum;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nColor;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SChannelEXP
// 0x000C
struct FSChannelEXP
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ExpAddRatio;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SPGageAddRatio;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SRecommendChannel
// 0x0008
struct FSRecommendChannel
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nColor;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SChannelType
// 0x0040
struct FSChannelType
{
	int                                                Group;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GroupText;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RoomUserCount;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     LongName;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ShortName;                                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolTip;                                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUseEnemyCharacter : 1;                           		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableUseInGameKick : 1;                        		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisablePasswordRoom : 1;                         		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFGame.SFTypes.SInputTextFilter
// 0x0010
struct FSInputTextFilter
{
	struct FName                                       Option;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Min;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Max;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SCodeNameColor
// 0x0010
struct FSCodeNameColor
{
	int                                                Version;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeNameColorValue;                               		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SChatMsgInfo
// 0x006C
struct FSChatMsgInfo
{
	int                                                ChatType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ChatSendType;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChatMsg;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UserGradeLV;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     ChatFinalMsg;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFromMe : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     TimeStamp;                                        		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSeen : 1;                                        		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSCodeNameColor                             CodeNameColor;                                    		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WhisperUSN;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FString                                     WhisperCodeName;                                  		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NametagImage;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                ContactUSN;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SMsgrChattingInfo
// 0x001C
struct FSMsgrChattingInfo
{
	int                                                ContactUSN;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     StartGameTime;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSChatMsgInfo >                     MsgrChatMsgArray;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.sMessengerNotice
// 0x0020
struct FsMessengerNotice
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                USN;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.sDeadPawnObject
// 0x0020
struct FsDeadPawnObject
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                TeamNum;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeofDeath;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sBuddyPopup
// 0x0010
struct FsBuddyPopup
{
	int                                                popupExec;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     popupText;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.sBuddyFiltterCondition
// 0x0018
struct FsBuddyFiltterCondition
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     filtterStr;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                filtterInt;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              filtterFlot;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sBuddyGroup
// 0x0024
struct FsBuddyGroup
{
	unsigned char                                      GroupSN;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OnlineCount;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ValideCount;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< int >                                      buddys;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.sBuddy
// 0x0070
struct FsBuddy
{
	int                                                USN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CSN;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      BuddyType;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      GroupSN;                                          		// 0x0016 (0x0001) [0x0000000000000000]              
	unsigned char                                      ClanLevel;                                        		// 0x0017 (0x0001) [0x0000000000000000]              
	struct FSCodeNameColor                             CodeNameColor;                                    		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NoticeCount;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                channelType;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                channelNum;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                roomNo;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      inGame;                                           		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned char                                      PreSync;                                          		// 0x0039 (0x0001) [0x0000000000000000]              
	struct FString                                     GfxRank;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UserImage;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned char                                      isClanMember;                                     		// 0x004C (0x0001) [0x0000000000000000]              
	unsigned char                                      Sex;                                              		// 0x004D (0x0001) [0x0000000000000000]              
	unsigned char                                      Year;                                             		// 0x004E (0x0001) [0x0000000000000000]              
	float                                              KDRate;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                UserGrade;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInvited : 1;                                     		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      BuddyTypeSet;                                     		// 0x0060 (0x0001) [0x0000000000000000]              
	unsigned char                                      BuddyTypeClr;                                     		// 0x0061 (0x0001) [0x0000000000000000]              
	unsigned char                                      BuddyTypeForReverse;                              		// 0x0062 (0x0001) [0x0000000000000000]              
	struct FString                                     ClanMark;                                         		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SRoomUser
// 0x0109
struct FSRoomUser
{
	int                                                USN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Unit;                                             		// 0x0005 (0x0001) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Ping;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      UserStatus;                                       		// 0x0015 (0x0001) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     strGFxRank;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UnitItemID;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      Sex;                                              		// 0x002C (0x0001) [0x0000000000000000]              
	int                                                RunAwayCount;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                AllPlayTime;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                ExpRank;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                ClanRank;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	struct FSCodeNameColor                             CodeNameColor;                                    		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsColor : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      GradeLevel;                                       		// 0x0054 (0x0001) [0x0000000000000000]              
	struct FString                                     ClanMark;                                         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NametagImage;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FString                                     NametagShowType;                                  		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NametagText;                                      		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Regdate;                                          		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CSN;                                              		// 0x008C (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PCRoomCareType;                                   		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                LadderPoint;                                      		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                HeadShots;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                AllWinGameCount;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                AllPlayGameCount;                                 		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                MainWeaponID;                                     		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                MainWeapCamoID;                                   		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FString                                     strGFxRankInGame;                                 		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      VipGrade;                                         		// 0x00D0 (0x0001) [0x0000000000000000]              
	unsigned char                                      ClanNameColorVersion;                             		// 0x00D1 (0x0001) [0x0000000000000000]              
	struct FString                                     ClanNameColor;                                    		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMarkEffect;                                   		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanRating;                                       		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanLeague;                                       		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DisguiseRank;                                     		// 0x0104 (0x0004) [0x0000000000000000]              
	unsigned char                                      MonthlyRewardGrade;                               		// 0x0108 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SRoomUserTeamArray
// 0x000C
struct FSRoomUserTeamArray
{
	TArray< int >                                      DisplayUser;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SRoomUserInfo
// 0x0054
struct FSRoomUserInfo
{
	int                                                RoomNumber;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MasterUSN;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MasterUSNOld;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      ExtraUserStatus;                                  		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      VipGrade;                                         		// 0x000D (0x0001) [0x0000000000000000]              
	int                                                RecvUserListCount;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CurUserListCount;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< struct FSRoomUser >                        RoomUserArray;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      IntrusionUserArray;                               		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSRoomUserTeamArray >               TeamArrays;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ObserverUserArrays;                               		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      WholeUserArray;                                   		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SFindMatchingRoom
// 0x0034
struct FSFindMatchingRoom
{
	int                                                RoomNumber;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     RoomName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameModeID;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClanRanking;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanMark;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SRoomSetting
// 0x0052
struct FSRoomSetting
{
	struct FString                                     RoomName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RoomNumber;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RoomType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                GameModeID;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NumRound;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumPlayers;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MatchPointIndex;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      MatchTimeIndex;                                   		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned char                                      AIDifficulty;                                     		// 0x0029 (0x0001) [0x0000000000000000]              
	struct FString                                     Password;                                         		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bGameInProgress : 1;                              		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSearchInProgress : 1;                            		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      EnableSwitchSide : 1;                             		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      EnableIntrusion : 1;                              		// 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      EnableKillCam : 1;                                		// 0x0038 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      EnableThirdPerson : 1;                            		// 0x0038 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      EnableTeamBalance : 1;                            		// 0x0038 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      EnableTeamSwitch : 1;                             		// 0x0038 (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                PlayedGameCount;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      ChangedSwitchSide : 1;                            		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ChangedThirdPerson : 1;                           		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      ChangedIntrusion : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      ChangedKillCam : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ChangedTeamBalance : 1;                           		// 0x0040 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      ChangedLastStand : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      ChangedPickupWeapon : 1;                          		// 0x0040 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned char                                      VipGrade;                                         		// 0x0044 (0x0001) [0x0000000000000000]              
	unsigned char                                      RedTeamPlayerCount;                               		// 0x0045 (0x0001) [0x0000000000000000]              
	unsigned char                                      RedTeamAICount;                                   		// 0x0046 (0x0001) [0x0000000000000000]              
	unsigned char                                      BlueTeamPlayerCount;                              		// 0x0047 (0x0001) [0x0000000000000000]              
	unsigned char                                      BlueTeamAICount;                                  		// 0x0048 (0x0001) [0x0000000000000000]              
	unsigned long                                      EnableLastStand : 1;                              		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      CustomModeType;                                   		// 0x0050 (0x0001) [0x0000000000000000]              
	unsigned char                                      EnablePickUpWeapon;                               		// 0x0051 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sPersonalAddInfo
// 0x004C
struct FsPersonalAddInfo
{
	struct FString                                     strGFxRank;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NametagImage;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      isClanMember;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      Sex;                                              		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      Age;                                              		// 0x0012 (0x0001) [0x0000000000000000]              
	float                                              KDRate;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PlayerGradeLV;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     LongTimeMainWeaponItemCode;                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSCodeNameColor                             CodeNameColor;                                    		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CSN;                                              		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     ClanMark;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SCommunityEventMessage
// 0x001C
struct FSCommunityEventMessage
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SCommunityEvent
// 0x0014
struct FSCommunityEvent
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EventInfoNumeric;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     EventInfoString;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SCommunityBuddy
// 0x0048
struct FSCommunityBuddy
{
	int                                                USN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EmblemID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Tag[ 0x3 ];                                       		// 0x0014 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nIsMatchTag[ 0x3 ];                               		// 0x0038 (0x000C) [0x0000000000000000]              
	int                                                DisconnectedDays;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SCommunityFeedback
// 0x0010
struct FSCommunityFeedback
{
	int                                                FeedbackCount;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           CodenameArray;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SCommunityMessage
// 0x0074
struct FSCommunityMessage
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                USN;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                EmblemID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nType;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Regdate;                                          		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSCommunityFeedback                         Feedback[ 0x3 ];                                  		// 0x0044 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SMyRanking
// 0x0058
struct FSMyRanking
{
	int                                                RealRankingExp;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RealRankingClan;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PrevRealRankingExp;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PrevRealRankingClan;                              		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RankingExp;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RankingWinRound;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RankingKill;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RankingAssist;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                RankingHeadShot;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                RankingBlasting;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                RankingSeizure;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                RankingEscape;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                RankingClan;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                RankingExpCount;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                RankingWinRoundCount;                             		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                RankingKillCount;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                RankingAssistCount;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                RankingHeadShotCount;                             		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                RankingBlastingCount;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                RankingSeizureCount;                              		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                RankingEscapeCount;                               		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                RankingClanCount;                                 		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SPlayerInfo
// 0x01B8
struct FSPlayerInfo
{
	int                                                USN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UnitItemCode;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UnitItemID;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     strGFxRank;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strRankName;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DisguiseRank;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     GFxDisguiseRank;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AllPlayTime;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                SPGage;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                Op;                                               		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                SP;                                               		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                TP;                                               		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                CP;                                               		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                Cash;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                LuckyPoint;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                PrevLuckyPoint;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                WeaponSetIndex;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                LadderPoint;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                AttackRound;                                      		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                AttackRoundWin;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                DefendRound;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                DefendRoundWin;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                RunAwayCount;                                     		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                AllHitCount;                                      		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                HeadShots;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                HeadHitCount;                                     		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                HeadPointHitCount;                                		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                AllHitCharacter;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                AllPlayGameCount;                                 		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                AllWinGameCount;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FString                                     LongTimeMainWeaponItemCode;                       		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NametagImage;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              
	struct FString                                     NametagShowType;                                  		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NametagText;                                      		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CSN;                                              		// 0x00E0 (0x0004) [0x0000000000000000]              
	int                                                CSNToRequestClanJoin;                             		// 0x00E4 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClanLevel;                                        		// 0x00F4 (0x0004) [0x0000000000000000]              
	int                                                DestroyCSN;                                       		// 0x00F8 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanMark;                                         		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMarkEffect;                                   		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanRecommendNick;                                		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LeagueTicketCount;                                		// 0x0120 (0x0004) [0x0000000000000000]              
	int                                                Age;                                              		// 0x0124 (0x0004) [0x0000000000000000]              
	unsigned char                                      Sex;                                              		// 0x0128 (0x0001) [0x0000000000000000]              
	struct FSCodeNameColor                             CodeNameColor;                                    		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsColor : 1;                                     		// 0x013C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Coin;                                             		// 0x0140 (0x0004) [0x0000000000000000]              
	int                                                CoinGauge;                                        		// 0x0144 (0x0004) [0x0000000000000000]              
	int                                                CoinState;                                        		// 0x0148 (0x0004) [0x0000000000000000]              
	struct FString                                     KeySet;                                           		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharacterBirthday;                                		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FaceItemCode;                                     		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PmcCode;                                          		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      PmcItemSN;                                        		// 0x017C (0x0008) [0x0000000000000000]              
	struct FString                                     Tag[ 0x3 ];                                       		// 0x0184 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TagID[ 0x3 ];                                     		// 0x01A8 (0x000C) [0x0000000000000000]              
	int                                                MiniGachaCoin;                                    		// 0x01B4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sChangeClanMarkTabInfo
// 0x0010
struct FsChangeClanMarkTabInfo
{
	struct FString                                     Tab;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TabSort;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sClanMarkInfo
// 0x004C
struct FsClanMarkInfo
{
	int                                                Layer;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Tab;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TabSort;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ImageSort;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     UnigueId;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ShopItemCode;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Event;                                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsShow : 1;                                       		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ToolTip;                                          		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.ExtraRewardInfo
// 0x001D
struct FExtraRewardInfo
{
	struct FString                                     supply_code;                                      		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     reward_type;                                      		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                reward;                                           		// 0x0018 (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	unsigned char                                      DisplayType;                                      		// 0x001C (0x0001) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
};

// ScriptStruct SFGame.SFTypes.SInternetError
// 0x001C
struct FSInternetError
{
	struct FString                                     ProtocolURL;                                      		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ErrorID;                                          		// 0x000C (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	struct FString                                     ResultMsg;                                        		// 0x0010 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SPacketError
// 0x0014
struct FSPacketError
{
	int                                                ProtocolID;                                       		// 0x0000 (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	int                                                ErrorID;                                          		// 0x0004 (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	struct FString                                     ResultMsg;                                        		// 0x0008 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SHUDActionMsg
// 0x0014
struct FSHUDActionMsg
{
	class AActor*                                      ActionActor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      ActionIndex;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     ActionMsg;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.KillCamExplosion
// 0x0020
struct FKillCamExplosion
{
	float                                              ExplosionTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     ExplosionLocation;                                		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ExplosionRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SKillCamProjectile
// 0x0038
struct FSKillCamProjectile
{
	float                                              KillCamThrowTime;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillCamProjID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     KillCamProjLoc;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    KillCamProjRot;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     KillCamProjVel;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
	int                                                KillCamProjItemID;                                		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              KillCamProjLifeSpan;                              		// 0x0030 (0x0004) [0x0000000000000000]              
	class UClass*                                      KillCamProjClass;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.WeaponStateData
// 0x001C
struct FWeaponStateData
{
	unsigned char                                      WeaponState;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayRate;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAnimOverride : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.SFaceMorphNode
// 0x000C
struct FSFaceMorphNode
{
	class UMorphNodeWeight*                            FaceMorphNode;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bActive : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FaceMorphTimeToGo;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.S_RECOIL
// 0x0054
struct FS_RECOIL
{
	float                                              incline;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              maxCrossVert;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              nextCrossVert;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              vertInc;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              vertDec;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowMinusDom : 1;                               		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncreaseDomForFirstShot : 1;                     		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              crossDecreasInc;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              domMax;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              domMin;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              domZoomDefault;                                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              domDefault;                                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              domInc;                                           		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              domDec;                                           		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                forceCorrection;                                  		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              maxMovingValue;                                   		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              movingValueInc;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              movingValueDec;                                   		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mulValueWalk;                                     		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mulValueRun;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mulValueJump;                                     		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrossHairSpreadRatio;                             		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.sWeaponState
// 0x0008
struct FsWeaponState
{
	unsigned char                                      WeaponState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      Updated : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTypes.MCExternalInfo
// 0x0030
struct FMCExternalInfo
{
	int                                                Priority;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RenderDataIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MeshIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TextureIndex;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      ItemList;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            WithOutPartTypes;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      BuilderClass;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShouldCheckAdditionalMesh : 1;                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTPSWeapon : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFTypes.GunTrailInfo
// 0x0018
struct FGunTrailInfo
{
	float                                              interval;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedMin;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedMax;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Thickness;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Length;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartX;                                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.WeaponInventorySet
// 0x008C
struct FWeaponInventorySet
{
	int                                                WeaponInfo[ 0x23 ];                               		// 0x0000 (0x008C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.WeaponItemIDSet
// 0x0014
struct FWeaponItemIDSet
{
	unsigned char                                      SlotIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      WeaponItemsID;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.PawnInventorySet
// 0x0034
struct FPawnInventorySet
{
	int                                                InventoryInfo[ 0xD ];                             		// 0x0000 (0x0034) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.NextStateInfo
// 0x0018
struct FNextStateInfo
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       NextStateName;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CallerName;                                       		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.StateIconType
// 0x0009
struct FStateIconType
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      IconState;                                        		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.PawnOutlineInfo
// 0x0010
struct FPawnOutlineInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      OutLineColorIndex;                                		// 0x0001 (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              OutLineOverlapDistance;                           		// 0x0004 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              OutLineIntense;                                   		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              OutlineWidth;                                     		// 0x000C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFGame.SFTypes.SObjectIconBind
// 0x0018
struct FSObjectIconBind
{
	class UClass*                                      ClassToBind;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      IconType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      IconTypeFriend;                                   		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      IconTypeEnemy;                                    		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned long                                      bNoClampScreenPos : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowRecentlyRendered : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      DefaultState;                                     		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                MaxShowDist;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowSameTeamOnly : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowObjectBehind : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFTypes.SObjectIcon
// 0x0062
struct FSObjectIcon
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MovieClip;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Arrow;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TextField1;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TextField2;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TextField3;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HPStat;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x001D (0x0001) [0x0000000000000000]              
	int                                                Width;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      ShowFlag;                                         		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned long                                      bShowHP : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsArrowVisible : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNoClampScreenPos : 1;                            		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowRecentlyRendered : 1;                        		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                PrevHP;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PrevDist;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     PrevFrontBack;                                    		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              PrevArrowDegree;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowObjectBehind : 1;                            		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      nInterpolateType;                                 		// 0x004C (0x0001) [0x0000000000000000]              
	float                                              LastInterpTypeChangedTime;                        		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vInterPolateTarget;                               		// 0x0054 (0x000C) [0x0000000000000000]              
	unsigned char                                      InterpDirX;                                       		// 0x0060 (0x0001) [0x0000000000000000]              
	unsigned char                                      InterpDirY;                                       		// 0x0061 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.OriginMtrlData
// 0x0008
struct FOriginMtrlData
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.HumanAIClassNames
// 0x0010
struct FHumanAIClassNames
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     ClassName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.AIUnit
// 0x0018
struct FAIUnit
{
	struct FString                                     Unit;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Items;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTypes.SGameClanBuffInfo
// 0x0010
struct FSGameClanBuffInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MinLevel;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaxLevel;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SPawnEffect
// 0x0034
struct FSPawnEffect
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PSCTemplate;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   EffectSound;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      PawnEffectState;                                  		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      StopPawnEffectState;                              		// 0x0011 (0x0001) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      PSCLoops : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< float >                                    Timing;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ElapsedTime;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sBossSkill
// 0x0008
struct FsBossSkill
{
	float                                              UseRate;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      SkillClass;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTypes.sCombatReport
// 0x003C
struct FsCombatReport
{
	unsigned char                                      ReportType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                AttackerID;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     AttackerName;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AttackerRank;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                VictimID;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     VictimName;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                VictimRank;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Weapon;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                KillMessage;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	class UClass*                                      DmgTypeClass;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.SWeaponEffect
// 0x0034
struct FSWeaponEffect
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PSCTemplate;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   EffectSound;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponEffectState;                                		// 0x0010 (0x0001) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      PSCLoops : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< float >                                    Timing;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ElapsedTime;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.MuzzleFlash
// 0x0024
struct FMuzzleFlash
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      LightClass;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PSCTemplate;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PSCTemplateZoom;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      PSCLoops : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTypes.sTeamScore
// 0x0018
struct FsTeamScore
{
	int                                                Kill;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AIKill;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AIDeath;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AIAssist;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.ProjectileDot
// 0x0010
struct FProjectileDot
{
	class ASFProj_HG_Gas*                              Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTypes.sDOT
// 0x0020
struct FsDOT
{
	class AController*                                 Inst;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Causer;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RestTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              PeriodTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              BaseDamage;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              actualDamage;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.AIReactCond_EnemyMoved.LastThreshPosPair
// 0x0010
struct FLastThreshPosPair
{
	class APawn*                                       Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSquad.DelayUpdateInfo
// 0x0014
struct FDelayUpdateInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	class APawn*                                       Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              UpdateTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSquad.sSquadChargePoint
// 0x0008
struct FsSquadChargePoint
{
	unsigned char                                      TargetType;                                       		// 0x0000 (0x0001) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxChargePoint;                                   		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFGame.SFSquad.sEnemyInfo
// 0x002C
struct FsEnemyInfo
{
	float                                              LastUpdateTime;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     KnownLocation;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	class AActor*                                      Base;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              InitialSeenTime;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              LastSeenTime;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              LastNotifyTime;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              MaxChargePoint;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              NowChargePoint;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSquad.SquadMemberInfo
// 0x000C
struct FSquadMemberInfo
{
	class AController*                                 Member;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              EnemyDist;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastUpdateTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.AIReactionManager.IntrinsicChannel
// 0x000C
struct FIntrinsicChannel
{
	struct FName                                       ChannelName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      ChannelClass;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.Checkpoint.LevelRecord
// 0x000C
struct FLevelRecord
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShouldBlockOnLoad : 1;                           		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFGame.Checkpoint.ActorRecord
// 0x0028
struct FActorRecord
{
	struct FString                                     ActorName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ActorUniqueID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ActorClassPath;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            RecordData;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.Checkpoint.InstigatorActorRecord
// 0x0024
struct FInstigatorActorRecord
{
	struct FString                                     ActorName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ActorUniqueID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ActorClassPath;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                InstigatorPlayerID;                               		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bStaticActor : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.Goal_SquadFormation.FormationEvalInfo
// 0x0044
struct FFormationEvalInfo
{
	int                                                PosIdx;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      QueryActor;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0008 (0x003C) UNKNOWN PROPERTY: MapProperty SFGame.Goal_SquadFormation.FormationEvalInfo.ActorList
};

// ScriptStruct SFGame.SFActionMessage.ActionMessageData
// 0x001C
struct FActionMessageData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	TArray< struct FString >                           strIconKeyArray;                                  		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     strMessage;                                       		// 0x0010 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFAggroSystem.sAggrDist
// 0x0008
struct FsAggrDist
{
	float                                              Waiting;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              UDist;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAggroSystem.sAWaitTime
// 0x0018
struct FsAWaitTime
{
	float                                              FarWait;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MidWait;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NearWait;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FsAggrDist >                        AggrDists;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFAggroSystem.sAINoise
// 0x000C
struct FsAINoise
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Dist;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UDist;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAggroSystem.sAggro
// 0x0014
struct FsAggro
{
	class APawn*                                       Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Dist;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSight : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEngage : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      NoiseNow;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	float                                              LastUpdate;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSeqAct_AIFactory.AISpawnInfo
// 0x00A8
struct FAISpawnInfo
{
	unsigned char                                      AIType;                                           		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpawnTotal;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAlive;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpawnedCount;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class APawn* >                             WatchList;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxSpawnDelay;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinSpawnDelay;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentDelay;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            WeaponLoadOut;                                    		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bGiveDefaultInventory : 1;                        		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FString >                           VarLinkDescs;                                     		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           OutLinkDescs;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class APawn* >                             CurrentSpawns;                                    		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      PawnClass;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	class UClass*                                      ControllerClass;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            LoadoutClasses;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PawnName;                                         		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      TeamIndex;                                        		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SquadName;                                        		// 0x0080 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSquadLeader : 1;                                 		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       ActorTag;                                         		// 0x008C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AutoDebugText;                                    		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bAllowDeleteWhenStale : 1;                        		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                DropItemCount;                                    		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSeqAct_AIFactory.AITypeInfo
// 0x001C
struct FAITypeInfo
{
	unsigned char                                      AIType;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       ControllerClassName;                              		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       PawnClassName;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                TeamIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUnique : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFAI_Info.EnemyWeapon
// 0x0014
struct FEnemyWeapon
{
	int                                                Set;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Slot;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponType;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AIRating;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAI_Info.EnemySpawnInfo
// 0x002C
struct FEnemySpawnInfo
{
	unsigned char                                      AIType;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsBoss : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            WeaponTypes;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinWave;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MaxWave;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MinCount;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MaxCount;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                WaveCost;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                SquadCharge;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAIController.LocalEnemyInfo
// 0x0040
struct FLocalEnemyInfo
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AcquireTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSeenLastFrame : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVisible : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              InitialVisibleTime;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastVisibleTime;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastSeenPos;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastSeeingPos;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              LastFailedPathTime;                               		// 0x002C (0x0004) [0x0000000000000000]              
	struct FVector                                     AsyncVisibleLocation;                             		// 0x0030 (0x000C) [0x0000000000000000]              
	unsigned long                                      bEnemyInfoValid : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFAIController.InvalidAnchorItem
// 0x0008
struct FInvalidAnchorItem
{
	class ANavigationPoint*                            InvalidNav;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InvalidTime;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFAIController.sCandidateTarget
// 0x0010
struct FsCandidateTarget
{
	class APawn*                                       Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Dist;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAIController.sTakeDamageTable
// 0x0008
struct FsTakeDamageTable
{
	class AController*                                 Attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn_AI.FullBodyAnimation
// 0x001C
struct FFullBodyAnimation
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              PlayLen;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              BlendOutTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCauseActorAnimEnd : 1;                           		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFAIController_Human.sTacticMove
// 0x0008
struct FsTacticMove
{
	float                                              Base;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Variation;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFInventoryManager.AmmoStore
// 0x0008
struct FAmmoStore
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      WeaponClass;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameItem.SFItemData
// 0x0100
struct FSFItemData
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x000C (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	struct FString                                     ItemCode;                                         		// 0x0010 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItemClassName;                                    		// 0x001C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItemImgName;                                      		// 0x0028 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItemRegDate;                                      		// 0x0034 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItemUseType;                                      		// 0x0040 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ItemUseTime;                                      		// 0x004C (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	unsigned long                                      IsDefaultUseDay : 1;                              		// 0x0050 (0x0004) [0x0000000000008003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_Localized )
	unsigned long                                      CanResell : 1;                                    		// 0x0050 (0x0004) [0x0000000000008003] [0x00000002] ( CPF_Edit | CPF_Const | CPF_Localized )
	struct FString                                     EquipClass;                                       		// 0x0054 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                buy_limit;                                        		// 0x0060 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	int                                                SP_Price;                                         		// 0x0064 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	int                                                TP_Price;                                         		// 0x0068 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	int                                                Cash_Price;                                       		// 0x006C (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	unsigned long                                      IsCooking : 1;                                    		// 0x0070 (0x0004) [0x0000000000008003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_Localized )
	unsigned long                                      IsSelling : 1;                                    		// 0x0070 (0x0004) [0x0000000000008003] [0x00000002] ( CPF_Edit | CPF_Const | CPF_Localized )
	struct FString                                     SellType;                                         		// 0x0074 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AddSPType;                                        		// 0x0080 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                AddSP;                                            		// 0x008C (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	int                                                ExchangeTP;                                       		// 0x0090 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	struct FString                                     IsTestItem;                                       		// 0x0094 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ResellPrice;                                      		// 0x00A0 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	int                                                UseLimitRank;                                     		// 0x00A4 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	struct FString                                     SupplyCode;                                       		// 0x00A8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Groups;                                           		// 0x00B4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     merge_type;                                       		// 0x00C0 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Tag;                                              		// 0x00CC (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                discount_rate;                                    		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     sell_startdate;                                   		// 0x00DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sell_enddate;                                     		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Event;                                            		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGameItem.SFItemDataNew
// 0x0044
struct FSFItemDataNew
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Price;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     SellType;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                discount_rate;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     sell_startdate;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sell_enddate;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Event;                                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BuyableCount;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsSelling : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFGameItem.SItemCodeToID
// 0x0018
struct FSItemCodeToID
{
	struct FString                                     ItemCode;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemIndexArray;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGameItem.SFirstBuySaleItem
// 0x0018
struct FSFirstBuySaleItem
{
	struct FString                                     ItemCode;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Original_Price;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnable : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFGameItem.SRecvItemInfo
// 0x0144
struct FSRecvItemInfo
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemCode;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      ItemSN;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FQWord                                      ItemNSN;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	struct FString                                     EndDate;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Durability;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxDurability;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ParsePropertys;                                   		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFItemData                                 ItemData;                                         		// 0x0044 (0x0100) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGameItem.SRecvPartsItemInfo
// 0x0020
struct FSRecvPartsItemInfo
{
	struct FQWord                                      ParentsSN;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FQWord                                      PartsSN;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                PartsID;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Propertys;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGameReplicationInfo.InstantBGM
// 0x0020
struct FInstantBGM
{
	struct FName                                       BGMName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     BGMPath;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              FadeInTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              FadeOutTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameReplicationInfo.ProjectileEmitterData
// 0x0008
struct FProjectileEmitterData
{
	class ASFProjectile*                               Projectile;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASFEmitterNoSyncSpawnable*                   Emitter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameReplicationInfo.ReplicatedWeatherData
// 0x0010
struct FReplicatedWeatherData
{
	class UClass*                                      WeatherClass;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverrideEmitterHeight : 1;                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseCameraLensEffect : 1;                         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              EmitterHeight;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LODLevel;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameReplicationInfo.sScoreBoard
// 0x000C
struct FsScoreBoard
{
	class APlayerController*                           Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameReplicationInfo.sGiveItemProbability
// 0x0008
struct FsGiveItemProbability
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fAdjProbability;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSeqAct_GiveWeaponbyCondition.WeaponClassDataForSeqAct
// 0x0014
struct FWeaponClassDataForSeqAct
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fProbability;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTeamRare : 1;                                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bGameRare : 1;                                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bImproperRareUser : 1;                            		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOnlyRareUser : 1;                                		// 0x0008 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	int                                                nImproperTeamTopRanker;                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nOnlyTeamTopRanker;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSeqAct_GiveWeaponbyCondition.sWeaponDataForSeqAct
// 0x0008
struct FsWeaponDataForSeqAct
{
	int                                                WeaponItemID;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponClass;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFGameDatabase.SFGameLog
// 0x0080
struct FSFGameLog
{
	struct FString                                     GameRule;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WinnerTeam;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayTime;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      ModeIndex;                                        		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      MapIndex;                                         		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned char                                      RoundCount;                                       		// 0x001E (0x0001) [0x0000000000000000]              
	unsigned char                                      AttackRoundWin[ 0x8 ];                            		// 0x001F (0x0008) [0x0000000000000000]              
	unsigned char                                      DefendRoundWin[ 0x8 ];                            		// 0x0027 (0x0008) [0x0000000000000000]              
	int                                                ClanPoint[ 0x8 ];                                 		// 0x0030 (0x0020) [0x0000000000000000]              
	int                                                CSN[ 0x8 ];                                       		// 0x0050 (0x0020) [0x0000000000000000]              
	int                                                WinnerCSN;                                        		// 0x0070 (0x0004) [0x0000000000000000]              
	TArray< struct FAdditionalModeResult >             AdditionalLog;                                    		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGameDatabase.SFManHuntPlayerLog
// 0x0040
struct FSFManHuntPlayerLog
{
	int                                                PlayTimeByHuman;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillByHuman;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AssistByHuman;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DeadByHuman;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                PlayTimeByBeast[ 0x3 ];                           		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                KillByBeastType[ 0x3 ];                           		// 0x001C (0x000C) [0x0000000000000000]              
	int                                                AssistByBeastType[ 0x3 ];                         		// 0x0028 (0x000C) [0x0000000000000000]              
	int                                                DeadByBeastType[ 0x3 ];                           		// 0x0034 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameDatabase.SFPlayerLog
// 0x00B8
struct FSFPlayerLog
{
	struct FString                                     ForceItemCode;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                KillCntByType[ 0x3 ];                             		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                AssistCntByType[ 0x3 ];                           		// 0x001C (0x000C) [0x0000000000000000]              
	int                                                DeadCntByType[ 0x3 ];                             		// 0x0028 (0x000C) [0x0000000000000000]              
	int                                                HeadShotCount;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                ChestHitCount;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                StomachHitCount;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                LimbsHitCount;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                HeadPointHitCount;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                AliveCount;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                AttackRound;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                DefendRound;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                TotalWinCount;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                TotalLoseCount;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                WinGameCount;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                CSN;                                              		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                PlayerWithCount;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                EarnScore;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                LuckyPoint;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                EarnLuckyPointCount;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                AttackRoundWin;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                DefendRoundWin;                                   		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                TotalHitEnemyCount;                               		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                HeadHitCount;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	struct FString                                     MainWeaponItemCode;                               		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TotalHitCount;                                    		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                Validation_Kill;                                  		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                Validation_Assist;                                		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                Validation_Death;                                 		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                Validation_MissionInfo;                           		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                Validation_MissionInfo01;                         		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                Validation_MissionInfo02;                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                Validation_LuckyPointCount;                       		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                Validation_HeadShot;                              		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                GameScore;                                        		// 0x00B4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameDatabase.SFPEVPlayerLog
// 0x0050
struct FSFPEVPlayerLog
{
	int                                                KillCount;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BossKill;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CriticalKill;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AssistCount;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                DeadCount;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AccumulationMoney;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                SpendMoney;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                CurrentWave;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                EliteCrawlerKill;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                NamedCrawlerKill;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                EliteRipperKill;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                NamedRipperKill;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                CloakingRipperKill;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                EliteLibertineKill;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                NamedLibertineKill;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                EliteStunnerKill;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                NamedStunnerKill;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                GasStunnerKill;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                EliteTyrantKill;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                NamedTyrantKill;                                  		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameInfo.SCustomModeWeapon
// 0x0034
struct FSCustomModeWeapon
{
	TArray< int >                                      CustomModePlayerProvideWeapon;                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            CustomModeNoUsableWeapon;                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            CustomModeInfiniteAmmoWeapon;                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            CustomModeOnlyUsablePrimaryWeaponType;            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      RandomProvideWeapon : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFGameInfo.STeamPlayerProvideWeapon
// 0x000D
struct FSTeamPlayerProvideWeapon
{
	TArray< int >                                      PlayerProvideWeaponID;                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Team;                                             		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameInfo.SKillDeathStreakBuffInfo
// 0x0020
struct FSKillDeathStreakBuffInfo
{
	int                                                ContinualKillDeath;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      BuffType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      MaintainBuff : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponItemClass;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGameInfo.PendingKillInfo
// 0x0008
struct FPendingKillInfo
{
	class ASFPlayerReplicationInfo*                    KillerPRI;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASFPlayerReplicationInfo*                    VictimPRI;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameInfo.sTrafficNode
// 0x0008
struct FsTrafficNode
{
	float                                              UpdatedTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AIID;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameInfo.sTrafficNav
// 0x000C
struct FsTrafficNav
{
	TArray< struct FsTrafficNode >                     Traffices;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFPlayerReplicationInfo.SPingNotify
// 0x001C
struct FSPingNotify
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TargetTeam;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      PingType;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAITeamDeathGame.WeaponIDData
// 0x000C
struct FWeaponIDData
{
	TArray< int >                                      WeaponIDList;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFAITeamDeathGame.sTeamMember
// 0x000C
struct FsTeamMember
{
	TArray< unsigned char >                            Types;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFAITeamDeathGame.UsedBotNameInfo
// 0x0010
struct FUsedBotNameInfo
{
	int                                                BotPlayerID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     BotPlayerName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFItemManager.ItemElement
// 0x0020
struct FItemElement
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ItemCode;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      ItemType;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	class UClass*                                      ItemClass;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ItemDataIndex;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      ItemExclusiveModeType;                            		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                ItemExclusiveModeID;                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAISpawnManager.DummyMemory
// 0x0024
struct FDummyMemory
{
	class AController*                                 Dummy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     SpawnLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    SpawnRotation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned long                                      bCrouch : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bJump : 1;                                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              KilledTime;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAISpawnManager.AIClassInfo
// 0x0018
struct FAIClassInfo
{
	int                                                AIType;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      PawnClass;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ControllerClass;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            arrWeaponClass;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFAISpawnManager.ExtendedMutator
// 0x001C
struct FExtendedMutator
{
	struct FString                                     MutClassPath;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RulesClassPath;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Multiplier;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFMeshParts.PartResourceData
// 0x0040
struct FPartResourceData
{
	class UObject*                                     Objects[ 0x8 ];                                   		// 0x0000 (0x0020) [0x0000000000000000]              
	int                                                Indexes[ 0x8 ];                                   		// 0x0020 (0x0020) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFMeshParts.SFEDMeshPart
// 0x0050
struct FSFEDMeshPart
{
	unsigned char                                      PartLabel;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                PartID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class USkeletalMesh* >                     Mesh;                                             		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                Material;                                         		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UTexture2D* >                        DiffuseTexture;                                   		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UTexture2D* >                        NormalTexture;                                    		// 0x002C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UTexture2D* >                        SpecularTexture;                                  		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UTexture2D* >                        MaskTexture;                                      		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFMeshParts.SFMeshPart
// 0x0050
struct FSFMeshPart
{
	unsigned char                                      PartLabel;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                PartID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           Mesh;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Material;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           DiffuseTexture;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           NormalTexture;                                    		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SpecularTexture;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MaskTexture;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFItem_Base.ItemColorVariationValue
// 0x0040
struct FItemColorVariationValue
{
	unsigned char                                      PartType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                MaterialIdx;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PatternMaskIdx;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FLinearColor >                      PatternColors;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PatternCamoTextureName;                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SymbolMaskIdx;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	TArray< struct FLinearColor >                      SymbolColors;                                     		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SymbolCamoTextureName;                            		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFItem_Base.sUIItemStat
// 0x0018
struct FsUIItemStat
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Adv;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGameDatabase.SFTestLog_User
// 0x00D4
struct FSFTestLog_User
{
	struct FString                                     UniqueId;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      IsHost;                                           		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayerID;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              AvgFps;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Above30Fps;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              AvgGpuTime;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                HitchTotal;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                HitGamBndCnt;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                HitRenBnbCnt;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                HitGpuBndCnt;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Sec_100;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Sec_150;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                Sec_200;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Sec_300;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Sec_500_INF;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     Desc;                                             		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SectionHitch[ 0xB ];                              		// 0x005C (0x002C) [0x0000000000000000]              
	float                                              SectionFps[ 0xD ];                                		// 0x0088 (0x0034) [0x0000000000000000]              
	float                                              BoundGameThreadPercent;                           		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              BoundRenderThreadPercent;                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              BoundGpuPercent;                                  		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              BoundGameThreadTime;                              		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              BoundRenderThreadTime;                            		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              BoundGpuTime;                                     		// 0x00D0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameDatabase.SFTestLog_Room
// 0x008C
struct FSFTestLog_Room
{
	struct FString                                     UniqueId;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      IsHost;                                           		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayerID;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                TotalPlayerCounter;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      MapID;                                            		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      ModeID;                                           		// 0x0025 (0x0001) [0x0000000000000000]              
	float                                              PingAvr;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                PktLoss;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                PktOutOrder;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              PktUploadAvr;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              PktDownAvr;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     Desc;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SectionPing[ 0x5 ];                               		// 0x0048 (0x0014) [0x0000000000000000]              
	int                                                SectionUploadBandwidth[ 0x6 ];                    		// 0x005C (0x0018) [0x0000000000000000]              
	int                                                SectionDownloadBandwidth[ 0x6 ];                  		// 0x0074 (0x0018) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameDatabase.SFTestLog_System
// 0x0060
struct FSFTestLog_System
{
	struct FString                                     UniqueId;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      IsHost;                                           		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayerID;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     OS;                                               		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Memory;                                           		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CPU;                                              		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GPU;                                              		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Software;                                         		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ScaleLevel;                                       		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_GameResult.SUserResult
// 0x0124
struct FSUserResult
{
	int                                                USN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GfxRank;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMark;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSCodeNameColor                             CodeNameColor;                                    		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Kill;                                             		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                AllScore;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                AllExp;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MissionScore;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                LuckyPointScore;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                BonusScore;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                PCRoomCareType;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                PCRoomCareExpValue;                               		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                PCRoomCareSPValue;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                VipCareType;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                VipRoomCareExpValue;                              		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                VipRoomCareSpValue;                               		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                RTEEXPValue;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                RTESPValue;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                FuncItemEXPValue;                                 		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                FuncItemSPValue;                                  		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                FuncItemSPImmediatelyValue;                       		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                FuncItemTPValue;                                  		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                ChannelEXPValue;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                ChannelSPValue;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                PMCItemID;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                PMCItemEXPValue;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                PMCItemSPValue;                                   		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              LuckyPointRatio;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              AntiFatigueRatio;                                 		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                SpecialKillBonus;                                 		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                ContinuousKillBonus;                              		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                RareKillBonus;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                NormalKillBonus;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                DefaultKillBonus;                                 		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                SpecialKillBonusScore;                            		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                ContinuousKillBonusScore;                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                RareKillBonusScore;                               		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                NormalKillBonusScore;                             		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                DefaultKillBonusScore;                            		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                TotalKillFeedbackScore;                           		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              ExpRatio;                                         		// 0x00D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsMyBuddy : 1;                                   		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FString >                           FunctionalItemList;                               		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LeagueNumber;                                     		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      VipGrade;                                         		// 0x00F4 (0x0001) [0x0000000000000000]              
	struct FString                                     ClanMarkEffect;                                   		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClanBuffState;                                    		// 0x0104 (0x0004) [0x0000000000000000]              
	TArray< struct FAdditionalModeResult >             AdditionalResultArray;                            		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      MonthlyRewardGrade;                               		// 0x0114 (0x0001) [0x0000000000000000]              
	int                                                FeverEXPValue;                                    		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                FeverSPValue;                                     		// 0x011C (0x0004) [0x0000000000000000]              
	int                                                FeverLPValue;                                     		// 0x0120 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPlayerController.ColorationInfo
// 0x001C
struct FColorationInfo
{
	float                                              DesaturationAmount;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Color;                                            		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              Power;                                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Priority;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPlayerController.MaterialEffectData
// 0x0014
struct FMaterialEffectData
{
	class UMaterialEffect*                             ME;                                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       PostProcessEffectName;                            		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bAutoHideWhenResetRound : 1;                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFPlayerController.SPendingObjectIcon
// 0x0008
struct FSPendingObjectIcon
{
	class AActor*                                      IconActor;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRegister : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowHP : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFUIDataStore_InvenWeap.SInvenWeaponSet
// 0x0344
struct FSInvenWeaponSet
{
	int                                                ArmorySN;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     SetName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      MainItemSN;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FSFItemData                                 MainItemData;                                     		// 0x001C (0x0100) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      SubItemSN;                                        		// 0x011C (0x0008) [0x0000000000000000]              
	struct FSFItemData                                 SubItemData;                                      		// 0x0124 (0x0100) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQWord >                            ThrowItemSNArray;                                 		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       ThrowItemDataArray;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      SpecialItemSN;                                    		// 0x023C (0x0008) [0x0000000000000000]              
	struct FSFItemData                                 SpecialItemData;                                  		// 0x0244 (0x0100) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_InvenWeap.SWeaponMCData
// 0x0010
struct FSWeaponMCData
{
	int                                                SetIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ItemArray;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxHUD_ScoreBoardBase.SortPRIData
// 0x000C
struct FSortPRIData
{
	TArray< class ASFPlayerReplicationInfo* >          PRIArray;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFPawn_Player.S_RECOIL_RESULT
// 0x0044
struct FS_RECOIL_RESULT
{
	int                                                recoilState;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              currentCrossVert;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              expectCrossVert;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              crossDecreasValue;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              oldrCrossVert;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              crossIncline;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              decline;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                forceDir;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              impactIncreaseEye;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              impactDecline;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              impactSpinY;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              impactSpinZ;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              currentDomValue;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              movingValue;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              movingValueForCrossHair;                          		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              spiny;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              spinz;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn.FlashBangPostEffect
// 0x002C
struct FFlashBangPostEffect
{
	float                                              AlphaPower;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              WhiteOutPower;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RemainTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      SceneCaptured : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BlendOutStartTimeRate;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              BlendOutEndTimeRate;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              WhiteOutStartTimeRate;                            		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              WhiteOutEndTimeRate;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              SoundDuration;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              SoundFadeOutDuration;                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSeqAct_GiveWeapon.WeaponDataForSeqAct
// 0x0008
struct FWeaponDataForSeqAct
{
	int                                                WeaponItemID;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponClass;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSeqAct_AddMagazine.AddWeaponMagazine
// 0x0008
struct FAddWeaponMagazine
{
	unsigned char                                      WeaponGroup;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Magazine;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFKillMessage.SKillMessage
// 0x0010
struct FSKillMessage
{
	int                                                AnimationType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     KillMessage;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGameScore.SLadderPointBasis
// 0x0024
struct FSLadderPointBasis
{
	int                                                BasisPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BasisModeRate;                                    		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BasisKill;                                        		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BasisAssist;                                      		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BasisDeath;                                       		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BasisSpecial;                                     		// 0x0014 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BasisSuicide;                                     		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BasisLuckyPoint;                                  		// 0x001C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BasisHighLevelKill;                               		// 0x0020 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFGame.SFGameScore.SClanPointBasis
// 0x0014
struct FSClanPointBasis
{
	float                                              ClanPointKillRate;                                		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ClanPointAssistRate;                              		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ClanPointMissionRate;                             		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ClanPointRoundWinRate;                            		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ClanPointMatchingRate;                            		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFGame.SFGameScore.SpawnBasis
// 0x0014
struct USFGameScore_FSpawnBasis
{
	float                                              BasisKill;                                        		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BasisCritical;                                    		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BasisAssist;                                      		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BasisLuckyPoint;                                  		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BasisHighLevelKill;                               		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFGame.SFHUD.PawnInfo
// 0x0010
struct FPawnInfo
{
	class ASFPawn*                                     SFPawn;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASFPlayerReplicationInfo*                    SFPRI;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Visibility;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsVisible : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFHUD.DamageInfo
// 0x001C
struct FDamageInfo
{
	class AActor*                                      Instigator;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FadeTime;                                         		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FadeValue;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Direction;                                        		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   MatConstant;                                      		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFGame.SFHUD.HitMarkInfo
// 0x0020
struct FHitMarkInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitScreenLocation;                                		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              DrawTime;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              MaxDrawTime;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFHUD.MessageDispatchInfo
// 0x0008
struct FMessageDispatchInfo
{
	class UClass*                                      MessageClass;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisplayToSpecator : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisPalyToLocalPRI : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFHUD.S_CROSSHAIR
// 0x000C
struct FS_CROSSHAIR
{
	float                                              InnerWidth;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BarLength;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Color;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFObstaclesActor.sMeshLevel
// 0x0030
struct FsMeshLevel
{
	float                                              HPrate;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInstanceConstant* >         Materials;                                        		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Anim;                                             		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound;                                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             HitParticleTemplate;                              		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TeamScore;                                        		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Score;                                            		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFAnimBlendByDirection.StandardAnimVelocityStruct
// 0x0010
struct FStandardAnimVelocityStruct
{
	float                                              FrontVelocity;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BackVelocity;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeftVelocity;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RightVelocity;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFAnimBlendByLobbyWeapon.LobbyStepInfo
// 0x0014
struct FLobbyStepInfo
{
	struct FName                                       LobbyStep;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PrevLobbyStep;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ChildNodeIndex;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFAnimBlendByLobbyWeapon.QueuingChildInfo
// 0x0060
struct FQueuingChildInfo
{
	unsigned char                                      QueuingChildIndex;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0xF ];                             		// 0x0001 (0x000F) MISSED OFFSET
	struct FAnimBlendChild                             ChildInfo;                                        		// 0x0010 (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFAnimNodeCopyBoneTranslation.BoneCopyInfo
// 0x0018
struct FBoneCopyInfo
{
	struct FName                                       SrcBoneName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DstBoneName;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                SrcBoneIndex;                                     		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DstBoneIndex;                                     		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SFGame.SFAnimNodeSlotQueuing.QueuingAnimInfo
// 0x0014
struct FQueuingAnimInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAnimNodeTurnInPlacePlayer.TIP_Transition
// 0x0010
struct FTIP_Transition
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFAntiFatigue.SAntiFatigueInfo
// 0x000C
struct FSAntiFatigueInfo
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ReduceExpRatio;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAntiFatigue.SAntiFatigueMessage
// 0x0018
struct FSAntiFatigueMessage
{
	struct FString                                     strColor;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strMessage;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFAppraisalCondition.MessageList
// 0x000C
struct FMessageList
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFAppraisalCondition.AppraisalData
// 0x0030
struct FAppraisalData
{
	struct FName                                       EventType0;                                       		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       EventType1;                                       		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                RealRank;                                         		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                GoalScoreMission0;                                		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                GoalScoreMission1;                                		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                GoalScoreRespawn0;                                		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                GoalScoreRespawn1;                                		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FMessageList >                      MessageList;                                      		// 0x0024 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFModeVolume.CheckpointRecord
// 0x0008
struct ASFModeVolume_FCheckpointRecord
{
	struct FName                                       currState;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFAwardManager.AwardInfo
// 0x0020
struct FAwardInfo
{
	class UClass*                                      AwardClass;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FASValue                                    AwardValue;                                       		// 0x0004 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFRankPoint.SRankPoint
// 0x000C
struct FSRankPoint
{
	int                                                Rank;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RealRank;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RankExp;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTutorialGame.TutorialSectionInfo
// 0x000C
struct FTutorialSectionInfo
{
	int                                                SectionID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BestScore;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AdjustScore;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFBreakableActor.SModeInfo
// 0x0004
struct FSModeInfo
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      EnableFlag;                                       		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      nTemp0;                                           		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      nTemp1;                                           		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFBreakableActorByDamage.SFBreakPartsInfo
// 0x000C
struct FSFBreakPartsInfo
{
	class ASFBreakableCarPart*                         BreakPartPosition;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 BreakPart;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lifetime;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFBreakableGlassSyncState.GlassStateName
// 0x000C
struct FGlassStateName
{
	unsigned char                                      GlassState;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StateName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFBuffInfo.SBuffBonusInfo
// 0x0008
struct FSBuffBonusInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFBuffInfo.SBuffInfo
// 0x0098
struct FSBuffInfo
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StateMessage_Activated;                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StateMessage_Deactivated;                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StateMessage_Failed;                              		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconImage;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Duration;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< struct FSBuffBonusInfo >                   BuffBonusInfo;                                    		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IgnoreCullDistance : 1;                           		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       EffectBoneName;                                   		// 0x005C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             EffectPS;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             CameraLensEffectPS;                               		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FVector                                     EffectRelativeLocation;                           		// 0x006C (0x000C) [0x0000000000000000]              
	struct FRotator                                    EffectRelativeRotation;                           		// 0x0078 (0x000C) [0x0000000000000000]              
	struct FVector                                     EffectRelativeScale;                              		// 0x0084 (0x000C) [0x0000000000000000]              
	float                                              EffectDurationTime;                               		// 0x0090 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundEffect;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFCCTV_DataStoreBase.CCTVInfo
// 0x0030
struct FCCTVInfo
{
	struct FVector                                     FreeCamLocation;                                  		// 0x0000 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FRotator                                    FreeCamRotation;                                  		// 0x000C (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FVector                                     TranslucentCamLocation;                           		// 0x0018 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FRotator                                    TranslucentCamRotation;                           		// 0x0024 (0x000C) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFGame.SFChallengeListCondition.SChallengeMedalRange
// 0x0008
struct FSChallengeMedalRange
{
	int                                                Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFChallengeListCondition.ChallengeProgressData
// 0x00B0
struct FChallengeProgressData
{
	struct FChallengeData                              TableData;                                        		// 0x0000 (0x0074) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FChallengeLocalized                         TableLocalized;                                   		// 0x0074 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrScore;                                        		// 0x008C (0x0004) [0x0000000000000000]              
	struct FTime_t                                     CompleteDate;                                     		// 0x0090 (0x0020) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFCheatManager.LensFXData
// 0x0018
struct FLensFXData
{
	struct FString                                     FXName;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PSName;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFPawn.SAimingInfo
// 0x001C
struct FSAimingInfo
{
	int                                                HitDistance;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       HitBone;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.sFiringrangeInfo
// 0x0020
struct FsFiringrangeInfo
{
	struct FString                                     WeaponType;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Initial;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFClanMark.STestClanMark
// 0x0024
struct FSTestClanMark
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ClanRank;                                         		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ClanMark;                                         		// 0x0018 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFConsoleCommandHandler.CommandTranslator
// 0x0024
struct FCommandTranslator
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TranslatedCommand;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Postfix;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFConvoyanceGame.SConvoyanceSpeedInfo
// 0x000C
struct FSConvoyanceSpeedInfo
{
	int                                                Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SpeedRate;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFConvoyanceGameScore.ConvoyancePointInfo
// 0x0008
struct FConvoyancePointInfo
{
	int                                                PlayerNum;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Score;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFConvoyanceGameScore.ExpScoreBaseInfo
// 0x0008
struct FExpScoreBaseInfo
{
	int                                                KillCount;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              BaseNumber;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFConvoyanceHUD.ConvoyanceSortPRIData
// 0x000C
struct FConvoyanceSortPRIData
{
	TArray< class ASFPlayerReplicationInfo* >          PRIArray;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFMeshBuilder.MeshPart
// 0x0054
struct FMeshPart
{
	unsigned char                                      PartLabel;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                PartID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               Mesh;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsMainMesh : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInterface*                          Material;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Textures[ 0x4 ];                                  		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FString                                     CamoTexturesName;                                 		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVectorParameterValue >             VectorParameterValues;                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScalarParameterValue >             ScalarParameterValues;                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTextureParameterValue >            TextureParameterValues;                           		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFMeshBuilder.MeshGroup
// 0x0010
struct FMeshGroup
{
	unsigned char                                      GroupLabel;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FMeshPart >                         MeshParts;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFMeshBuilder.PlayerMeshesInfo
// 0x001C
struct FPlayerMeshesInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMeshGroup >                        PlayerMeshGroups;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFMeshBuilder.AsyncMeshGroupInfo
// 0x0010
struct FAsyncMeshGroupInfo
{
	class AActor*                                      Caller;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             Callback;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFMeshBuilder.PlayerItemArrayInfo
// 0x0010
struct FPlayerItemArrayInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      PawnItemArray;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFMeshBuilder.MergedTextureSize
// 0x0024
struct FMergedTextureSize
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector2D                                   TextureSize[ 0x4 ];                               		// 0x0004 (0x0020) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFMeshBuilder.MergedTextureInfo
// 0x0028
struct FMergedTextureInfo
{
	struct FSourceTexture2DRegion                      Region;                                           		// 0x0000 (0x0014) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
	struct FVector2D                                   UVOffset;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   UVScale;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFCustomPreview.CustomPreviewAnimInfo
// 0x0020
struct FCustomPreviewAnimInfo
{
	struct FName                                       AnimType;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             AnimSeqNames;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Rate;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              BlendOutTime;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFCustomPreview.PendingMeshInfoTable
// 0x007C
struct FPendingMeshInfoTable
{
	struct FString                                     SkeletalmeshString;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaterialString;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DiffuseTextureString;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NormalTextureString;                              		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SpecularTextureString;                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaskTextureString;                                		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CamoTextureString;                                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GroupArrayIndex;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                PartArrayIndex;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                EpauletPatternColors;                             		// 0x005C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BackgroundPatternColors;                          		// 0x006C (0x0010) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFCustomPreview.DetachMeshGroupInfo
// 0x0010
struct FDetachMeshGroupInfo
{
	unsigned char                                      GroupLabel;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           MeshPartsString;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFCustomWeaponPreview.sAttachedMesh
// 0x0014
struct FsAttachedMesh
{
	class USkeletalMesh*                               Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      MeshComponent;                                    		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstance*                           AttachedMaterial;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWeapon.sMuzzleFlashPlayTimeInfo
// 0x0014
struct FsMuzzleFlashPlayTimeInfo
{
	struct FString                                     WeapTypeName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WeapType;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              PlayTime;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFDailyEvent.SDailyEventMessage
// 0x001C
struct FSDailyEventMessage
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ChattingMessage;                                  		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PopUpMessage;                                     		// 0x0010 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFDefaultBotName.ModeAINameInfo
// 0x0014
struct FModeAINameInfo
{
	int                                                ModeID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      AIType;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     AIName;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFSurvivalGame.sReservedBeaconTarget
// 0x0018
struct FsReservedBeaconTarget
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class APawn*                                       Inst;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Loc;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
	class UClass*                                      TargetClass;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFDesertionRatio.SDesertionInfo
// 0x0008
struct FSDesertionInfo
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWaterVolume.CalmeraLensParticleInfo
// 0x000C
struct FCalmeraLensParticleInfo
{
	class UParticleSystem*                             LensEffect;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeSpan;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPreventRemoveEffect : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFGame.SFWaterVolume.EntryParticleInfo
// 0x0014
struct FEntryParticleInfo
{
	class UParticleSystem*                             Effect;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScaleRatio;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ScaleRange;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              NormalOffset;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFWaterVolume.WaterSplashInfo
// 0x0014
struct FWaterSplashInfo
{
	class UParticleSystem*                             Effect;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocationOffset;                                   		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                Yaw;                                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFEmitter.DistanceBasedParticleTemplate
// 0x0008
struct FDistanceBasedParticleTemplate
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MinDistance;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFEmitterPool.AttachedExplosionLight
// 0x0014
struct FAttachedExplosionLight
{
	class USFExplosionLight*                           Light;                                            		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      Base;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFExplosionLight.LightValues
// 0x000C
struct FLightValues
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LightColor;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFExtraBodyPartsManager.sExtraPart
// 0x0022
struct FsExtraPart
{
	class UClass*                                      PartsClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASkeletalMeshActorSpawnable*                 PartsMesh;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             HitableParts;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefencePoint;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DefenceDir;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              DefenceRange;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      SavedCollisionType;                               		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      PartID;                                           		// 0x0021 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFFilterChatting.SFindPos
// 0x001C
struct FSFindPos
{
	int                                                nPos;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     strReplace;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strFind;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFFilterCodeName.SpecialCharRange
// 0x000C
struct FSpecialCharRange
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Start;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                End;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFFrontLineVolume.OccupyRatioInfo
// 0x0008
struct FOccupyRatioInfo
{
	int                                                PawnCounter;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Ratio;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFGameEngine.SectionDebugInfo
// 0x0018
struct FSectionDebugInfo
{
	struct FString                                     SectionName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDouble                                     SectionStartTime;                                 		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                TabCount;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameEngine.DFUCrcInfo
// 0x0018
struct FDFUCrcInfo
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Size;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFPhysicalMaterialProperty.PhysicalSoundGroup
// 0x000C
struct FPhysicalSoundGroup
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFPhysicalMaterialProperty.MaterialImpactEffect
// 0x0048
struct FMaterialImpactEffect
{
	struct FName                                       EffectType;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                DecalMaterials;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                OutDecalMaterials;                                		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DurationOfDecal;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DecalDissolveParamName;                           		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalWidth;                                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalHeight;                                      		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             OutParticleTemplate;                              		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             LensFXParticleTemplate;                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNotUseRotateDecal : 1;                           		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowViewRotationDecal : 1;                      		// 0x0044 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bPreventOutParticle : 1;                          		// 0x0044 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFGame.SFPhysicalMaterialProperty.sResLink
// 0x0014
struct FsResLink
{
	unsigned char                                      Linked_ID;                                        		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   FootStepSound;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FootStepSoundDash;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   LandSound;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             FootStepParticle;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFMapInfo.VectorParamForEffect
// 0x0014
struct FVectorParamForEffect
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFGameExplosionShockWaveActor.CandidateEnemyInfo
// 0x0008
struct ASFGameExplosionShockWaveActor_FCandidateEnemyInfo
{
	class ASFPawn_AI*                                  Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameExplosionShockWaveActorByKim.CandidateEnemyInfo
// 0x0008
struct ASFGameExplosionShockWaveActorByKim_FCandidateEnemyInfo
{
	class ASFPawn_AI*                                  Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameViewportClient.LoadingTextureStruct
// 0x0019
struct FLoadingTextureStruct
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LoadingTextureString;                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DrawType;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameViewportClient.LobbyLoadingTexture
// 0x0005
struct FLobbyLoadingTexture
{
	class UTexture2D*                                  LoadingTexture;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      BGDrawTypeNow;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGameViewportClient.LoadingClanRanking
// 0x0024
struct FLoadingClanRanking
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTexture2D* >                        ClanMarkTextures;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ClanMarkTextureNames;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ClanRank.SWeeklyClanRankInfo
// 0x002C
struct FSWeeklyClanRankInfo
{
	int                                                CSN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     OrigClanMark;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMark;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClanPoint;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIHelper.sClanMarkIDInfo
// 0x000C
struct FsClanMarkIDInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Min;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Max;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGashaItem.SFGashaItemData
// 0x0028
struct FSFGashaItemData
{
	int                                                ItemIndex;                                        		// 0x0000 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	struct FString                                     Description;                                      		// 0x0004 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                GashaStep;                                        		// 0x0010 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	int                                                SelectionNumber;                                  		// 0x0014 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	int                                                ItemId;                                           		// 0x0018 (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
	struct FString                                     SupplyCode;                                       		// 0x001C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxUIView.SClickSoundWidget
// 0x0010
struct FSClickSoundWidget
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxUIView.SGFxGameDataProvider
// 0x0020
struct FSGFxGameDataProvider
{
	struct FString                                     BindName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  Scope;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Rows;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        Items;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxUIView.SUIRenderToTextureInfo
// 0x0018
struct FSUIRenderToTextureInfo
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Source;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxUIView.SDisplayItem
// 0x0128
struct FSDisplayItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ItemSN;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                ItemTag;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ItemType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemCode;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFItemData                                 ItemData;                                         		// 0x0020 (0x0100) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Selected;                                         		// 0x0120 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0124 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxUIView.WidgetEventListenerInfo
// 0x0014
struct FWidgetEventListenerInfo
{
	struct FName                                       ActionType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             DelegateHandler;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxUIView.ClikWidgetInfo
// 0x0024
struct FClikWidgetInfo
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                Type;                                             		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsGFxObj : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FWidgetEventListenerInfo >          DelegateList;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              MovieClip;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GfxObj;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_Repair.ERapairDialogBtnInfo
// 0x001C
struct FERapairDialogBtnInfo
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             DelegateHandler;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              MovieClip;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_AllItemRepair.sRepairItemList
// 0x002C
struct FsRepairItemList
{
	struct FString                                     WeaponName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponImg;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RepairGauge;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NeedSp;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	struct FQWord                                      ItemSN;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSelected : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFGFxDialog_Buy.SRegulationURL
// 0x0018
struct FSRegulationURL
{
	struct FString                                     ServiceCode;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_Buy.SItemLIst
// 0x0064
struct FSItemLIst
{
	TArray< struct FSFItemData >                       AllItemArray;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       SPItemArray;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       CASHItemArray;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       TPItemArray;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       LPItemArray;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UseRank;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLocked : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Checked : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                SelectedIndex;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              RestDays;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                BGColorIdx;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FString                                     logType;                                          		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ItemList.sNetmarbleCoupon
// 0x002C
struct FsNetmarbleCoupon
{
	struct FString                                     CouponID;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CouponName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DiscountPercent;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     ExpireDate;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_ChangeTP.ExchangeInfo
// 0x0020
struct FExchangeInfo
{
	int                                                TargetAmount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TargetCurrency;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SourceAmount;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     SourceCurrency;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_Clan.SDropDownMenu
// 0x0024
struct USFGFxDialog_Clan_FSDropDownMenu
{
	class UGFxClikWidget*                              DropDownMenuWidget;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     DropDownWidgetName;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Tag;                                              		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultSelectedIndex;                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_ClanList.ClanAreaInfo
// 0x0028
struct FClanAreaInfo
{
	struct FString                                     DB_Code;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AreaName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSearchOnly : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ParentDBCode;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ClanHome.SClanMemberInfo
// 0x0104
struct FSClanMemberInfo
{
	struct FString                                     USN;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CSN;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Level;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Apply_desc1;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Apply_desc2;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Apply_desc3;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Apply_desc4;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Regdate;                                          		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Kills;                                            		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Assist;                                           		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Death;                                            		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameCount;                                        		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HeadShot;                                         		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerInfo;                                       		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RecommendNick;                                    		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nUSN;                                             		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                nCSN;                                             		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                nLevel;                                           		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                nRegDate;                                         		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                nGameCount;                                       		// 0x00DC (0x0004) [0x0000000000000000]              
	struct FString                                     GfxRank;                                          		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nNametagImage;                                    		// 0x00EC (0x0004) [0x0000000000000000]              
	unsigned char                                      CheckMember;                                      		// 0x00F0 (0x0001) [0x0000000000000000]              
	int                                                UserRank;                                         		// 0x00F4 (0x0004) [0x0000000000000000]              
	struct FString                                     LongTimeMainWeaponItemCode;                       		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ClanHome.SMessageInfo
// 0x0058
struct FSMessageInfo
{
	struct FString                                     Index;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CSN;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WriterUSN;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WriterName;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strMsg;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Regdate;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nCSN;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                nWriterUSN;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nNametagImage;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_ClanHome.SClanRecordInfo
// 0x00CC
struct FSClanRecordInfo
{
	struct FString                                     Index;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CSN;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     With_CSN;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     With_ClanName;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapID;                                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Rounds;                                           		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Round_Win;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Logdate;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Mode;                                             		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     channelType;                                      		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     outCome;                                          		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nCSN;                                             		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                nWith_CSN;                                        		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                nRounds;                                          		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                nRound_Win;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                nMode;                                            		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                nMapId;                                           		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                nChannelType;                                     		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                nOutCome;                                         		// 0x00A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsDestroyClan : 1;                                		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     MapResourceName;                                  		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeName;                                         		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapLocalizedName;                                 		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ClanHome.SClanRankInfo
// 0x0010
struct FSClanRankInfo
{
	int                                                Ranking;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     calcdate;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ClanHome.ClanHomeData
// 0x016C
struct FClanHomeData
{
	TArray< struct FSClanMemberInfo >                  MemberArray;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSMessageInfo >                     MessageBoardArray;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSClanRecordInfo >                  RecordArray;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSClanInfo                                  ClanInfo;                                         		// 0x0024 (0x013C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSClanRankInfo >                    ClanRankInfo;                                     		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_ClanMake.SClanTextInputStateMsg
// 0x0040
struct FSClanTextInputStateMsg
{
	struct FString                                     msg[ 0x5 ];                                       		// 0x0000 (0x003C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bIsVisible : 1;                                   		// 0x003C (0x0004) [0x0000000000008002] [0x00000001] ( CPF_Const | CPF_Localized )
};

// ScriptStruct SFGame.SFGFxDialog_ClanMake.SClanMakeInput
// 0x0028
struct FSClanMakeInput
{
	class UGFxClikWidget*                              InputInfos;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              InputBoxs;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InputFields;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     LastFilteredName;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InputWidgetName;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                bIsClanMakeTerms;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_CreatedCharacter.SWelcomeItem
// 0x0014
struct FSWelcomeItem
{
	struct FString                                     RewardType;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                reward;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Rare;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SLockCustomModeData
// 0x0018
struct FSLockCustomModeData
{
	TArray< struct FString >                           NotApplyCustomMode;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LockPickUpWeapon;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SCustomModeButton
// 0x001C
struct FSCustomModeButton
{
	unsigned char                                      CustomModeType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     CustomButtonText;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CustomButtonToolTip;                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.RotationModeData
// 0x0048
struct FRotationModeData
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      SubGameModeIDArray;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SubGameModeNameArray;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SubGameMapIDArray;                                		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SubGameMapNameArray;                              		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            IsSubMapShowrray;                                 		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SubSelectedGameMapIndex;                          		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsNextRotaion : 1;                                		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SFCustomModeList
// 0x000C
struct FSFCustomModeList
{
	TArray< struct FString >                           BelongToGameMode;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SGameModeByChannel
// 0x001C
struct FSGameModeByChannel
{
	TArray< struct FString >                           GameModeArray;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ChannelTypeArray;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      ApplyCustomMode : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SModeInfoSearchCache
// 0x0035
struct FSModeInfoSearchCache
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GameModeName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocsGameModeName;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameModeClassName;                                		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocsGameModeClassName;                            		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      GameModeType;                                     		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SMapInfoSearchCache
// 0x0010
struct FSMapInfoSearchCache
{
	int                                                MapID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SModeDispType
// 0x0008
struct FSModeDispType
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DispType;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SUnitedMode
// 0x001C
struct FSUnitedMode
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      SubGameModeIDArray;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SubGameModeNameArray;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_RoomSetting.SPreQuickJoinInfo
// 0x0020
struct FSPreQuickJoinInfo
{
	struct FString                                     SelectMapID;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SelectModeID;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WeaponTypeMode;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PickUpWeapon;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataProvider_ModeInfo.SupportMapInfo
// 0x0014
struct FSupportMapInfo
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Order;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bRookieAllow : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVIPOnly : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFGFxDialog_EmblemDeck.SEmblemTabData
// 0x001C
struct FSEmblemTabData
{
	struct FString                                     Code;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            Types;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                FlashIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_EmblemDeck.SEmblemTooltipData
// 0x0024
struct FSEmblemTooltipData
{
	struct FString                                     Unavailable;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Unused;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Used;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_EventList.SCategoryLocalized
// 0x0010
struct USFGFxDialog_EventList_FSCategoryLocalized
{
	int                                                Code;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TabString;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_EventList.SCategorySet
// 0x0008
struct USFGFxDialog_EventList_FSCategorySet
{
	int                                                Code;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      TabClass;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_GameCloseOfSelectGift.sWelcomeTextType
// 0x0028
struct FsWelcomeTextType
{
	int                                                Group;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Icon;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayText;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_GameCloseOfSelectGift.sItemGroup
// 0x0010
struct FsItemGroup
{
	struct FString                                     SupplyCode;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SupplyStep;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_GameCloseOfSelectGift.sGiftItemList
// 0x0010
struct FsGiftItemList
{
	struct FString                                     Type;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.sExitItemData
// 0x0020
struct FsExitItemData
{
	struct FString                                     SupplyCode;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SupplyStep;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Type;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_InGameShop.SInGameShopItemUIData
// 0x0050
struct FSInGameShopItemUIData
{
	unsigned long                                      bIsSubMenu : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ItemType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      ItemAvailable : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ItemPVEShopID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ItemUIImageSetIndex;                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemUIImageSetName;                               		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemUIName;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemUIPrice;                                      		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemUIShortcut;                                   		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SlotType;                                         		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_InGameShop.SInGameShopWeaponModeRistrict
// 0x0010
struct FSInGameShopWeaponModeRistrict
{
	unsigned char                                      gamemode;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            WeaponType;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFInGameStore.PurchaseItem
// 0x0038
struct FPurchaseItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                UsableLevel;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Price[ 0x2 ];                                     		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                ResellPrice[ 0x2 ];                               		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              PriceRatio;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              UpgradePriceRate;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                GroupIndex;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                LogData;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      InstantBuy : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableInUseItem : 1;                            		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	class UParticleSystem*                             Particle;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundLink;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFInGameStore.PurchaseItemListData
// 0x0024
struct FPurchaseItemListData
{
	struct FString                                     TabName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TabImage;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPurchaseItem >                     ItemList;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_ItemRepair.sReservedData
// 0x0020
struct FsReservedData
{
	struct FString                                     WeaponName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      ISN;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                CouponID;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                CouponCount;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MySp;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_QuickJoinEX.SSelectedMapList
// 0x001C
struct FSSelectedMapList
{
	struct FString                                     SelectMapName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SelectModeName;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectModeID;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_SpectatorDeco.sSpectatorSettingData
// 0x0018
struct FsSpectatorSettingData
{
	struct FString                                     Comment;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StyleNum;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                CommentColor;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFlicker : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFGFxDialog_SysSetting.SCategoryLocalized
// 0x0010
struct USFGFxDialog_SysSetting_FSCategoryLocalized
{
	int                                                Code;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TabString;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_SysSetting.SCategorySet
// 0x0008
struct USFGFxDialog_SysSetting_FSCategorySet
{
	int                                                Code;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      TabClass;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_SystemMessage.SSystemMessage
// 0x0010
struct FSSystemMessage
{
	struct FString                                     strMessage;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nTime;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_TagSystem.sAutoCompleteList
// 0x0018
struct FsAutoCompleteList
{
	int                                                TagID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TagType;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     TagName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TagUserCount;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxDialog_UseCamo.sCamouseWeaponList
// 0x0034
struct USFGFxDialog_UseCamo_FsCamouseWeaponList
{
	struct FQWord                                      ISN;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CamoID;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Icon;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CamoIcon;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_UseChangeClanmark.LayerInfo
// 0x002C
struct FLayerInfo
{
	int                                                MaxPage;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NowPage;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SelectTabIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SelectClanMarklistIndex;                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SelectIndexPage;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FsClanMarkInfo >                    ClanMarkInfoArray;                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsChangeClanMarkTabInfo >           TabInfoArray;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_UseInitWeaponKillDeath.sCamouseWeaponList
// 0x0098
struct USFGFxDialog_UseInitWeaponKillDeath_FsCamouseWeaponList
{
	struct FQWord                                      ISN;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CamoID;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Icon;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CamoIcon;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Groups;                                           		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCode;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WeaponLogIndex;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	struct FSFWeaponLogMember                          LogMember;                                        		// 0x0050 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_InvenWeap.sMuzzleStyleUpgrade
// 0x0018
struct FsMuzzleStyleUpgrade
{
	struct FString                                     StyleID;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             MuzzleStyle;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleStyleZoom;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleStyle3rd;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_InvenWeap.sMuzzleColorUpgrade
// 0x003C
struct FsMuzzleColorUpgrade
{
	struct FString                                     StyleID;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ColorID;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     MuzzleColor_01;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     MuzzleColor_02;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     MuzzleColor_03;                                   		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_InvenWeap.sMuzzleInfo
// 0x0024
struct FsMuzzleInfo
{
	TArray< struct FsMuzzleStyleUpgrade >              StyleNameList;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ColorNameList;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsMuzzleColorUpgrade >              DetailColorList;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_UseRandomBox.sRandomBoxItemInfo
// 0x0024
struct FsRandomBoxItemInfo
{
	struct FString                                     Index;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemImg;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxDialog_UseStoredMaterial.StoredMaterialInfo
// 0x0008
struct FStoredMaterialInfo
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RewardItemID;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.sScreenResList
// 0x0010
struct FsScreenResList
{
	unsigned char                                      ScreenRateType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           ScreenRes;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.SRecvRanking
// 0x000C
struct FSRecvRanking
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Ranking;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AllCount;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.sClanMsgInfo
// 0x000D
struct FsClanMsgInfo
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.sNotifyInfo
// 0x0024
struct FsNotifyInfo
{
	struct FString                                     LinkType;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Path;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WebURL;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.MonthlyRewardInfo
// 0x002C
struct FMonthlyRewardInfo
{
	int                                                CashSectionBegin;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CashSectionEnd;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SalePercent;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              AddEXP;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AddSP;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RewardList;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RewardBuytypeList;                                		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.S1VS1UserRankListInfo
// 0x0010
struct FS1VS1UserRankListInfo
{
	int                                                CustomModeType;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FS1VS1UserRankInfo >                Info1VS1UserList;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.MyMonthlyRewardInfo
// 0x0030
struct FMyMonthlyRewardInfo
{
	int                                                Grade;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AccumulationCash;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SalePercent;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              AddEXP;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AddSP;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RewardList;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RewardBuytypeList;                                		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsMonthlyReward : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFUIDataStore_PlayerInfo.SMapID
// 0x000C
struct FSMapID
{
	TArray< int >                                      MapID;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFSoundGroup_UX.SUXSound
// 0x000C
struct FSUXSound
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   EventSoundCue;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFGFxHUD_Death.SortPRIDataDeath
// 0x000C
struct FSortPRIDataDeath
{
	TArray< class ASFPlayerReplicationInfo* >          PRIArray;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxHUD_Death.RankBoardStruct
// 0x0080
struct FRankBoardStruct
{
	int                                                PlayerID[ 0x10 ];                                 		// 0x0000 (0x0040) [0x0000000000000000]              
	int                                                IsRefresh[ 0x10 ];                                		// 0x0040 (0x0040) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_Ammo.SWeaponName
// 0x0024
struct FSWeaponName
{
	struct FString                                     WeaponClassName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponImgName;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxHUDWidget_PawnHeadUpBase.GFxPawnHeadUpInfo
// 0x006C
struct FGFxPawnHeadUpInfo
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtCodeName;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtNumber;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtRadio;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtOverWall;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtOption;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtOptionBlue;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtOptionRed;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtZombieBlue;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TxtZombieRed;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     PrevCodeNameDist;                                 		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PrevCodeName;                                     		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PrevNumber;                                       		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PrevRadio;                                        		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PrevHP;                                           		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nIsPrevRendered;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bKillCam : 1;                                     		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsStun : 1;                                      		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsKilled : 1;                                    		// 0x0068 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsConvoyanceAttachItem : 1;                      		// 0x0068 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFGame.SFGFxHUDWidget_CombatMsg.SGFxCombatMsg
// 0x005C
struct FSGFxCombatMsg
{
	struct FString                                     Killer;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Victim;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Assist;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Option;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Weapon;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Camo;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ShowTime;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              HideTime;                                         		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned long                                      bShow : 1;                                        		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fHeight;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MC;                                               		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_CombatMsg.SMissionCombatMsg
// 0x0024
struct FSMissionCombatMsg
{
	struct FString                                     EventName;                                        		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ImgName;                                          		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LocalizedEvent;                                   		// 0x0018 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxHUDWidget_CombatMsg.SCombatMsg
// 0x0058
struct FSCombatMsg
{
	struct FString                                     Killer;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Victim;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Assist;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Option;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Weapon;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Camo;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      WeaponType;                                       		// 0x0048 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsMe : 1;                                        		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ShowTime;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              HideTime;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_InGameQuest.SSimpleChallengeData
// 0x0010
struct FSSimpleChallengeData
{
	struct FString                                     TaskCode;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TaskIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_InGameQuest.SInGameQuestData
// 0x0010
struct FSInGameQuestData
{
	unsigned char                                      gamemode;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FSSimpleChallengeData >             QuestInfo;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxHUDWidget_Message.MessageTypeInfo
// 0x0020
struct FMessageTypeInfo
{
	struct FString                                     GfxOpenCommand;                                   		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     GfxCloseCommand;                                  		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      DisplayType;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
	class USoundNodeWave*                              DefaultSound;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_Message.MessageRawData
// 0x0028
struct FMessageRawData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Message;                                          		// 0x0004 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              ActiveTime;                                       		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Lifetime;                                         		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RegisterTime;                                     		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundNodeWave*                              Sound;                                            		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Priority;                                         		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MessageIndex;                                     		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFGame.SFGFxHUDWidget_Message.MessageInfo
// 0x000C
struct FMessageInfo
{
	TArray< struct FMessageRawData >                   MessageRawDatas;                                  		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxHUDWidget_ObsrHPBarBase.SObsrUserInfo
// 0x003C
struct FSObsrUserInfo
{
	struct FString                                     CodeName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UserNumber;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Health;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nIsDead;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponName;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ShowWeaponNameText;                               		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ASFPlayerReplicationInfo*                    SFPRI;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_ObsrHPBarBase.SObsrUserInfos
// 0x01E0
struct FSObsrUserInfos
{
	struct FSObsrUserInfo                              TeamUsers[ 0x8 ];                                 		// 0x0000 (0x01E0) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFShooterDefencePlayerReplicationInfo.sPowerUp
// 0x000C
struct FsPowerUp
{
	class UClass*                                      PowerUpClass;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StockedTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_SurvivalUserList.SSurvivalUser
// 0x0024
struct FSSurvivalUser
{
	struct FString                                     CodeName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NametagImg;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHelp : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDead : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RemainingRespawnTime;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	class ASFPlayerReplicationInfo*                    SFPRI;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	class ASFPawn*                                     Pawn;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_ShooterDefenceUserList.SUIModePlayerInfo
// 0x004C
struct USFGFxHUDWidget_ShooterDefenceUserList_FSUIModePlayerInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Emblem;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ModeLevel;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MaxHealth;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                AttackPoint;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                DefencePoint;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MovePoint;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                TotalExp;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              ElapsedRespawnDelay;                              		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              TotalRespawnDelay;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ModeItemStatChanged;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              LastCheckedTime;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_TargetScore.GFxTargetScoreInfo
// 0x0020
struct FGFxTargetScoreInfo
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bUse : 1;                                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Score;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              CallTime;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_Timer.TimerInfo
// 0x0020
struct FTimerInfo
{
	struct FString                                     Color;                                            		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                LowTime;                                          		// 0x000C (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	int                                                HighTime;                                         		// 0x0010 (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	struct FString                                     GameModeClassName;                                		// 0x0014 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxHUDWidget_Timer.TimerTypeInfo
// 0x001C
struct FTimerTypeInfo
{
	struct FString                                     ObjectName;                                       		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     TextFiled;                                        		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UGFxObject*                                  MovieClip;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxHUDWidget_WarriorUserList.SUIModePlayerInfo
// 0x0048
struct USFGFxHUDWidget_WarriorUserList_FSUIModePlayerInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Emblem;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ModeLevel;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MaxHealth;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                AttackPoint;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                DefencePoint;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MovePoint;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                TotalExp;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              ElapsedRespawnDelay;                              		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              TotalRespawnDelay;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              LastCheckedTime;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobby.SFViewInfo
// 0x0018
struct FSFViewInfo
{
	struct FName                                       ViewName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     SWFName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Depth;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobby.SPendingView
// 0x0014
struct FSPendingView
{
	struct FName                                       ViewName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class USFGFxUIView*                                View;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                OtherViewIndex;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsASOpened : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsScreen : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFGFxLobby.sRepairReserved
// 0x0014
struct FsRepairReserved
{
	struct FQWord                                      ItemSN;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Dur;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DurMax;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NeedSp;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobbyScreen.SEquipAttrib
// 0x0028
struct FSEquipAttrib
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HtmlColor;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Contents;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNeedAbs : 1;                                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFUIDataStore_RoomList.SRoomListInfo
// 0x003E
struct FSRoomListInfo
{
	unsigned char                                      nIsLocked;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     strDiff;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nNumber;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      RoomType;                                         		// 0x0014 (0x0001) [0x0000000000000000]              
	struct FString                                     strRoomName;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      nGameModeID;                                      		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      nMapId;                                           		// 0x0025 (0x0001) [0x0000000000000000]              
	unsigned char                                      nNowPlayers;                                      		// 0x0026 (0x0001) [0x0000000000000000]              
	unsigned char                                      nMaxPlayers;                                      		// 0x0027 (0x0001) [0x0000000000000000]              
	unsigned char                                      nPing;                                            		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned char                                      nRoomState;                                       		// 0x0029 (0x0001) [0x0000000000000000]              
	unsigned char                                      nAllowIntrude;                                    		// 0x002A (0x0001) [0x0000000000000000]              
	unsigned char                                      nRoundCount;                                      		// 0x002B (0x0001) [0x0000000000000000]              
	unsigned char                                      AIDifficulty;                                     		// 0x002C (0x0001) [0x0000000000000000]              
	int                                                TimeLimit;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned char                                      VipGrade;                                         		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned char                                      MonthlyRewardGrade;                               		// 0x0035 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsDisableGame : 1;                               		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bQuckPlayEnable : 1;                              		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      CustomWeaponType;                                 		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      PickUpWeapon;                                     		// 0x003D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_RoomList.SMatchingRoom
// 0x000C
struct FSMatchingRoom
{
	unsigned char                                      GameModeID;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                WaitingRoomCount;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PlayingRoomCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobby_ChannelList.SUIChannelInfo
// 0x005C
struct USFGFxLobby_ChannelList_FSUIChannelInfo
{
	struct FString                                     Flag;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     No;                                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChannelName;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StatBarNo;                                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolTip;                                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GradeColor;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IsFull;                                           		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                FriendNum;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                ClanNum;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobby_ChannelRenweal.SUIChannelInfo
// 0x005C
struct USFGFxLobby_ChannelRenweal_FSUIChannelInfo
{
	struct FString                                     Flag;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     No;                                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChannelName;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StatBarNo;                                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolTip;                                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GradeColor;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IsFull;                                           		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                FriendNum;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                ClanNum;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobby_ClanHome.sRankColorInfo
// 0x0010
struct USFGFxLobby_ClanHome_FsRankColorInfo
{
	int                                                Max;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     strColor;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_ClanManagerTab.SManagetTabMemberListPopupInfo
// 0x000C
struct FSManagetTabMemberListPopupInfo
{
	TArray< struct FString >                           msg;                                              		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_ClanManagerTab.SWidgetBoxInfoData
// 0x0010
struct FSWidgetBoxInfoData
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_ClanLeague.SClanLeagueRankInfo
// 0x00D8
struct FSClanLeagueRankInfo
{
	struct FString                                     SeasonDate;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Ranking;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Ranking_Old;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CSN;                                              		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     USN;                                              		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Rank;                                             		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMark;                                         		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanGrade;                                        		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GamePlayCount;                                    		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameWinCount;                                     		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameLoseCount;                                    		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KillCount;                                        		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AssistCount;                                      		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DeathCount;                                       		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Score;                                            		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Regdate;                                          		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ClanBase.SClanInventoryList
// 0x0030
struct FSClanInventoryList
{
	struct FString                                     Inven_No;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCode;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Expired_Date;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemProperty;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ClanList.SClanListInfo
// 0x0010
struct FSClanListInfo
{
	TArray< struct FSClanInfo >                        ClanPagedArray;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsNextPage : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFUIDataStore_ClanList.FiringLIstTabInfo
// 0x0018
struct FFiringLIstTabInfo
{
	int                                                WeaponType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SortType;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MyRankIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FSFiringRangeListInfo >             FiringRangeList;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFXLobby_Combine.CombineIconData
// 0x001C
struct FCombineIconData
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Icon;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ItemList.CombineDesignInfo
// 0x0040
struct FCombineDesignInfo
{
	int                                                DBIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RewardItemID;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RequirePartsCount;                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RewardName;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RewardGroup;                                      		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                HiddenItemID;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Probability;                                      		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFXLobby_Combine.CombineData
// 0x0030
struct FCombineData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Count;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Icon;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Check;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ItemList.CombineParts
// 0x000C
struct FCombineParts
{
	TArray< int >                                      Parts;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ItemList.SModeItemData
// 0x0034
struct FSModeItemData
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ItemSN[ 0x6 ];                                    		// 0x0004 (0x0030) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_ItemList.SToBuyItem
// 0x0044
struct FSToBuyItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PaymentIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CouponID;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CouponDiscountPrice;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                GiftReceiverUSN;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     GiftReceiverCodeName;                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GiftMessage;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     logType;                                          		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsGift : 1;                                       		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFUIDataStore_ItemList.SCashIcon
// 0x0018
struct FSCashIcon
{
	struct FString                                     ServiceCode;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CashIcon;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ItemList.SFirstBuySaleItemInfo
// 0x0018
struct FSFirstBuySaleItemInfo
{
	struct FString                                     ItemCode;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFirstBuySaleItem >                SaleItemArray;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_ItemList.sVipItemListInfo
// 0x0008
struct FsVipItemListInfo
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AddPoint;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFItem_Func_ProvideItem.ProvideItemData
// 0x0014
struct FProvideItemData
{
	unsigned char                                      UsableGameMode;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     ProvideItemName;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ProvideItemID;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobby_CreateCharacter.sCreateableItemList
// 0x0008
struct FsCreateableItemList
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      Lock : 1;                                         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFUIDataStore_Enchant.DetailItem
// 0x0014
struct FDetailItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FQWord                                      UnusedItemSN;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FQWord                                      UsedItemSN;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_Enchant.EnchantDesignInfo
// 0x0040
struct FEnchantDesignInfo
{
	int                                                EnchantDesignID;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EnchantDesignName;                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ResultItemID;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                BaseItemCount;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RequirePartsCount;                                		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GroupIndex;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	TArray< int >                                      BaseItemIDList;                                   		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_Enchant.EnchantParts
// 0x000C
struct FEnchantParts
{
	TArray< int >                                      Parts;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_Enchant.ItemExtractInfo
// 0x0020
struct FItemExtractInfo
{
	struct FDetailItem                                 ItemInfo;                                         		// 0x0000 (0x0014) [0x0000000000000000]              
	struct FEnchantParts                               PartsInfo;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_FeverTime.SFeverDisplayItem
// 0x0010
struct FSFeverDisplayItem
{
	TArray< struct FItemElement >                      FeverItemIDArray;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Group;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.GetRareUserInfo
// 0x001C
struct FGetRareUserInfo
{
	struct FString                                     CodeName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Regdate;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.GashaListInfo
// 0x0078
struct FGashaListInfo
{
	int                                                reward;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSFItemData >                       ItemDataArray;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SupplyCodeArray;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      DisplayRankArray;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RewardLogInfoIndex;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     SupplyCode;                                       		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     reward_type;                                      		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GashaCouponCount;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ToolTipList;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsAllInOne : 1;                                  		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsPVE : 1;                                       		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      GashaType;                                        		// 0x0058 (0x0001) [0x0000000000000000]              
	int                                                TagType;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                DisplayRank;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< struct FGetRareUserInfo >                  GetRareUserArray;                                 		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DiscountRatio;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsShow : 1;                                      		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.RewardCapsuleInfo
// 0x0018
struct FRewardCapsuleInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SupplyCode;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurGachaBonusGauge;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxGachaBonusGauge;                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.RewardLogInfo
// 0x0058
struct FRewardLogInfo
{
	struct FString                                     SupplyCode;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Today;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TodayAllCount;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TodayProbabilityObtain;                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                TodayRareCount;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     Yesterday;                                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                YesterdayAllCount;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                YesterdayProbabilityObtain;                       		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                YesterdayRareCount;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                NowItemCount;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                NowUseItemCount;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                MaxProbability;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemTag;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TagType;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.RewardInfo
// 0x003C
struct FRewardInfo
{
	struct FString                                     supply_code;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     reward_type;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                reward;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                DisplayRank;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     RareType;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsRare : 1;                                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Percenct;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                GroupIndex;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsGachaBonusGauge : 1;                            		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsShow : 1;                                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.ToolTipRewardInfo
// 0x0018
struct FToolTipRewardInfo
{
	struct FString                                     SupplyCode;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRewardInfo >                       RewardItemArray;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.sAllInOneTooltipInfo
// 0x0018
struct FsAllInOneTooltipInfo
{
	struct FString                                     SupplyCode;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolTip;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.SPBoomGahsaInfo
// 0x0050
struct FSPBoomGahsaInfo
{
	int                                                reward;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemType;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ImageType;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemImgName;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Event;                                            		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoneyIconType;                                    		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ToolTipList;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.sGashaModeGraphMessage
// 0x001C
struct FsGashaModeGraphMessage
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Content;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.sGashaModeGraphInfo
// 0x0034
struct FsGashaModeGraphInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     SupplyCode;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SelectSceneType;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SelectIconType;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OrgelSceneType;                                   		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.RewardCapsuleCountInfo
// 0x0010
struct FRewardCapsuleCountInfo
{
	struct FString                                     SupplyCode;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_GashaList.sGachaRollUser
// 0x001C
struct FsGachaRollUser
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     UserName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_GashaOrgelBox.sCapsuleCommenctInfo
// 0x0014
struct FsCapsuleCommenctInfo
{
	unsigned long                                      bIsBlink : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Percent;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_GashaOrgelBox.sOrgelBtnInfo
// 0x0024
struct FsOrgelBtnInfo
{
	TArray< struct FSFItemData >                       ItemDataArray;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CouponCountArray;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      BonusCouponCountArray;                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_Login.ExtraErrorCodeInfo
// 0x0010
struct FExtraErrorCodeInfo
{
	int                                                ErrorCode;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     msg;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_LoginCHN.SAuthError
// 0x0018
struct FSAuthError
{
	struct FString                                     ErrorCode;                                        		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_MessengerBuddyList.sDebugCNList
// 0x0010
struct FsDebugCNList
{
	struct FString                                     Str;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ref;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_Messenger.SMsgrNotice
// 0x0038
struct FSMsgrNotice
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DurationTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     strTitle;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strMessage;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strOK;                                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strCancel;                                        		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_MiniGame.sMiniGameInfo
// 0x0030
struct FsMiniGameInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ScoreGameModeID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                BgType;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     strTitle;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strContextTitle;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strContext;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_MiniGame.sMapSelectInfo
// 0x0008
struct FsMapSelectInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                SelectMapIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobby_MiniGame.STutoBestScore
// 0x0024
struct FSTutoBestScore
{
	unsigned char                                      MapID;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      GameModeID;                                       		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                PlayingTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ScorePoint;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     RecTime;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MiniGameForMatRecTime;                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_MiniGame.sFiringRangeScoreTabInfo
// 0x001C
struct FsFiringRangeScoreTabInfo
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Code;                                             		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconImg;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_Navi.sUnitList
// 0x001C
struct FsUnitList
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Code;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UnitImgName;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_Navi.sNaviBtnInfo
// 0x0008
struct FsNaviBtnInfo
{
	unsigned char                                      ScreenType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bNewMark : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFGFxLobby_Navi.sWatingInviteRespond
// 0x0010
struct FsWatingInviteRespond
{
	int                                                FromUSN;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     InvitedStr;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_InvenChar.SCharUnit
// 0x0110
struct FSCharUnit
{
	int                                                UnitItemID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSFItemData                                 UnitItemData;                                     		// 0x0004 (0x0100) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQWord >                            ItemSNArray;                                      		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_PartyRoom.ErrorCodeInfo
// 0x0010
struct FErrorCodeInfo
{
	int                                                ErrorCode;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     msg;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_Shop.SLastBuyItem
// 0x000C
struct FSLastBuyItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ItemSN;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobby_Shop.sItemAttrib
// 0x0018
struct FsItemAttrib
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     res;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_VideoPlayer.SChannelngIntroVideo
// 0x0024
struct FSChannelngIntroVideo
{
	struct FString                                     ServiceCode;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           VideoArray;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ExtensionArray;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobby_VideoPlayer.SIntroVideo
// 0x0018
struct FSIntroVideo
{
	struct FString                                     Video;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     extension;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_Rank.RankUpdateDateInfo
// 0x000C
struct FRankUpdateDateInfo
{
	int                                                Year;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Month;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_Rank.PVERankPlayerInfo
// 0x0010
struct FPVERankPlayerInfo
{
	struct FString                                     CodeName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_Rank.PVERankTeamInfo
// 0x001C
struct FPVERankTeamInfo
{
	struct FQWord                                      Rank;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TeamScore;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FPVERankPlayerInfo >                Members;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart.SUnitedTabList
// 0x0010
struct FSUnitedTabList
{
	int                                                MainCode;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      SubCodeArray;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_SysSetting_Capture.SScreenRecResType
// 0x0010
struct FSScreenRecResType
{
	int                                                PresetNum;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     DisplayText;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_SysSetting_Capture.SCaptureSetting
// 0x001C
struct FSCaptureSetting
{
	struct FString                                     CapturePath;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RecordPath;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RecordScrResPresetNum;                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobbyPart_AlbumScreenShot.SAlbumInfo
// 0x0030
struct FSAlbumInfo
{
	struct FString                                     FilePath;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ThumbFilePath;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Filename;                                         		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Ext;                                              		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_ClanHome.sRankColorInfo
// 0x0010
struct USFGFxLobbyPart_ClanHome_FsRankColorInfo
{
	int                                                Max;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     strColor;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_ClanHome.SMemberListPopupInfo
// 0x000C
struct FSMemberListPopupInfo
{
	TArray< struct FString >                           msg;                                              		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_ClanUserTab.SPopupInfo
// 0x0014
struct FSPopupInfo
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x000C (0x0004) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	unsigned long                                      bIsVisible : 1;                                   		// 0x0010 (0x0004) [0x0000000000008002] [0x00000001] ( CPF_Const | CPF_Localized )
};

// ScriptStruct SFGame.SFGFxLobbyPart_GameResult_HeroStatistics.SUIResultStatisticsTypes
// 0x0014
struct FSUIResultStatisticsTypes
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIgnoreRankSort : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFGFxLobbyPart_GameResult_HeroStatistics.SPlayerStatisticsScoreData
// 0x0008
struct FSPlayerStatisticsScoreData
{
	int                                                USN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobbyPart_GameResult_HeroStatistics.SStatisticsRankData
// 0x0008
struct FSStatisticsRankData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobbyPart_InvenEquip.SUnitInvenItem
// 0x0184
struct FSUnitInvenItem
{
	struct FSRecvItemInfo                              UnitItem;                                         		// 0x0000 (0x0144) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UnitItemID;                                       		// 0x0144 (0x0004) [0x0000000000000000]              
	TArray< struct FSRecvItemInfo >                    AllItemArray;                                     		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSRecvItemInfo >                    HeadItemArray;                                    		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSRecvItemInfo >                    UpperItemArray;                                   		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSRecvItemInfo >                    LowerItemArray;                                   		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSRecvItemInfo >                    FaceItemArray;                                    		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_MyInfoMonthlyReward.sInfoData
// 0x0018
struct USFGFxLobbyPart_MyInfoMonthlyReward_FsInfoData
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     context;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_MyInfoMonthlyReward.sVIPLevelInfo
// 0x002C
struct USFGFxLobbyPart_MyInfoMonthlyReward_FsVIPLevelInfo
{
	int                                                VipGrade;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     VipLabel;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     context;                                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_MyInfoProfile.SNoRankingMsg
// 0x0010
struct FSNoRankingMsg
{
	int                                                MaxRank;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     msg;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_MyInfoVIp.sInfoData
// 0x0018
struct USFGFxLobbyPart_MyInfoVIp_FsInfoData
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     context;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_MyInfoVIp.sVIPLevelInfo
// 0x002C
struct USFGFxLobbyPart_MyInfoVIp_FsVIPLevelInfo
{
	int                                                VipGrade;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     VipLabel;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     context;                                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_Notice_Event.SPromoIDInfo
// 0x0010
struct FSPromoIDInfo
{
	int                                                MainID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      SubIDArray;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_PCRoomRank.SPCRoomRankData
// 0x0034
struct FSPCRoomRankData
{
	struct FString                                     GFxGrade;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PrevRank;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                USN;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Exp;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_ShopEquip.SUnitShopItem
// 0x0140
struct FSUnitShopItem
{
	struct FSFItemData                                 UnitItemData;                                     		// 0x0000 (0x0100) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UnitItemID;                                       		// 0x0100 (0x0004) [0x0000000000000000]              
	TArray< struct FSFItemData >                       AllItemArray;                                     		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       FaceItemArray;                                    		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       HeadItemArray;                                    		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       UpperItemArray;                                   		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFItemData >                       LowerItemArray;                                   		// 0x0134 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFGFxLobbyPart_SysSetting_Audio.sSoundSetting
// 0x0028
struct FsSoundSetting
{
	float                                              VolumeMaster;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              VolumeBGM;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              VolumeEnviroment;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VolumeEffect;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              VolumeVoice;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MuteBGM;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MuteEnviroment;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MuteEffect;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MuteVoice;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                VoiceLanguage;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobbyPart_SysSetting_Controll.sConrollSetting
// 0x0024
struct FsConrollSetting
{
	int                                                MouseSensitivityGame;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UseMouseSensitivityZoom;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MouseSensitivityZoom;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MouseInvertY;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           KeySetting;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SprintKeySet;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HoldZoomKeySet;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobbyPart_SysSetting_Facebook.SFacebookSettingInfo
// 0x0004
struct FSFacebookSettingInfo
{
	unsigned long                                      bAutoUpdate_Event : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAutoUpdate_Screenshot : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAutoUpdate_Movie : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bMaintainCookie : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFGame.SFGFxLobbyPart_SysSetting_Video.sGraphicSetting
// 0x0054
struct FsGraphicSetting
{
	int                                                FullScreen;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ScrRes;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ScrType;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Gamma;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RadarRotation;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ResultAutoSave;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                LobbyFullScreen;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ScaleLevel;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                VSyncmode;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                FrameStability;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Antialiasing;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                bIgnoreWindowSwitching;                           		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                LightSpreadEffect;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                DynamicShadows;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Gore;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                UISize;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                DepthOfField;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                ExploRadialBlur;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                EnemyDefaultUnit;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFGFxLobbyPart_SysSetting_Whisper.SWhisperSettingInfo
// 0x0004
struct FSWhisperSettingInfo
{
	unsigned long                                      bAllBlock : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGeneralBlock : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFriendBlock : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClanMemberBlock : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFGame.SFHeadQuarters.sRecommendNavPoint
// 0x0010
struct FsRecommendNavPoint
{
	class ASFPathNode*                                 NavPoint;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class APawn* >                             Targetting;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFHeadQuarters.sEnemyReport
// 0x0014
struct FsEnemyReport
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Loc;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              LastReport;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFHeadQuarters.sAvoidActor
// 0x0008
struct FsAvoidActor
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Dist;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFHeadQuarters.sKillingChain
// 0x000C
struct FsKillingChain
{
	int                                                PID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Killing;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Dying;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFHeadQuarters.sBombingSupport
// 0x0008
struct FsBombingSupport
{
	int                                                TargetID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFHeadQuarters.sKillerPlaceRecord
// 0x0010
struct FsKillerPlaceRecord
{
	class AController*                                 Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           Location;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFImportFontCharSet.SModeLoadingTip
// 0x0018
struct FSModeLoadingTip
{
	TArray< int >                                      ModeIDArray;                                      		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LoadingTipMode;                                   		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFInGameKickState.sVoter
// 0x0005
struct FsVoter
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      VoteState;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFInGameStore.SAccountBook
// 0x000C
struct FSAccountBook
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFInGameStore.CachedItemInfo
// 0x000C
struct FCachedItemInfo
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      ItemType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                Regdate;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFInGameStore.LatestWeaponInfo
// 0x0010
struct FLatestWeaponInfo
{
	TArray< struct FCachedItemInfo >                   Items;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFInGameStore.PurchaseInfo
// 0x000C
struct FPurchaseInfo
{
	int                                                PurchasePlayerID;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PurchaseItemID;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PurchaseItemDirty;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFItem_Char.SpecialSound
// 0x000C
struct FSpecialSound
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SoundPlayTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFItem_WeapOption_Sight.WeaponAlignment
// 0x0024
struct FWeaponAlignment
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     vLocZoomIN;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLocZoomOut;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              fZoomedMeshFOV;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFItem_Func_EnhancedCrosshair.sCrossHairType
// 0x0010
struct FsCrossHairType
{
	struct FString                                     CrossHairImg;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      CrossHairClass;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFItem_Func_EnhancedCrosshair.sCrossHairColor
// 0x0010
struct FsCrossHairColor
{
	struct FString                                     CrossHairUIColor;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      CrossHairRGBColor;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFItem_Func_RandomWeaponSetAmmo.SRandomWeaponAmmo
// 0x000C
struct FSRandomWeaponAmmo
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AmmoCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AmmoCountMax;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFItem_Functional_RandomWeapon.SRandomWeapon
// 0x0008
struct FSRandomWeapon
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Ratio;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFItem_Weap_AI.sClassbyAIType
// 0x0010
struct FsClassbyAIType
{
	unsigned char                                      AIType;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     SpecificClassName;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFItemManager.AsyncLoadSpecificClassByID
// 0x001C
struct FAsyncLoadSpecificClassByID
{
	struct FString                                     RequestedObjectName;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RequestedItemID;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             Callback;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFItemManager.AsyncLoadDefaultItems
// 0x0020
struct FAsyncLoadDefaultItems
{
	int                                                RequestedCount;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Caller;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             CallbackLoaded;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             CallbackAllLoaded;                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFItemManager.MeshPartsPackageInfo
// 0x000D
struct FMeshPartsPackageInfo
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CookingType;                                      		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFKActor.CheckpointRecord
// 0x0021
struct ASFKActor_FCheckpointRecord
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      CollisionType;                                    		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Physics;                                          		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFKeyMessage.KeyMessageData
// 0x0018
struct FKeyMessageData
{
	TArray< struct FString >                           Keys;                                             		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     strMessage;                                       		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFLocalDB.DataEntry
// 0x0010
struct FDataEntry
{
	int                                                DataID;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DataName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USFLocalDBTableData*                         TableData;                                        		// 0x000C (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct SFGame.SFMapBrief.NoChallengeLevel
// 0x0010
struct FNoChallengeLevel
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                DefaultLevel;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFMapInfo.SFStreamLevelInfo
// 0x000C
struct FSFStreamLevelInfo
{
	unsigned char                                      SFStreamLevel;                                    		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FName                                       LevelName;                                        		// 0x0004 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct SFGame.SFMapInfo.CubeMapInfo
// 0x0018
struct FCubeMapInfo
{
	struct FName                                       CubeMapActorName;                                 		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UTextureCube*                                CubeMap;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Location;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFMCResourceManager.AsyncItemResourceInfo
// 0x0034
struct FAsyncItemResourceInfo
{
	class AActor*                                      Caller;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RequestCount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FMeshGroup >                        OwnerMeshGroups;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMeshPart >                         MeshParts;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  CamoTexture;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	class UMorphTargetSet*                             FaceMorphSet;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             Callback;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFMCResourceManager.RequestedResource
// 0x0018
struct FRequestedResource
{
	struct FString                                     ObjectName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MeshPartIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000000]              
	class AActor*                                      Caller;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFMinimapActor.sMiniMapLayer
// 0x001C
struct FsMiniMapLayer
{
	float                                              HeightMax;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeightMin;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  LayerTexture;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ChallengerNavigationLayerTexture;                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  DefenderNavigationLayerTexture;                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeightAverage;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nLayer;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFMinimapActor.MiniMapImageAdjustmentData
// 0x0028
struct FMiniMapImageAdjustmentData
{
	struct FUIImageAdjustmentData                      Horizontal;                                       		// 0x0000 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FUIImageAdjustmentData                      Vertical;                                         		// 0x0014 (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFObjectPool.MoviePlayerInfo
// 0x000C
struct FMoviePlayerInfo
{
	struct FName                                       MoviePlayerClassName;                             		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class UGFxMoviePlayer*                             MoviePlayer;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFObjectPool.MergedMeshCacheDatum
// 0x001C
struct FMergedMeshCacheDatum
{
	unsigned char                                      MeshGroupLabel;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     IDString;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               MergedMesh;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FDouble                                     LastAccessTime;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFOnlineSubsystemInternet.HTTP_ARG
// 0x0018
struct FHTTP_ARG
{
	struct FString                                     strArgName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strArgValue;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFOnlineSubsystemPCBase.ConnectionPolling
// 0x0008
struct FConnectionPolling
{
	float                                              ConnectionStartTime;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class USFServerConnection*                         Connection;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFServerConnection.SFSocket
// 0x0030
struct FSFSocket
{
	struct FPointer                                    Socket;                                           		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    netBuf;                                           		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    CriticalSection;                                  		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    RecvRunnable;                                     		// 0x000C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    RecvThread;                                       		// 0x0010 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< class UPacket* >                           PacketArray;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PacketArraySize;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nRead;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsConnect : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DisconnectCount;                                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFOnlineSubsystemPCEUR.SteamLanguage
// 0x0018
struct FSteamLanguage
{
	struct FString                                     Language;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SteamLanguage;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFOnlineSubsystemPCIDN.SNMAuthError
// 0x0010
struct FSNMAuthError
{
	int                                                ErrorID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ResultMsg;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFOutLineVolume.OutlineColor
// 0x0002
struct FOutlineColor
{
	unsigned char                                      AllowToSeeTeamIndex;                              		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      OutLineColorIndex;                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFWorldCubeMapComponent.SMaterialInfo
// 0x0010
struct FSMaterialInfo
{
	class UMeshComponent*                              Mesh;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInstanceConstant* >         arrMIC;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFPawn.sIgnoreDamageTypeList
// 0x0008
struct FsIgnoreDamageTypeList
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn.EventServePart
// 0x0008
struct FEventServePart
{
	unsigned char                                      EventName;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      PartIndex;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                ServeItem;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn.RequestDamageInfo
// 0x0058
struct FRequestDamageInfo
{
	class APawn*                                       Attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class APawn*                                       Victim;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FSFTakeHitInfo                              HitInfo;                                          		// 0x0008 (0x0038) [0x0000000000000000]              
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FVector                                     AttackerLocation;                                 		// 0x0044 (0x000C) [0x0000000000000000]              
	unsigned char                                      bodyParts;                                        		// 0x0050 (0x0001) [0x0000000000000000]              
	unsigned char                                      FiringMode;                                       		// 0x0051 (0x0001) [0x0000000000000000]              
	int                                                RecoilCRC;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn.SKillAssist
// 0x0018
struct FSKillAssist
{
	unsigned char                                      Damage;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                AttackerPlayerID;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                LadderDiff;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastDamagedTime;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn.SAimProfileInfo
// 0x000C
struct FSAimProfileInfo
{
	unsigned char                                      AimProfile;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       ProfileName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn.DistortionPostEffect
// 0x0010
struct FDistortionPostEffect
{
	float                                              RatioTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RatioTimeRate;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RemainTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn.BonePartsTable
// 0x0009
struct FBonePartsTable
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      BodyPart;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn_AI.DelayedDamageInfoStruct
// 0x0024
struct FDelayedDamageInfoStruct
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn_AI.WeaponStartTraceLocationCacheStruct
// 0x0014
struct FWeaponStartTraceLocationCacheStruct
{
	unsigned long                                      bUpToDate : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     StartLoc;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	class AWeapon*                                     WeaponCacheIsValidFor;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn_AI_Aliens.sReplaceMaterialSet
// 0x000C
struct FsReplaceMaterialSet
{
	TArray< struct FString >                           Materials;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFPawn_Player.SFAutoMessageWeaponType
// 0x0010
struct FSFAutoMessageWeaponType
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponType;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FName                                       SoundName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawn_CaptainPlayer.Advantage
// 0x0010
struct FAdvantage
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HealthMin;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeRate;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTemporaryObjectPool.SFBloodDecalInfo
// 0x0008
struct FSFBloodDecalInfo
{
	class USFDecal*                                    Decal;                                            		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTemporaryObjectPool.SFBloodDecalPool
// 0x003C
struct FSFBloodDecalPool
{
	int                                                MaxDecalCounter;                                  		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnAreaDist;                                    		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              OverlapDist;                                      		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Width;                                            		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Height;                                           		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Thickness;                                        		// 0x0014 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DepthBias;                                        		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Lifetime;                                         		// 0x001C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   DecalBlendRange;                                  		// 0x0020 (0x0008) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bNoClip : 1;                                      		// 0x0028 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bProjectOnSkeletalMeshes : 1;                     		// 0x0028 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	int                                                DecalsIndex;                                      		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FSFBloodDecalInfo >                 DecalInfos;                                       		// 0x0030 (0x000C) [0x0000000000482000]              ( CPF_Transient | CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTemporaryObjectPool.SprayInfo
// 0x0008
struct FSprayInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ASFSprayActor*                               SprayActor;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFGame.SFTemporaryObjectPool.StaticMeshComonentForRestore
// 0x000C
struct FStaticMeshComonentForRestore
{
	class AActor*                                      StaticMeshCompOwner;                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        StaticMeshComp;                                   		// 0x0004 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      CollideActors : 1;                                		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      BlockActors : 1;                                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFGame.SFTemporaryObjectPool.arrPSCInfo
// 0x0014
struct FarrPSCInfo
{
	TArray< class UParticleSystemComponent* >          arrPSC;                                           		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UParticleSystem*                             PS;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nCurrentIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawnFX.SAppliedBuffEffectPSCData
// 0x000C
struct FSAppliedBuffEffectPSCData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              ElapsedTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    EffectPSC;                                        		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SFGame.SFPawnFX.DamageTypeLensEffect
// 0x0008
struct FDamageTypeLensEffect
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             CameraLensEffect;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFPawnFX.sCameraShake
// 0x0010
struct FsCameraShake
{
	class UCameraShake*                                CamShake;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CamShakeInnerRadius;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              CamShakeOuterRadius;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CamShakeFalloff;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSoundGroup_Pawn.SFFoleyEntry
// 0x0010
struct FSFFoleyEntry
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< class USoundCue* >                         Sounds;                                           		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFSoundGroup_Pawn.sDamageEffectEntry
// 0x000C
struct FsDamageEffectEntry
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UParticleSystem*                             Effect;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSoundGroup_Pawn.SFVoiceFoleyEntry
// 0x0010
struct FSFVoiceFoleyEntry
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< class USoundCue* >                         Sounds;                                           		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFPCRoomCare.SPCRoomCare
// 0x0028
struct FSPCRoomCare
{
	int                                                PCRoomType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ExpAddRatio;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SPGageAddRatio;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ClanPointRatio;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ItemType;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconImage;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFProfileSettings.KeymapData
// 0x0014
struct FKeymapData
{
	struct FName                                       FlashKeyname;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       UnrealKeyName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                FlashKeyCode;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFProfileSettings.SLocalizedKeyName
// 0x0018
struct FSLocalizedKeyName
{
	struct FString                                     Src;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     tgt;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFProfileSettings.NotKeyMapData
// 0x0010
struct FNotKeyMapData
{
	int                                                KeyIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NotMapKeyName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFQACheckMessage.SFQAMessage
// 0x0014
struct FSFQAMessage
{
	float                                              TimeToDisplay;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FColor                                      DisplayColor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     QAMessage;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFRadioMessage.MenuString
// 0x0078
struct FMenuString
{
	struct FString                                     menu[ 0xA ];                                      		// 0x0000 (0x0078) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFRandomRespawn.SRespawnPointInfo
// 0x0014
struct FSRespawnPointInfo
{
	float                                              fDistRatio;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASFGamePlayerStart*                          PS_Respawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFRandomRespawn.PlayerStartRating
// 0x000C
struct FPlayerStartRating
{
	int                                                Number;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DistanceRating;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFRankPoint.SSPGage
// 0x000C
struct FSSPGage
{
	int                                                Rank;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SPGage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AddSP;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSeqAct_BroadcastMessageByType.ReplaceMessageInfo
// 0x0010
struct FReplaceMessageInfo
{
	struct FString                                     LinkDesc;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USequenceVariable*                           SeqVar;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFSeqAct_ChangeMatineeSkel.AttachedActorInfo
// 0x0020
struct FAttachedActorInfo
{
	class AActor*                                      AttachedActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned long                                      bHardAttach : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFSeqAct_Record.InterpActorCollisionInfo
// 0x0014
struct FInterpActorCollisionInfo
{
	struct FString                                     PathName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bCollideActors : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bBlockActors : 1;                                 		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIgnoreEncroachers : 1;                           		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlockRigidBody : 1;                              		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bDisableTickWhenStop : 1;                         		// 0x000C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	int                                                InterpolatingStartCounter;                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFShooterDefenceGame.sDroppedPickupInfo
// 0x001C
struct FsDroppedPickupInfo
{
	unsigned char                                      Diff;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rate;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ClassName;                                        		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ExtraVal;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      Class;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFShooterPlayerReplicationInfo.InGameLevelInfo
// 0x0008
struct FInGameLevelInfo
{
	int                                                Kills;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFShooterPlayerReplicationInfo.InGameLevelData
// 0x0010
struct FInGameLevelData
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DamagePct;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SpeedPct;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFShutDownLaw.SShutDownCloseMsg
// 0x001C
struct FSShutDownCloseMsg
{
	int                                                ShutDownCode;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ShutDownName;                                     		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFShutDownLaw.SShutDownRemainMsg
// 0x0018
struct FSShutDownRemainMsg
{
	struct FString                                     ShutDownName;                                     		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFShutDownLaw.SForcedShutDownLaw
// 0x000C
struct FSForcedShutDownLaw
{
	int                                                Step;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                StartTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPerMinute : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFSkelControl_MassBoneScaling.BoneScaleInfo
// 0x0010
struct FBoneScaleInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoneScale;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BoneIndex;                                        		// 0x000C (0x0004) [0x0000000000020000]              ( CPF_EditConst )
};

// ScriptStruct SFGame.SFSkelControl_Retargeting.IKMatching
// 0x002C
struct FIKMatching
{
	struct FName                                       EffectorBoneName;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LimbBoneName;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       JointBoneName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneAxis;                                         		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      JointAxis;                                        		// 0x0019 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInvertBoneAxis : 1;                              		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInvertJointAxis : 1;                             		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                EffectorBoneIndex;                                		// 0x0020 (0x0004) [0x0000000000020000]              ( CPF_EditConst )
	int                                                LimbBoneIndex;                                    		// 0x0024 (0x0004) [0x0000000000020000]              ( CPF_EditConst )
	int                                                JointBoneIndex;                                   		// 0x0028 (0x0004) [0x0000000000020000]              ( CPF_EditConst )
};

// ScriptStruct SFGame.SFSkelControl_Retargeting.IKMaptchInfo
// 0x0008
struct FIKMaptchInfo
{
	unsigned long                                      bNeedIK : 1;                                      		// 0x0000 (0x0004) [0x0000000000020000] [0x00000001] ( CPF_EditConst )
	int                                                MatchingIndex;                                    		// 0x0004 (0x0004) [0x0000000000020000]              ( CPF_EditConst )
};

// ScriptStruct SFGame.SFSoundGroup_Voice.BGMInfo
// 0x0010
struct FBGMInfo
{
	class USoundCue*                                   Cue;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInTime;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutTime;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSoundGroup_Voice.VoiceWave
// 0x001C
struct FVoiceWave
{
	TArray< class USoundNodeWave* >                    Waves;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Caption;                                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CaptionLifeTime;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSoundGroup_Voice.VoiceMessage
// 0x0130
struct FVoiceMessage
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FBGMInfo                                    BGMToPlay;                                        		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FVoiceWave                                  Sounds[ 0xA ];                                    		// 0x0018 (0x0118) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFSpawner.SpawnerSlot
// 0x0021
struct FSpawnerSlot
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class ASFPawn_AI*                                  SpawningPawn;                                     		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LocationOffset;                                   		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotationOffset;                                   		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      EmergeAnim;                                       		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSpectatorCam_AutoFraming.AutoframingWatchedPawn
// 0x0020
struct FAutoframingWatchedPawn
{
	class ASFPawn*                                     SFP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     LookatLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              LastRelevantTime;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      LastTracePoint;                                   		// 0x0014 (0x0001) [0x0000000000000000]              
	float                                              NormalizedWeight;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoRelevanceLag : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFSpectatorPoint.FOVInterpSpeedPropertyStruct
// 0x0008
struct FFOVInterpSpeedPropertyStruct
{
	float                                              FOVInterpSpeed;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVInterpSpeed_MovingCamera;                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSpectatorPoint.RotInterpSpeedPropertyStruct
// 0x0008
struct FRotInterpSpeedPropertyStruct
{
	float                                              RotInterpSpeed;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotInterpSpeed_MovingCamera;                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSpectatorPoint.LookatInterpSpeedPropertyStruct
// 0x0008
struct FLookatInterpSpeedPropertyStruct
{
	float                                              LookatInterpSpeed;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookatInterpSpeed_MovingCamera;                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSpectatorPoint.ZoomPropertyStruct
// 0x000C
struct FZoomPropertyStruct
{
	float                                              FOVMax;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVMin;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVDelta;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFSprayTextureManager.SprayTextureFile
// 0x0010
struct FSprayTextureFile
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  Texture;                                          		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFGame.SFSquadFormation.FormationPosition
// 0x003C
struct FFormationPosition
{
	struct FName                                       PosName;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                RelIdx;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YawOffset;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Distance;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastUpdateTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastUpdatePosition;                               		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     IdealPosition;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	class ANavigationPoint*                            Nav;                                              		// 0x0030 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class ASFAIController*                             AI;                                               		// 0x0034 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FColor                                      DebugColor;                                       		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTargetPaper.TargetInfo
// 0x0010
struct FTargetInfo
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      ScoreForPerMaterial;                              		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFTargetPaper.RandomTargetInfo
// 0x0014
struct FRandomTargetInfo
{
	struct FTargetInfo                                 Target;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              RandomRate;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFThunderRunState.PawnLocation
// 0x001C
struct FPawnLocation
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTrainingGameReplicationInfo.SubLevelInfo
// 0x000D
struct FSubLevelInfo
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      SubLevelMode;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTrigger_Use.AimValueToInteractive
// 0x0008
struct FAimValueToInteractive
{
	float                                              Degree;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Dist;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTrigger_Use.UserInfo
// 0x000C
struct FUserInfo
{
	class APawn*                                       User;                                             		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              UsingTime;                                        		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              StartTime;                                        		// 0x0008 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct SFGame.SFTrigger_Use.CheckpointRecordEx
// 0x000C
struct FCheckpointRecordEx
{
	struct FName                                       currState;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bCanUse : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBlockUse : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFGame.SFTrigger_Bomb.LEDInfo
// 0x0018
struct FLEDInfo
{
	float                                              RemainTime;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CycleTime;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                UVOffset;                                         		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTrigger_ConvoyanceSeizure.ItemSeizureInfoStruct
// 0x0008
struct FItemSeizureInfoStruct
{
	float                                              Second;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemAmount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFTrigger_UseByWeaponGroup.SGaugeTimeByWeaponTypeInfo
// 0x0008
struct FSGaugeTimeByWeaponTypeInfo
{
	unsigned char                                      WeaponGroup;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              GaugeTime;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTurret.sPointOfView
// 0x0014
struct FsPointOfView
{
	struct FVector                                     DirOffset;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Distance;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fZAdjust;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFTurret.CheckpointRecord
// 0x0004
struct ASFTurret_FCheckpointRecord
{
	unsigned long                                      bHidden : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFTurret_MiniGunBase.Muzzle
// 0x001C
struct FMuzzle
{
	struct FName                                       MuzzleSocketName;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShellOutSocket;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USFParticleSystemComponent*                  MuzzleFlashPSC;                                   		// 0x0010 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USFParticleSystemComponent*                  ShellOutPSC;                                      		// 0x0014 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USFExplosionLight*                           MuzzleFlashLight;                                 		// 0x0018 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SFGame.SFTutorialPlayerController.TutRankTable
// 0x001C
struct FTutRankTable
{
	int                                                RequireScore;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Rank;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Exp;                                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RankString;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                RankCount;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFUIDataProvider_ModeInfo.DefaultRoundDataByChannel
// 0x0008
struct FDefaultRoundDataByChannel
{
	int                                                channelType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DefaultRoundByChannel;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_Chatting.sChatCommand
// 0x000D
struct FsChatCommand
{
	struct FString                                     cmdstr;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Cmd;                                              		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_Chatting.SBlockWhisperUserInfo
// 0x0008
struct FSBlockWhisperUserInfo
{
	int                                                USN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UserState;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_CombatReport.sSumDamage
// 0x0008
struct FsSumDamage
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_GameResult.SModeNotice
// 0x0018
struct FSModeNotice
{
	struct FString                                     GameModeName;                                     		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           NoticeArray;                                      		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_InGameScore.HitPawnInfo
// 0x000C
struct FHitPawnInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       HitPawnName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFZombieTypeJoin.ZombieTypeJoin
// 0x0010
struct FZombieTypeJoin
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            IncludeTypes;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_Rank.ModeRankInfo
// 0x0010
struct FModeRankInfo
{
	int                                                GameModeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FPVERankTeamInfo >                  RankTeamList;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIDataStore_Rank.ModeRankProtocol
// 0x0008
struct FModeRankProtocol
{
	int                                                ModeID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ProtocolID;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIDataStore_RoomUserList.SClanUserCount
// 0x0020
struct FSClanUserCount
{
	int                                                CSN;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UserCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMark;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIHelper.sViewTeamMarkInfo
// 0x0010
struct FsViewTeamMarkInfo
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StartIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIHelper.RewardImgInfo
// 0x0020
struct FRewardImgInfo
{
	unsigned char                                      Grade;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     Img;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NametagImg;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RollingTime;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIHelper.SItemImageTable
// 0x001C
struct FSItemImageTable
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemClassName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UIID;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIItemCodeType.SCharItemType
// 0x0010
struct FSCharItemType
{
	unsigned char                                      TypeIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     strItemType;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIItemCodeType.SWeapItemType
// 0x0010
struct FSWeapItemType
{
	unsigned char                                      TypeIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     strItemType;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIItemCodeType.SWeapPartType
// 0x0010
struct FSWeapPartType
{
	unsigned char                                      TypeIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     strItemType;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIMinimapRadarGFxValue.GFxIconRawData
// 0x0018
struct FGFxIconRawData
{
	class UGFxObject*                                  GFxIcon;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TextField;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FrameIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     PrevText;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFUIMinimapRadarGFxValue.GFxIconData
// 0x002C
struct FGFxIconData
{
	TArray< struct FGFxIconRawData >                   Icons;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  Factory;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     CreateSymbolName;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FactoryName;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UsedIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFUIMinimapRadarGFxValue.SGFxPingData
// 0x0018
struct FSGFxPingData
{
	class UGFxObject*                                  IconMC;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned char                                      IconType;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	float                                              RegisteredTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWeapon.PunchAngleInfo
// 0x0010
struct FPunchAngleInfo
{
	int                                                Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Yaw;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Exp;                                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoveryTime;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFWeapon.RecoilValue
// 0x0020
struct FRecoilValue
{
	float                                              Spread;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Up_Base;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lateral_Base;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Up_Modifier;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lateral_Modifier;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Up_Max;                                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lateral_Max;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Direction_Change;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFGame.SFWarriorGame.SAIRespawnGroupInfo
// 0x0038
struct FSAIRespawnGroupInfo
{
	int                                                Group;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Delay;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastRespawnedTime;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RespawnCount;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                OpenedSpawnPoints;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseRandomStrengthen : 1;                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShareRespawning : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class ASFGameWarriorAIStart* >             SpawnPoints;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bAnnounced : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAnnounceOnetime : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     SpawnAnnounceMessage;                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SpawnAnnounceDelay;                               		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWarriorPlayerReplicationInfo.SPolymorphInfo
// 0x001C
struct FSPolymorphInfo
{
	struct FString                                     PolymorphPawnClassName;                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      PolymorphBaseStat;                                		// 0x000C (0x0001) [0x0000000000000000]              
	TArray< struct FSModeStatInfo >                    PolymorphBonus;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFWeap_Bullet.RifleHitResult
// 0x0024
struct FRifleHitResult
{
	TArray< struct FImpactInfo >                       ImpactInfos;                                      		// 0x0000 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	TArray< struct FImpactInfo >                       PenetrationInfos;                                 		// 0x000C (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	TArray< float >                                    DamageScale;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFWeap_Bullet.sHitPawns2d
// 0x0008
struct FsHitPawns2d
{
	class APawn*                                       HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Dist;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWeap_Melee.sDamagedActor
// 0x0008
struct FsDamagedActor
{
	class AActor*                                      DamagedActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Dist;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWeap_MeleeSwing.SSwingPawn
// 0x0008
struct FSSwingPawn
{
	float                                              ActivateTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASFPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWeap_ThrowingMelee.BoneInfoToHide
// 0x0014
struct FBoneInfoToHide
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WeaponState;                                      		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                FireModeNum;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHidden : 1;                                      		// 0x0010 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct SFGame.SFWeaponFlamer.sFlame
// 0x001C
struct FsFlame
{
	class USFParticleSystemComponent*                  FlamePSC;                                         		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             FlameTemplate;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     FlameString;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       SocketName;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWeaponFlamer.SFlameType
// 0x0010
struct FSFlameType
{
	unsigned char                                      FlameType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FsFlame >                           Flames;                                           		// 0x0004 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct SFGame.SFWeaponRIS_LaserSightBase.BeamSocketAlignment
// 0x0018
struct FBeamSocketAlignment
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Pitch;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Roll;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              ZoomLength;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFWeaponRIS_SilencerBase.sMuzzleFlashEffect
// 0x0018
struct FsMuzzleFlashEffect
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USFExplosionLight*                           Light;                                            		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      PSCLoops : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       Socket;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned long                                      Attached : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFGame.SFWireEntanglementActor.sEffectOn
// 0x0008
struct FsEffectOn
{
	float                                              LastTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASFPawn*                                     TargetPawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFZombieGameReplicationInfo.SGameAggroMultiplier
// 0x0008
struct FSGameAggroMultiplier
{
	int                                                EarnedMoney;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Ratio;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFGame.SFZombieHideSeekGame.FeverWeaponGrade
// 0x0010
struct FFeverWeaponGrade
{
	int                                                WeaponMaxKill;                                    		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< int >                                      WeaponID;                                         		// 0x0004 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif