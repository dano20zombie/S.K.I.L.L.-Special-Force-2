#define URotationToRadians( URotation )		( ( URotation ) * ( CONST_Pi / 32768.0f ) ) 
#define URotationToDegree( URotation )		( ( URotation ) * ( 360.0f / 65536.0f ) ) 

#define DegreeToURotation( Degree )			( ( Degree ) * ( 65536.0f / 360.0f ) )
#define DegreeToRadian( Degree )			( ( Degree ) * ( CONST_Pi / 180.0f ) )

#define RadianToURotation( URotation )		( ( URotation ) * ( 32768.0f / CONST_Pi ) ) 
#define RadianToDegree( Radian )			( ( Radian ) * ( 180.0f / CONST_Pi ) )

// MENU
bool bHWNDtaken = false;
HWND hwnd;

std::string PLog = "";
wchar_t *MenuDefin = L"";
wchar_t *Credits = L"";
int MenuX;

wchar_t* wMenuIndex[] = { L"AIMBOT", L"ESP3D", L"ESP2D", L"PLAYER", L"SPECIAL", L"SETTINGS" };
int iMenuIndex = 0;

//MENU CAPTIONS
int Flag = 0;
int FlagMenu = 0;
int FlagSlideBox = 0;
int CurrentClickedIdx = 0;

//FPS
INT Fps = 0;
FLOAT LastTickCount = 0.0f;
FLOAT CurrentTickCount;
wchar_t FrameRate[50];

INT Spam = 0;
FLOAT LastTickSpam = 0.0f;
FLOAT CurrentTickSpam;

INT Bone = 0;
FLOAT LastTickBone = 0.0f;
FLOAT CurrentTickBone;


INT RandBone = 0;
FLOAT LastTickRandBone = 0.0f;
FLOAT CurrentTickRandBone;

//AIMBOT
bool bEnableAim = false;
wchar_t* wAimKey[] = { L"RMOUSE", L"LMOUSE", L"SHIFT", L"L.ALT", L"ALWAYS" };
int iAimKey = 0;
wchar_t* wAimBy[] = { L"DISTANCE", L"FOV", L"HP" };
int iAimBy = 0;
wchar_t* wFovAngle[] = { L"1", L"2", L"3", L"5", L"10", L"25", L"30", L"45" };
int iFovAngle = 0;
wchar_t* wHPLimit[] = { L"0", L"25", L"50", L"75", L"99" };
int iHPLimit = 0;
wchar_t* wAimPosition[] = { L"RAND", L"HEAD", L"CHEST", L"HAND" };
int iAimPosition = 0;
wchar_t* wBoneRefreshTime[] = { L"0", L"20ms", L"40ms", L"60ms", L"80ms", L"100ms" };
int iBoneRefreshTime = 0;
bool bBoneRefreshed = false;
bool bAutoFire = false;
wchar_t* wSmoothAim[] = { L"0", L"1", L"2", L"3", L"4", L"5" };
int iSmoothAim = 0;
bool bSilentAim = false;
bool bSmartAccuracy = false;
bool bHardLock = false;

//ESP 3D
wchar_t* wEnableEsp[] = { L"ENEMY", L"TEAM", L"BOTH" };
int iEnableEsp = 2;
bool bNameEsp = false;
bool bDistanceEsp = false;
bool bHealthEsp = false;
bool bBoneEsp = false;
bool bHeadCircle = false;
wchar_t* wBoundingBox[] = { L"OFF", L"3D", L"2D" };
int iBoundingBox = 0;
bool bLaserEsp = false;
bool AlienZombie = false;
bool bSnapLines = false;
bool bGrenadeEsp = false;
bool bDeadVisible = false;
bool bShowStats = false;
wchar_t* wEnemyVis[] = { L"RED", L"ORANGE", L"YELLOW" };
int iEnemyVis = 1;
wchar_t* wEnemyInv[] = { L"RED", L"ORANGE", L"YELLOW" };
int iEnemyInv = 0;
wchar_t* wTeamVis[] = { L"BLUE", L"GREEN", L"YELLOW" };
int iTeamVis = 1;
wchar_t* wTeamInv[] = { L"BLUE", L"GREEN", L"YELLOW" };
int iTeamInv = 1;

//ESP 2D
wchar_t* wEnemyRadar[] = { L"OFF", L"ON" };
int iEnemyRadar = 0;
wchar_t* wEnemyColor[] = { L"RED", L"ORANGE", L"YELLOW" };
int iEnemyColor = 0;
wchar_t* wTeamColor[] = { L"BLUE", L"GREEN", L"YELLOW" };
int iTeamColor = 1;
wchar_t* wBorderColor[] = { L"BLACK", L"WHITE", L"RED", L"BLUE" };
int iBorderColor = 0;
wchar_t* wQuadrantColor[] = { L"BLACK", L"GREY", L"WHITE", L"RED", L"BLUE" };
int iQuadrantColor = 0;
wchar_t* wBackgroundColor[] = { L"GREY", L"WHITE", L"RED", L"BLUE", L"GREEN" };
int iBackgroundColor = 0;
wchar_t* wBackgroundOpacity[] = { L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255" };
int iBackgroundOpacity = 255;
//RADARSCALE QUESTO PLAYER RADIUS
wchar_t* wPlayerRadius[] = { L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", L"195", L"196", L"197", L"198", L"199", L"200" };
int iPlayerRadius = 0;
wchar_t* wRadarSize[] = { L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306", L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322", L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338", L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354", L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370", L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386", L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400" };
int iRadarSize = 100;
wchar_t* wMoveRadar[] = { L"OFF", L"ON" };
int iMoveRadar = 0;
bool NewMove = true;
bool bMoving = false;
FVector2D RadarLocation = { 15,10 };

//PLAYER
wchar_t* wCrosshair[] = { L"OFF", L"ON" };
int iCrosshair = 0;
wchar_t* wCrosshairSize[] = { L"5", L"6", L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", L"99", L"100" };
int iCrosshairSize = 0;
wchar_t* wUnlAmmo[] = { L"OFF", L"ON" };
int iUnlAmmo = 0;
bool bUnlGrenade = false;
bool bDropWeapon;
bool bFullAutoWeapon;
bool bRangeHack;
wchar_t* wBurstFire[] = { L"OFF", L"ON" };
int iBurstFire = 0;
bool bNoRecoil;
bool bNoSpread;
wchar_t* wTriggerbot[] = { L"OFF", L"ON" };
int iTriggerbot = 0;
wchar_t* wNameStealer[] = { L"OFF", L"CUSTOM 1", L"CUSTOM 2", L"BLANK" };
int iNameStealer = 0;
bool bNoFlash;
bool bNoSmoke;
bool bNoRespawnCost = false;
wchar_t* wAutoRespawn[] = { L"OFF", L"M", L"< X HP" };
int iAutoRespawn = 0;
wchar_t* wHpRespawn[] = { L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", L"99" };
int iHpRespawn = 0;
bool bNoBulletGravity;
bool bAutoSwitch;

//FIX FOR AUTOSWITCH
bool AfterShot = false;

//SPECIAL
wchar_t* wEnableOpk[] = { L"OFF", L"ON"};
int iEnableOpk = 0;
//OPK TARGET QUESTO CAMBIATO
wchar_t* wPickBestPlayer[] = { L"ENEMY", L"TEAM", L"BOTH" };
int iPickBestPlayer = 0;
wchar_t* wOpkKey[] = { L"EVER", L"L" };
int iOpkKey = 0;
wchar_t* wOpkDamage[] = { L"C4", L"GRENADE", L"TURRET", L"NULL" };
int iOpkDamage = 0;
wchar_t* wOpkBone[] = { L"HEAD", L"CHEST", L"RANDOM" };
int iOpkBone = 0;
bool bShotThroughWall;
wchar_t* wBulletPerShot[] = { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"10" };
int iBulletPerShot = 0;
bool bHeroMP;
bool bHeroDP;
bool bHeroAP;
bool bHeroEXP;
wchar_t* wHeroPoints[] = { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", L"99", L"100" };
int iHeroPoints = 0;
wchar_t* wHeroPointsKey[] = { L"K", L"P" };
int iHeroPointsKey = 0;
bool bOpkHero;
wchar_t* wVirtualJumpValue[] = { L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226", L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242", L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258", L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274", L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290", L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300" };
int iVirtualJumpValue = 0;
wchar_t* wVirtualJump[] = { L"OFF", L"ON" };
int iVirtualJump = 0;

//SETTINGS
wchar_t userData[160];
DWORD userDataSize = 160;

bool bFPS;
bool bWatermark;
bool bMACSpoof = false;

char cName1[256];
int iName1 = 0;
wchar_t* Name1 = L"";
bool Name1isActive = false;
bool bTick1 = false;

char cName2[256];
int iName2 = 0;
wchar_t* Name2 = L"";
bool Name2isActive = false;
bool bTick2 = false;

bool bRestoreDefaultSettings;
bool bSaveSettings;
bool bLoadSettings;

FLOAT LastTickRestore = 0.0f;
FLOAT CurrentTickRestore;
FLOAT LastTickSave = 0.0f;
FLOAT CurrentTickSave;
FLOAT LastTickLoad = 0.0f;
FLOAT CurrentTickLoad;
FLOAT LastTickName1 = 0.0f;
FLOAT CurrentTickName1;
FLOAT LastTickName2 = 0.0f;
FLOAT CurrentTickName2;

//Bones
#define Bone_Root			0
#define Bone_Hand_L			3
#define Bone_Hand_R			4
#define Bone_Foot_L			6
#define Bone_Foot_R			7
#define Bone_Pelvis			9
#define Bone_Spine			10
#define Bone_Spine1			11
#define Bone_Spine2			12
#define Bone_Neck			13
#define Bone_Head			14
#define Bone_Helmet			15
#define Bone_LClavicle		16
#define Bone_LArmUp			17
#define Bone_LArmLow		18
#define Bone_LHand			19
#define Bone_RClavicle		37
#define Bone_RArmUp			38
#define Bone_RArmLow		39
#define Bone_RHand			40
#define Bone_LLegUp			58
#define Bone_LLegLow		59
#define Bone_LFoot			60
#define Bone_RLegUp			62
#define Bone_RLegLow		63
#define Bone_RFoot			64


struct MenuIndexTab
{
	int X;
	int Y;
	int Lungo;
	int Alto;
};

MenuIndexTab AimbotTab = { 16,45,120,21 };
MenuIndexTab Esp3D = { 16,73,120,21 };
MenuIndexTab Esp2D = { 16,101,120,21 };
MenuIndexTab Player = { 16,129,120,21 };
MenuIndexTab Special = { 16,157,120,21 };
MenuIndexTab Settings = { 16,185,120,21 };