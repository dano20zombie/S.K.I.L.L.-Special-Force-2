#ifndef _POSTRENDER_HPP
#define _POSTRENDER_HPP

#include "MenuDefines.hpp"

#define HACK_MAJOR_VERSION 1
#define HACK_MINOR_VERSION 4

using namespace std;

ASFPlayerController *PlayerController;

FRotator SilentAimRot;

bool Restored = false;
bool Saved = false;
bool Loaded = false;

bool bShowMenu = true;

int iRandomNum = 14;
bool bRandomNumChange = false;

bool IsMyPawn = false;

float RealGravityScaling = 0.0f;
bool bGravityEnabled = false;

bool bBullet;

int FlagHero = 0;

bool bOPKKey = false;
bool bRespawnKey = false;
bool bHeroKey1 = false;
bool bHeroKey2 = false;
bool bRButton = false;
bool bLButton = false;
bool bShiftButton = false;
bool bCapsButton = false;
bool bAltButton = false;

float NoSpreadBackup = 0.0f;

bool FistSteal = true;
FString OldName = L"";

//Mouse Coords
float MouseX;
float MouseY;

int SlideBoxMin = 304;
int SlideBoxMax = 454;

#define MapColorValueA(health, inMax) (unsigned char)(255 - (((((health - inMax) * 100) / inMax) * 255) / 100))
#define MapColorValueB(health, inMax) (unsigned char)((((health * 100) / inMax) * 255) / 100)
#define MakeColor(R, G, B) { B, G, R, 255 }

FColor Black MakeColor(0, 0, 0);
FColor White MakeColor(255, 255, 255);
FColor Red MakeColor(255, 0, 0);
FColor Green MakeColor(0, 255, 0);
FColor Blue MakeColor(0, 162, 232);
FColor Orange MakeColor(255, 128, 0);
FColor Yellow MakeColor(255, 255, 0);
FColor Cyan MakeColor(0, 255, 255);

enum BONE
{
	CHEST = 12, HEAD = 14,
	LEFT_SHOULDER = 17, LEFT_ELBOW, LEFT_WRIST,
	RIGHT_SHOULDER = 38, RIGHT_ELBOW, RIGHT_WRIST,
	LEFT_HIP = 58, LEFT_KNEE, LEFT_ANKLE, LEFT_TOE,
	RIGHT_HIP = 62, RIGHT_KNEE, RIGHT_ANKLE, RIGHT_TOE
};

void ClickCapture()
{
	if (bShowMenu)
	{
		if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) && (Flag == 0))
		{
			Flag = 1;

			//TAB SELECTION
			{
				//AIMBOT
				if (MouseX >= AimbotTab.X && MouseX <= AimbotTab.X + AimbotTab.Lungo)
					if (MouseY >= AimbotTab.Y && MouseY <= AimbotTab.Y + AimbotTab.Alto)
						iMenuIndex = 0;

				//ESP 3D
				if (MouseX >= Esp3D.X && MouseX <= Esp3D.X + Esp3D.Lungo)
					if (MouseY >= Esp3D.Y && MouseY <= Esp3D.Y + Esp3D.Alto)
						iMenuIndex = 1;

				//ESP 2D
				if (MouseX >= Esp2D.X && MouseX <= Esp2D.X + Esp2D.Lungo)
					if (MouseY >= Esp2D.Y && MouseY <= Esp2D.Y + Esp2D.Alto)
						iMenuIndex = 2;

				//PLAYER
				if (MouseX >= Player.X && MouseX <= Player.X + Player.Lungo)
					if (MouseY >= Player.Y && MouseY <= Player.Y + Player.Alto)
						iMenuIndex = 3;

				//SPECIAL
				if (MouseX >= Special.X && MouseX <= Special.X + Special.Lungo)
					if (MouseY >= Special.Y && MouseY <= Special.Y + Special.Alto)
						iMenuIndex = 4;

				//SETTINGS
				if (MouseX >= Settings.X && MouseX <= Settings.X + Settings.Lungo)
					if (MouseY >= Settings.Y && MouseY <= Settings.Y + Settings.Alto)
						iMenuIndex = 5;
			}

			//HACK SELECTION - Aimbot TAB
			if (iMenuIndex == 0) {
				//Checkbox ONLY
				{
					int PixelX1 = 437;
					int PixelX2 = 453;
					//Enable Aim
					{
						int PixelY1 = 49 + (20 * 0);
						int PixelY2 = 65 + (20 * 0);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bEnableAim = !bEnableAim;
					}

					//Auto Aim
					{
						int PixelY1 = 49 + (20 * 7);
						int PixelY2 = 65 + (20 * 7);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bAutoFire = !bAutoFire;
					}

					//Silent Aim
					{
						int PixelY1 = 49 + (20 * 9);
						int PixelY2 = 65 + (20 * 9);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bSilentAim = !bSilentAim;
					}

					//Smart Accuracy
					{
						int PixelY1 = 49 + (20 * 10);
						int PixelY2 = 65 + (20 * 10);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bSmartAccuracy = !bSmartAccuracy;
					}

					//Hard Lock
					{
						int PixelY1 = 49 + (20 * 11);
						int PixelY2 = 65 + (20 * 11);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bHardLock = !bHardLock;
					}
				}
				//TEXT BETWEEN TWO CHECKBOX
				{
					int PixelX1 = 437;
					int PixelX11 = 453;
					int PixelX2 = 351;
					int PixelX22 = 367;

					//AIM KEY
					{
						int PixelY1 = 49 + (20 * 1);
						int PixelY2 = 65 + (20 * 1);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iAimKey > 0)
									iAimKey--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iAimKey < 4)
									iAimKey++;
					}

					//AIM BY
					{
						int PixelY1 = 49 + (20 * 2);
						int PixelY2 = 65 + (20 * 2);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iAimBy > 0)
									iAimBy--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iAimBy < 2)
									iAimBy++;
					}

					//AIM POSITION
					{
						int PixelY1 = 49 + (20 * 5);
						int PixelY2 = 65 + (20 * 5);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iAimPosition > 0)
									iAimPosition--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iAimPosition < 3)
									iAimPosition++;
					}
				}
				//SLIDE BOX
				{
					//FOV Angle
					{
						int PixelY1 = 48 + (20 * 3);
						int PixelY2 = 60 + (20 * 3);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 3;
								int percentage = (150 / 7);
								for (int i = 1; i < 9; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iFovAngle = (i - 1);
								}
							}
					}

					//HP LIMIT
					{
						int PixelY1 = 48 + (20 * 4);
						int PixelY2 = 60 + (20 * 4);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 4;
								int percentage = (150 / 4);
								for (int i = 1; i < 6; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iHPLimit = (i - 1);
								}
							}
					}

					//BONE REFRESH TIME
					{
						int PixelY1 = 48 + (20 * 6);
						int PixelY2 = 60 + (20 * 6);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 6;
								int percentage = (150 / 5);
								for (int i = 1; i < 7; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iBoneRefreshTime = (i - 1);
								}
							}
					}

					//SMOOTH AIM
					{
						int PixelY1 = 48 + (20 * 8);
						int PixelY2 = 60 + (20 * 8);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 8;
								int percentage = (150 / 5);
								for (int i = 1; i < 7; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iSmoothAim = (i - 1);
								}
							}
					}
				}
			}
			//HACK SELECTION - Esp3D TAB
			if (iMenuIndex == 1) {
				//Checkbox ONLY
				{
					int PixelX1 = 437;
					int PixelX2 = 453;

					//Name ESP
					{
						int PixelY1 = 49 + (20 * 1);
						int PixelY2 = 65 + (20 * 1);

						if (MouseX > PixelX1 && MouseX < PixelX2)
							if (MouseY > PixelY1 && MouseY < PixelY2)
								bNameEsp = !bNameEsp;
					}

					//Distance ESP
					{
						int PixelY1 = 49 + (20 * 2);
						int PixelY2 = 65 + (20 * 2);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bDistanceEsp = !bDistanceEsp;
					}

					//Health ESP
					{
						int PixelY1 = 49 + (20 * 3);
						int PixelY2 = 65 + (20 * 3);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bHealthEsp = !bHealthEsp;
					}

					//Bone ESP
					{
						int PixelY1 = 49 + (20 * 4);
						int PixelY2 = 65 + (20 * 4);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bBoneEsp = !bBoneEsp;
					}

					//HEAD CIRCLE ESP
					{
						int PixelY1 = 49 + (20 * 5);
						int PixelY2 = 65 + (20 * 5);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bHeadCircle = !bHeadCircle;
					}

					//Laser ESP
					{
						int PixelY1 = 49 + (20 * 7);
						int PixelY2 = 65 + (20 * 7);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bLaserEsp = !bLaserEsp;
					}
					
					//Zombie & Alien ESP
					{
						int PixelY1 = 49 + (20 * 8);
						int PixelY2 = 65 + (20 * 8);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								AlienZombie = !AlienZombie;
					}

					//Snap Lines
					{
						int PixelY1 = 49 + (20 * 9);
						int PixelY2 = 65 + (20 * 9);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bSnapLines = !bSnapLines;
					}

					//Grenade ESP
					{
						int PixelY1 = 49 + (20 * 10);
						int PixelY2 = 65 + (20 * 10);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bGrenadeEsp = !bGrenadeEsp;
					}

					//I'm Dead ESP
					{
						int PixelY1 = 49 + (20 * 11);
						int PixelY2 = 65 + (20 * 11);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bDeadVisible = !bDeadVisible;
					}

					//Show Stats
					{
						int PixelY1 = 49 + (20 * 12);
						int PixelY2 = 65 + (20 * 12);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bShowStats = !bShowStats;
					}
				}
				//TEXT BETWEEN TWO CHECKBOX
				{
					int PixelX1 = 437;
					int PixelX11 = 453;
					int PixelX2 = 351;
					int PixelX22 = 367;

					//ENABLE ESP
					{
						int PixelY1 = 49 + (20 * 0);
						int PixelY2 = 65 + (20 * 0);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnableEsp > 0)
									iEnableEsp--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnableEsp < 2)
									iEnableEsp++;
					}

					//BOUNDING BOX
					{
						int PixelY1 = 49 + (20 * 6);
						int PixelY2 = 65 + (20 * 6);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iBoundingBox > 0)
									iBoundingBox--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iBoundingBox < 2)
									iBoundingBox++;
					}

					//ENEMY VISIBLE
					{
						int PixelY1 = 49 + (20 * 13);
						int PixelY2 = 65 + (20 * 13);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnemyVis > 0)
									iEnemyVis--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnemyVis < 2)
									iEnemyVis++;
					}

					//ENEMY INVISIBLE
					{
						int PixelY1 = 49 + (20 * 14);
						int PixelY2 = 65 + (20 * 14);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnemyInv > 0)
									iEnemyInv--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnemyInv < 2)
									iEnemyInv++;
					}

					//TEAM VISIBLE
					{
						int PixelY1 = 49 + (20 * 15);
						int PixelY2 = 65 + (20 * 15);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iTeamVis > 0)
									iTeamVis--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iTeamVis < 2)
									iTeamVis++;
					}

					//TEAM INVISIBLE
					{
						int PixelY1 = 49 + (20 * 16);
						int PixelY2 = 65 + (20 * 16);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iTeamInv > 0)
									iTeamInv--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iTeamInv < 2)
									iTeamInv++;
					}
				}
			}
			//HACK SELECTION - Esp2D TAB
			if (iMenuIndex == 2) {
				//Checkbox ONLY
				{ //NO CHECKBOXES
				}
				//TEXT BETWEEN TWO CHECKBOX
				{
					int PixelX1 = 437;
					int PixelX11 = 453;
					int PixelX2 = 351;
					int PixelX22 = 367;

					//ENEMY RADAR
					{
						int PixelY1 = 49 + (20 * 0);
						int PixelY2 = 65 + (20 * 0);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnemyRadar > 0)
									iEnemyRadar--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnemyRadar < 1)
									iEnemyRadar++;
					}

					//ENEMY COLOR
					{
						int PixelY1 = 49 + (20 * 1);
						int PixelY2 = 65 + (20 * 1);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnemyColor > 0)
									iEnemyColor--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnemyColor < 2)
									iEnemyColor++;
					}

					//TEAM COLOR
					{
						int PixelY1 = 49 + (20 * 2);
						int PixelY2 = 65 + (20 * 2);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iTeamColor > 0)
									iTeamColor--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iTeamColor < 2)
									iTeamColor++;
					}

					//BORDER COLOR
					{
						int PixelY1 = 49 + (20 * 3);
						int PixelY2 = 65 + (20 * 3);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iBorderColor > 0)
									iBorderColor--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iBorderColor < 3)
									iBorderColor++;
					}

					//QUADRANT COLOR
					{
						int PixelY1 = 49 + (20 * 4);
						int PixelY2 = 65 + (20 * 4);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iQuadrantColor > 0)
									iQuadrantColor--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iQuadrantColor < 4)
									iQuadrantColor++;
					}

					//BACKGROUND COLOR
					{
						int PixelY1 = 49 + (20 * 5);
						int PixelY2 = 65 + (20 * 5);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iBackgroundColor > 0)
									iBackgroundColor--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iBackgroundColor < 4)
									iBackgroundColor++;
					}

					//MOVE RADAR
					{
						int PixelY1 = 49 + (20 * 9);
						int PixelY2 = 65 + (20 * 9);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iMoveRadar > 0)
									iMoveRadar--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iMoveRadar < 1)
									iMoveRadar++;
					}
				}
				//SLIDEBOX
				{
					//BACKGROUND OPACITY
					{
						int PixelY1 = 48 + (20 * 6);
						int PixelY2 = 60 + (20 * 6);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 6;
								double Max = 255;
								double percentage = (150 / Max);
								for (int i = 1; i < 257; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iBackgroundOpacity = (i - 1);
								}
							}
					}
					//PLAYER RADIUS
					{
						int PixelY1 = 48 + (20 * 7);
						int PixelY2 = 60 + (20 * 7);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 7;
								double Max = 175;
								double percentage = (150 / Max);
								for (int i = 1; i < 177; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iPlayerRadius = (i - 1);
								}
							}
					}
					//RADAR SIZE
					{
						int PixelY1 = 48 + (20 * 8);
						int PixelY2 = 60 + (20 * 8);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 8;
								double Max = 350;
								double percentage = (150 / Max);
								for (int i = 1; i < 351; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iRadarSize = (i - 1);
								}
							}
					}
				}
			}
			//HACK SELECTION - Player TAB
			if (iMenuIndex == 3) {
				//Checkbox ONLY
				{
					int PixelX1 = 437;
					int PixelX2 = 453;

					//Throw Weapon
					{
						int PixelY1 = 49 + (20 * 3);
						int PixelY2 = 65 + (20 * 3);

						if (MouseX >= 437 && MouseX <= 453)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bDropWeapon = !bDropWeapon;
					}

					//Full Auto Weapon
					{
						int PixelY1 = 49 + (20 * 4);
						int PixelY2 = 65 + (20 * 4);

						if (MouseX >= 437 && MouseX <= 453)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bFullAutoWeapon = !bFullAutoWeapon;
					}
					
					//Range Hack
					{
						int PixelY1 = 49 + (20 * 5);
						int PixelY2 = 65 + (20 * 5);

						if (MouseX >= 437 && MouseX <= 453)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bRangeHack = !bRangeHack;
					}

					//No Recoil
					{
						int PixelY1 = 49 + (20 * 7);
						int PixelY2 = 65 + (20 * 7);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (!((bEnableAim || bSilentAim) && bAutoFire))
									bNoRecoil = !bNoRecoil;
					}

					//No Spread
					{
						int PixelY1 = 49 + (20 * 8);
						int PixelY2 = 65 + (20 * 8);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bNoSpread = !bNoSpread;
					}

					//No Flash
					{
						int PixelY1 = 49 + (20 * 11);
						int PixelY2 = 65 + (20 * 11);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bNoFlash = !bNoFlash;
					}

					//No Smoke
					{
						int PixelY1 = 49 + (20 * 12);
						int PixelY2 = 65 + (20 * 12);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bNoSmoke = !bNoSmoke;
					}

					//No Respawn Cost
					{
						int PixelY1 = 49 + (20 * 13);
						int PixelY2 = 65 + (20 * 13);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bNoRespawnCost = !bNoRespawnCost;
					}

					//No Bullet Gravity
					{
						int PixelY1 = 49 + (20 * 16);
						int PixelY2 = 65 + (20 * 16);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bNoBulletGravity = !bNoBulletGravity;
					}

					//Auto Quick Scope
					{
						int PixelY1 = 49 + (20 * 17);
						int PixelY2 = 65 + (20 * 17);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bAutoSwitch = !bAutoSwitch;
					}
				}
				//TEXT BETWEEN TWO CHECKBOX
				{
					int PixelX1 = 437;
					int PixelX11 = 453;
					int PixelX2 = 351;
					int PixelX22 = 367;

					//CROSSHAIR
					{
						int PixelY1 = 49 + (20 * 0);
						int PixelY2 = 65 + (20 * 0);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iCrosshair > 0)
									iCrosshair--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iCrosshair < 1)
									iCrosshair++;
					}

					//UNLIMITED AMMO
					{
						int PixelY1 = 49 + (20 * 2);
						int PixelY2 = 65 + (20 * 2);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iUnlAmmo > 0)
								{
									iUnlAmmo--;
								}

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iUnlAmmo < 1)
								{
									iUnlAmmo++;
								}
					}

					//BURST FIRE
					{
						int PixelY1 = 49 + (20 * 6);
						int PixelY2 = 65 + (20 * 6);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iBurstFire > 0)
									iBurstFire--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iBurstFire < 1)
									iBurstFire++;
					}

					//TRIGGERBGOT
					{
						int PixelY1 = 49 + (20 * 9);
						int PixelY2 = 65 + (20 * 9);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iTriggerbot > 0)
									iTriggerbot--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iTriggerbot < 1)
									iTriggerbot++;
					}

					//NAME STEALER
					{
						int PixelY1 = 49 + (20 * 10);
						int PixelY2 = 65 + (20 * 10);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iNameStealer > 0)
								{
									iNameStealer--;
									FistSteal = true;
								}

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iNameStealer < 3)
								{
									iNameStealer++;
									FistSteal = true;
								}
					}

					//AUTO RESPAWN
					{
						int PixelY1 = 49 + (20 * 14);
						int PixelY2 = 65 + (20 * 14);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iAutoRespawn > 0)
									iAutoRespawn--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iAutoRespawn < 2)
									iAutoRespawn++;
					}
				}
				//SLIDEBOX
				{
					//CROSSHAIR SIZE
					{
						int PixelY1 = 48 + (20 * 1);
						int PixelY2 = 60 + (20 * 1);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 1;
								double Max = 95;
								double percentage = (150 / Max);
								for (int i = 1; i < 97; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iCrosshairSize = (i - 1);
								}
							}
					}
					
					//RESPAWN ON HP
					{
						int PixelY1 = 48 + (20 * 15);
						int PixelY2 = 60 + (20 * 15);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 15;
								double Max = 89;
								double percentage = (150 / Max);
								for (int i = 1; i < 91; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iHpRespawn = (i - 1);
								}
							}
					}
				}
			}
			//HACK SELECTION - Special TAB
			if (iMenuIndex == 4) {
				//CHECKBOX ONLY
				{
					int PixelX1 = 437;
					int PixelX2 = 453;

					//Shot Through Wall
					{
						int PixelY1 = 49 + (20 * 5);
						int PixelY2 = 65 + (20 * 5);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bShotThroughWall = !bShotThroughWall;
					}

					//Hero MP
					{
						int PixelY1 = 49 + (20 * 7);
						int PixelY2 = 65 + (20 * 7);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bHeroMP = !bHeroMP;
					}

					//Hero DP
					{
						int PixelY1 = 49 + (20 * 8);
						int PixelY2 = 65 + (20 * 8);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bHeroDP = !bHeroDP;
					}

					//Hero AP
					{
						int PixelY1 = 49 + (20 * 9);
						int PixelY2 = 65 + (20 * 9);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bHeroAP = !bHeroAP;
					}

					//Hero EXP
					{
						int PixelY1 = 49 + (20 * 10);
						int PixelY2 = 65 + (20 * 10);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bHeroEXP = !bHeroEXP;
					}

					//OPK Hero
					{
						int PixelY1 = 49 + (20 * 13);
						int PixelY2 = 65 + (20 * 13);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bOpkHero = !bOpkHero;
					}
				}
				//TEXT BETWEEN TWO CHECKBOX
				{
					int PixelX1 = 437;
					int PixelX11 = 453;
					int PixelX2 = 351;
					int PixelX22 = 367;

					//ENABLE OPK
					{
						int PixelY1 = 49 + (20 * 0);
						int PixelY2 = 65 + (20 * 0);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnableOpk > 0)
									iEnableOpk--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iEnableOpk < 1)
									iEnableOpk++;
					}

					//PICK BEST PLAYER BY
					{
						int PixelY1 = 49 + (20 * 1);
						int PixelY2 = 65 + (20 * 1);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iPickBestPlayer > 0)
									iPickBestPlayer--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iPickBestPlayer < 2)
									iPickBestPlayer++;
					}

					//OPK KEY
					{
						int PixelY1 = 49 + (20 * 2);
						int PixelY2 = 65 + (20 * 2);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iOpkKey > 0)
									iOpkKey--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iOpkKey < 1)
									iOpkKey++;
					}

					//OPK DAMAGE TYPE
					{
						int PixelY1 = 49 + (20 * 3);
						int PixelY2 = 65 + (20 * 3);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iOpkDamage > 0)
									iOpkDamage--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iOpkDamage < 3)
									iOpkDamage++;
					}

					//OPK BONE
					{
						int PixelY1 = 49 + (20 * 4);
						int PixelY2 = 65 + (20 * 4);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iOpkBone > 0)
									iOpkBone--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iOpkBone < 2)
									iOpkBone++;
					}

					//HERO POINTS KEY
					{
						int PixelY1 = 49 + (20 * 12);
						int PixelY2 = 65 + (20 * 12);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iHeroPointsKey > 0)
									iHeroPointsKey--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iHeroPointsKey < 1)
									iHeroPointsKey++;
					}

					//VIRTUAL JUMP
					{
						int PixelY1 = 49 + (20 * 15);
						int PixelY2 = 65 + (20 * 15);

						if (MouseX >= PixelX2 && MouseX <= PixelX22)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iVirtualJump > 0)
									iVirtualJump--;

						if (MouseX >= PixelX1 && MouseX <= PixelX11)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								if (iVirtualJump < 1)
									iVirtualJump++;
					}
				}

				//SLIDE BOX
				{
					//BULLETS PER SHOT
					{
						int PixelY1 = 48 + (20 * 6);
						int PixelY2 = 60 + (20 * 6);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 6;
								double Max = 9;
								double percentage = (150 / Max);
								for (int i = 1; i < 11; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iBulletPerShot = (i - 1);
								}
							}
					}

					//HERO POINTS
					{
						int PixelY1 = 48 + (20 * 11);
						int PixelY2 = 60 + (20 * 11);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 11;
								double Max = 99;
								double percentage = (150 / Max);
								for (int i = 1; i < 101; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iHeroPoints = (i - 1);
								}
							}
					}

					//VIRTUAL JUMP VALUE
					{
						int PixelY1 = 48 + (20 * 14);
						int PixelY2 = 60 + (20 * 14);

						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								FlagSlideBox = 1;
								CurrentClickedIdx = 14;
								double Max = 200;
								double percentage = (150 / Max);
								for (int i = 1; i < 202; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iVirtualJumpValue = (i - 1);
								}
							}
					}
				}
			}
			//HACK SELECTION - Settings TAB
			if (iMenuIndex == 5) {
				//CHECKBOX ONLY
				{
					int PixelX1 = 437;
					int PixelX2 = 453;

					//Show FPS
					{
						int PixelY1 = 49 + (20 * 0);
						int PixelY2 = 65 + (20 * 0);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bFPS = !bFPS;
					}

					//Show Watermark
					{
						int PixelY1 = 49 + (20 * 1);
						int PixelY2 = 65 + (20 * 1);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bWatermark = !bWatermark;
					}

					//MAC Spoof
					{
						int PixelY1 = 49 + (20 * 2);
						int PixelY2 = 65 + (20 * 2);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bMACSpoof = !bMACSpoof;
					}

					//Name 1
					{
						int PixelY1 = 49 + (20 * 3);
						int PixelY2 = 65 + (20 * 3);

						if (MouseX >= 304 && MouseX <= 454)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								Name1isActive = true;
								Name2isActive = false;
							}
							else Name1isActive = false;
						else Name1isActive = false;
					}

					//Name 2
					{
						int PixelY1 = 49 + (20 * 4);
						int PixelY2 = 65 + (20 * 4);

						if (MouseX >= 304 && MouseX <= 454)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
							{
								Name2isActive = true;
								Name1isActive = false;
							}
							else Name2isActive = false;
						else Name2isActive = false;
					}

					//Restore Default Settings
					{
						int PixelY1 = 49 + (20 * 5);
						int PixelY2 = 65 + (20 * 5);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bRestoreDefaultSettings = !bRestoreDefaultSettings;
					}

					//Save Settings
					{
						int PixelY1 = 49 + (20 * 6);
						int PixelY2 = 65 + (20 * 6);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bSaveSettings = !bSaveSettings;
					}

					//Load Settings
					{
						int PixelY1 = 49 + (20 * 7);
						int PixelY2 = 65 + (20 * 7);

						if (MouseX >= PixelX1 && MouseX <= PixelX2)
							if (MouseY >= PixelY1 && MouseY <= PixelY2)
								bLoadSettings = !bLoadSettings;
					}
				}
			}
		}

		if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) && (FlagSlideBox == 1))
		{
			if (CurrentClickedIdx != 0)
			{
				//HACK SELECTION - Aimbot TAB
				if (iMenuIndex == 0) {

					//FOV ANGLE
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 3)
							{
								int percentage = (150 / 7);
								for (int i = 1; i < 9; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iFovAngle = (i - 1);
								}
							}
					}

					//HP LIMIT
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 4)
							{
								int percentage = (150 / 4);
								for (int i = 1; i < 6; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iHPLimit = (i - 1);
								}
							}
					}

					//BONE REFRESH TIME
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 6)
							{
								int percentage = (150 / 5);
								for (int i = 1; i < 7; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iBoneRefreshTime = (i - 1);
								}
							}
					}

					//SMOOTH AIM
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 8)
							{
								int percentage = (150 / 5);
								for (int i = 1; i < 7; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iSmoothAim = (i - 1);
								}
							}
					}
				}
				//HACK SELECTION - Esp3D TAB
				if (iMenuIndex == 1) {
				}
				//HACK SELECTION - Esp2D TAB
				if (iMenuIndex == 2) {
					//BACKGROUND OPACITY
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 6)
							{
								double Max = 255;
								double percentage = (150 / Max);
								for (int i = 1; i < 257; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iBackgroundOpacity = (i - 1);
								}
							}
					}
					//PLAYER RADIUS
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 7)
							{
								double Max = 175;
								double percentage = (150 / Max);
								for (int i = 1; i < 177; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iPlayerRadius = (i - 1);
								}
							}
					}
					//RADAR SIZE
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 8)
							{
								double Max = 350;
								double percentage = (150 / Max);
								for (int i = 1; i < 351; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iRadarSize = (i - 1);
								}
							}
					}
				}
				//HACK SELECTION - Player TAB
				if (iMenuIndex == 3) {
					//CROSSHAIR SIZE
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 1)
							{
								double Max = 95;
								double percentage = (150 / Max);
								for (int i = 1; i < 97; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iCrosshairSize = (i - 1);
								}
							}
					}

					//RESPAWN ON HP
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 15)
							{
								double Max = 89;
								double percentage = (150 / Max);
								for (int i = 1; i < 91; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iHpRespawn = (i - 1);
								}
							}
					}
				}
				//HACK SELECTION - Special TAB
				if (iMenuIndex == 4) {
					//BULLETS PER SHOT
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 6)
							{
								double Max = 9;
								double percentage = (150 / Max);
								for (int i = 1; i < 11; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iBulletPerShot = (i - 1);
								}
							}
					}

					//HERO POINTS
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 11)
							{
								double Max = 99;
								double percentage = (150 / Max);
								for (int i = 1; i < 101; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iHeroPoints = (i - 1);
								}
							}
					}

					//VIRTUAL JUMP VALUE
					{
						if (MouseX >= SlideBoxMin && MouseX <= SlideBoxMax)
							if (CurrentClickedIdx == 14)
							{
								double Max = 200;
								double percentage = (150 / Max);
								for (int i = 1; i < 202; i++)
								{
									if (MouseX >= SlideBoxMin + (percentage * (i - 1)) - (percentage / 2) && MouseX <= SlideBoxMin + (percentage * i) - (percentage / 2)) iVirtualJumpValue = (i - 1);
								}
							}
					}
				}
			}
		}

		if (GetAsyncKeyState(VK_LBUTTON) == 0)
		{
			Flag = 0;
			FlagSlideBox = 0;
			CurrentClickedIdx = 0;
		}
	}

	if ((GetAsyncKeyState(VK_INSERT) & 0x8000) && (FlagMenu == 0))
	{
		FlagMenu = 1;
		bShowMenu = !bShowMenu;
	}
	else if (GetAsyncKeyState(VK_INSERT) == 0) FlagMenu = 0;
}

UObject* GetInstanceOf(UClass* Class)
{
	static UObject* ObjectInstance;

	ObjectInstance = NULL;

	for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
	{
		UObject* CheckObject = (*UObject::GObjObjects())(i);

		if (CheckObject && CheckObject->IsA(Class))
		{
			if (!strstr(CheckObject->GetFullName(), "Default"))
				ObjectInstance = CheckObject;
		}
	}

	return ObjectInstance;
};

FVector inline Vector_Sub(FVector v1, const FVector& v2)
{
	v1.X -= v2.X;
	v1.Y -= v2.Y;
	v1.Z -= v2.Z;

	return v1;
}

FRotator inline Rotator_Sub(FRotator r1, const FRotator& r2)
{
	r1.Pitch -= r2.Pitch;
	r1.Yaw -= r2.Yaw;
	r1.Roll -= r2.Roll;

	return r1;
}

FRotator inline Rotator_Sum(FRotator r1, const FRotator& r2)
{
	r1.Pitch += r2.Pitch;
	r1.Yaw += r2.Yaw;
	r1.Roll += r2.Roll;

	return r1;
}

FRotator inline VectorToRotation(const FVector& vector)
{
	FRotator rotation;

	rotation.Pitch = PlayerController->Atan2(vector.Z, PlayerController->Sqrt((vector.X * vector.X) + (vector.Y * vector.Y))) * CONST_RadToUnrRot;
	rotation.Yaw = PlayerController->Atan2(vector.Y, vector.X) * CONST_RadToUnrRot;
	rotation.Roll = 0;

	return rotation;
}

FVector cameraLocation;
FRotator cameraRotation;

FVector WorldToScreen(UCanvas *canvas, const FVector& location)
{
	FVector output,
		axisX, axisY, axisZ, delta, transformed;

	canvas->GetAxes(cameraRotation, &axisX, &axisY, &axisZ);

	delta = PlayerController->Subtract_VectorVector(location, cameraLocation);

	transformed.X = PlayerController->Dot_VectorVector(delta, axisY);
	transformed.Y = PlayerController->Dot_VectorVector(delta, axisZ);
	transformed.Z = PlayerController->Dot_VectorVector(delta, axisX);

	if (transformed.Z < 1)
		transformed.Z = 1;

	float FOVAngle = PlayerController->PlayerCamera->GetFOVAngle();

	output.X = (canvas->ClipX / 2) + transformed.X * ((canvas->ClipX / 2) / PlayerController->Tan(FOVAngle * CONST_Pi / 360)) / transformed.Z;
	output.Y = (canvas->ClipY / 2) + -transformed.Y * ((canvas->ClipX / 2) / PlayerController->Tan(FOVAngle * CONST_Pi / 360)) / transformed.Z;

	return output;
}

void inline Draw2DLine(UCanvas *canvas, APawn *pawn, const FColor& color)
{
	FVector location = pawn->Location;
	location = WorldToScreen(canvas, location);

	canvas->Draw2DLine(canvas->ClipX / 2, canvas->ClipY, location.X, location.Y, color);
}

void DrawString(UCanvas *canvas, float curX, float curY, const FString& text, const FColor& color, float scaleX = 1, float scaleY = 1)
{
	float oldCurX;
	float oldCurY;
	FColor oldColor;

	oldCurX = canvas->CurX;
	oldCurY = canvas->CurY;
	oldColor = canvas->DrawColor;

	canvas->CurX = curX;
	canvas->CurY = curY;
	canvas->DrawColor = color;

	canvas->DrawText(text, false, scaleX, scaleY, NULL);

	canvas->CurX = oldCurX;
	canvas->CurY = oldCurY;
	canvas->DrawColor = oldColor;
}

float StrLen(UCanvas* canvas, const FString& string)
{
	float XL, YL;
	canvas->StrLen(string, &XL, &YL);
	return XL;
}

float StrLenY(UCanvas* canvas, const FString& string)
{
	float XL, YL;
	canvas->StrLen(string, &XL, &YL);
	return YL;
}

bool inline IsVisible(const FVector& end, APawn *pawn)
{
	FVector extent = { 0, 0, 0 };
	FVector hitLocation;
	FVector hitNormal;
	FTraceHitInfo hitInfo;

	AActor *actor = PlayerController->Trace(end, cameraLocation, true, extent, 0, &hitLocation, &hitNormal, &hitInfo);

	return (pawn == actor);
}

bool IsTargetVisible(APawn *target)
{
	if (!target->Mesh)
		return false;

	if (PlayerController->CanSee(target))
		return true;

	FVector boneLocation;

	char table[] = { 14, 19, 40, 61, 65 };

	for (int i = 0; i < 5; i++)
	{
		boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(table[i]), 0);

		if (IsVisible(boneLocation, target))
			return true;
	}

	return false;
}

bool inline IsSameTeam(APawn *pawn, APawn *target)
{
	return PlayerController->WorldInfo
		&& PlayerController->WorldInfo->GRI
		&& PlayerController->WorldInfo->GRI->OnSameTeam(pawn, target);
}

float inline Get3DDistance(AActor *pawn, AActor *target)
{
	return sqrt
	(pow(target->Location.X - pawn->Location.X, 2)
		+ pow(target->Location.Y - pawn->Location.Y, 2)
		+ pow(target->Location.Z - pawn->Location.Z, 2));
}

void inline DrawBorderText(UCanvas *canvas, FString Text, int CoordX, int CoordY, FColor Color)
{
	//BLACK BORDER
	{
		canvas->SetPos(CoordX + 1, CoordY + 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX - 1, CoordY + 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX + 1, CoordY - 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX - 1, CoordY - 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);
		
		canvas->SetPos(CoordX - 1, CoordY, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX + 1, CoordY, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX, CoordY - 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX, CoordY + 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);
	}

	canvas->SetPos(CoordX, CoordY, 0);
	canvas->DrawColor = Color;
	canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);
}

void CheckOutsideScreen(UCanvas* canvas, wchar_t* string, int CoordX, int CoordY, const FColor& color)
{
	if (StrLen(canvas, string) + CoordX < canvas->ClipX)
	{
		DrawBorderText(canvas, string, CoordX, CoordY, color);
		return;
	}
	else
	{
		wchar_t buffer[1024];

		for (int i = 0; i < 1024; i++)
		{
			if (wcslen(string) - 1 >= 1)
				string[wcslen(string) - 1] = '\0';
			else return;

			if (StrLen(canvas, string) + CoordX < canvas->ClipX)
			{
				DrawBorderText(canvas, string, CoordX, CoordY, color);
				return;
			}
		}
	}

	return;
}

void inline DrawMenuOption(UCanvas *canvas, FString Text, int Index, int Option, FString SecondText = L"(null)", double SlideIndex = 0, double Lenght = 0)
{
	const int PixelX = 152;
	int PixelY = 47 + (20 * Index);

	canvas->SetPos(PixelX, PixelY, 0);
	canvas->DrawColor = White;
	canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

	wchar_t buffer[1024];
	swprintf(buffer, 1024, L"%s", SecondText);

	//ONLY CHECKBOX
	if (Option == 0)
	{
		//CHECKBOX
		{
			int PixelX2 = 437;
			int PixelY2 = 49 + (20 * Index);

			canvas->SetPos(PixelX2, PixelY2, 0);
			canvas->DrawColor = Red;
			canvas->DrawBox(16, 16);
		}
	}
	//2 CHECKBOXS, TEXT BETWEEN
	else if (Option == 1)
	{
		//CHECKBOX RIPIENO
		{
			int PixelX2 = 437;
			int PixelY2 = 49 + (20 * Index);

			canvas->SetPos(PixelX2, PixelY2, 0);
			canvas->DrawColor = Red;
			canvas->DrawBox(16, 16);

			canvas->SetPos(PixelX2 + 3, PixelY2 + 3, 0);
			canvas->DrawColor = Red;
			canvas->DrawRect(10, 10, canvas->DefaultTexture);

			canvas->SetPos(PixelX2 + 4, PixelY2 - 1, 0);
			canvas->DrawColor = White;
			canvas->DrawText(L">", false, 1.0f, 1.0f, NULL);
		}

		//Text between 2 box draw
		{
			if (buffer != L"(null)")
			{
				float Lenght = StrLen(canvas, SecondText);

				int PixelX3 = 397 - (Lenght / 2);
				int PixelY3 = 49 + (20 * Index);

				canvas->SetPos(PixelX3 + 5, PixelY3, 0);
				canvas->DrawColor = White;
				canvas->DrawText(SecondText, false, 1.0f, 1.0f, NULL);
			}
		}

		//CHECKBOX RIPIENO
		{
			int PixelX3 = 351;
			int PixelY3 = 49 + (20 * Index);

			canvas->SetPos(PixelX3, PixelY3, 0);
			canvas->DrawColor = Red;
			canvas->DrawBox(16, 16);

			canvas->SetPos(PixelX3 + 3, PixelY3 + 3, 0);
			canvas->DrawColor = Red;
			canvas->DrawRect(10, 10, canvas->DefaultTexture);

			canvas->SetPos(PixelX3 + 4, PixelY3 - 1, 0);
			canvas->DrawColor = White;
			canvas->DrawText(L"<", false, 1.0f, 1.0f, NULL);
		}
	}
	//SLIDE
	else if (Option == 2)
	{
		int PixelY2 = 54 + (20 * Index);
		canvas->SetPos(304, PixelY2, 0);
		canvas->DrawColor = Red;
		canvas->DrawRect(150, 2, canvas->DefaultTexture);

		canvas->SetPos(301 + ((150 / (Lenght)) * SlideIndex), PixelY2 - 6, 0);
		canvas->DrawColor = White;
		canvas->DrawRect(6, 12, canvas->DefaultTexture);


		int HalfX = 383 - (StrLen(canvas, SecondText) / 2);
		canvas->DrawColor = Green;
		canvas->SetPos(HalfX, PixelY2 - 7, 0);
		canvas->DrawText(SecondText, false, 1.0f, 1.0f, NULL);
	}
	//TEXTBOX
	else if (Option == 3)
	{
		int PixelY2 = 47 + (20 * Index);
		canvas->SetPos(304, PixelY2, 0);
		canvas->DrawColor = Red;
		canvas->DrawBox(150, (StrLenY(canvas, L"|") + 2));
		canvas->SetPos(305, PixelY2+1, 0);
		canvas->DrawColor = { 30,29,30,200 };
		canvas->DrawRect(148, (StrLenY(canvas, L"|")), canvas->DefaultTexture);
	}
}

void inline DrawEnabled(UCanvas* canvas, int Index, bool Left = true)
{
	//0 = RIGHT
	//1 = LEFT

	int PixelX;

	if (Left == false) PixelX = 440;
	else PixelX = 354;

	int PixelY = 52 + (20 * Index);

	canvas->SetPos(PixelX, PixelY, 0);
	canvas->DrawColor = Red;
	canvas->DrawRect(10, 10, canvas->DefaultTexture);
}

const wchar_t *getWC(const char *c)
{
	const size_t cSize = strlen(c) + 1;
	wchar_t* wc = new wchar_t[cSize];
	mbstowcs(wc, c, cSize);

	return wc;
}

void inline DrawMenu(UCanvas* canvas)
{
	//MENU'S BOXES - Done
	{
		//BACKGROUND
		{
			canvas->SetPos(10, 10, 175);
			canvas->DrawColor = { 30,29,30,175 };
			canvas->DrawRect(452, 401, canvas->DefaultTexture);
		}

		//RED BOX AROUND
		{
			canvas->SetPos(10, 10, 0);
			canvas->DrawColor = Red;
			canvas->DrawBox(452, 401);
		}

		canvas->Draw2DLine(10, 40, 462, 40, Red);
		canvas->Draw2DLine(10, 41, 462, 41, Red);

		canvas->Draw2DLine(141, 39, 141, 411, Red);
		canvas->Draw2DLine(142, 39, 142, 411, Red);

		//AIMBOT
		{
			canvas->SetPos(13, 42, 0);
			canvas->DrawBox(126, 27);
		}

		//ESP 3D
		{
			canvas->SetPos(13, 70, 0);
			canvas->DrawBox(126, 27);
		}

		//ESP 2D
		{
			canvas->SetPos(13, 98, 0);
			canvas->DrawBox(126, 27);
		}

		//PLAYER
		{
			canvas->SetPos(13, 126, 0);
			canvas->DrawBox(126, 27);
		}

		//SPECIAL
		{
			canvas->SetPos(13, 154, 0);
			canvas->DrawBox(126, 27);
		}

		//SETTINGS
		{
			canvas->SetPos(13, 182, 0);
			canvas->DrawBox(126, 27);
		}
		
		FString watermark(MenuDefin);

		if (MenuX == 0 || (StrLen(canvas, L"¤°.¸¸.·´¯`» | Hack by dano20zombie | «´¯`·.¸¸.°¤") / 2) > MenuX + 1 || (StrLen(canvas, L"¤°.¸¸.·´¯`» | Hack by dano20zombie | «´¯`·.¸¸.°¤") / 2) < MenuX - 1)
		{
			MenuX = (StrLen(canvas, L"¤°.¸¸.·´¯`» | Hack by dano20zombie | «´¯`·.¸¸.°¤") / 2);
			DrawString(canvas, 231 - MenuX, 20, L"¤°.¸¸.·´¯`» | Hack by dano20zombie | «´¯`·.¸¸.°¤", White);
		}
		else
			DrawString(canvas, 231 - MenuX, 20, L"¤°.¸¸.·´¯`» | Hack by dano20zombie | «´¯`·.¸¸.°¤", White);
	}

	//SELECTIONS DRAW - Done
	{
		if (iMenuIndex == 0)
		{
			canvas->SetPos(16, 45, 0);
			canvas->DrawColor = Red;
			canvas->DrawRect(120, 21, canvas->DefaultTexture);
		}
		if (iMenuIndex == 1)
		{
			canvas->SetPos(16, 73, 0);
			canvas->DrawColor = Red;
			canvas->DrawRect(120, 21, canvas->DefaultTexture);
		}
		if (iMenuIndex == 2)
		{
			canvas->SetPos(16, 101, 0);
			canvas->DrawColor = Red;
			canvas->DrawRect(120, 21, canvas->DefaultTexture);
		}
		if (iMenuIndex == 3)
		{
			canvas->SetPos(16, 129, 0);
			canvas->DrawColor = Red;
			canvas->DrawRect(120, 21, canvas->DefaultTexture);
		}
		if (iMenuIndex == 4)
		{
			canvas->SetPos(16, 157, 0);
			canvas->DrawColor = Red;
			canvas->DrawRect(120, 21, canvas->DefaultTexture);
		}
		if (iMenuIndex == 5)
		{
			canvas->SetPos(16, 185, 0);
			canvas->DrawColor = Red;
			canvas->DrawRect(120, 21, canvas->DefaultTexture);
		}
	}

	//TAB TEXT DRAW
	{
		FString aimbot(L"AIMBOT");
		DrawString(canvas, 42, 50, aimbot, White);

		FString esp3d(L"ESP 3D");
		DrawString(canvas, 44, 78, esp3d, White);

		FString esp2d(L"ESP 2D");
		DrawString(canvas, 44, 106, esp2d, White);

		FString player(L"PLAYER");
		DrawString(canvas, 43, 134, player, White);

		FString special(L"SPECIAL");
		DrawString(canvas, 40, 162, special, White);

		FString settings(L"SETTINGS");
		DrawString(canvas, 34, 190, settings, White);
	}

	//OPTIONS DRAW
	{
		///Option: 0 = (CHECKBOX)
		///        1 = (TEXT BETWEEN 2 CHECKBOXS)
		///        2 = (SLIDE)

		/// FOR SLIDE USE LENGHT = LENGHT OF ARRAY -1;

		//AIMBOT
		if (iMenuIndex == 0)
		{
			DrawMenuOption(canvas, L"Enable Aim", 0, 0);
			
			DrawMenuOption(canvas, L"Aim Key", 1, 1, wAimKey[iAimKey]);

			DrawMenuOption(canvas, L"Aim By", 2, 1, wAimBy[iAimBy]);

			DrawMenuOption(canvas, L"FOV Angle", 3, 2, wFovAngle[iFovAngle], iFovAngle, 7);

			DrawMenuOption(canvas, L"HP Limit", 4, 2, wHPLimit[iHPLimit], iHPLimit, 4);

			DrawMenuOption(canvas, L"Aim Position", 5, 1, wAimPosition[iAimPosition]);

			DrawMenuOption(canvas, L"Bone Refresh Time", 6, 2, wBoneRefreshTime[iBoneRefreshTime], iBoneRefreshTime, 5);

			DrawMenuOption(canvas, L"Auto Fire", 7, 0);

			DrawMenuOption(canvas, L"Smooth Aim", 8, 2, wSmoothAim[iSmoothAim], iSmoothAim, 5);

			DrawMenuOption(canvas, L"Silent Aim", 9, 0);

			DrawMenuOption(canvas, L"Smart Accuracy", 10, 0);

			DrawMenuOption(canvas, L"Hard Lock", 11, 0);
		}
		//ESP 3D
		else if (iMenuIndex == 1)
		{
			DrawMenuOption(canvas, L"Enable ESP", 0, 1, wEnableEsp[iEnableEsp]);
			DrawMenuOption(canvas, L"Name ESP", 1, 0);
			DrawMenuOption(canvas, L"Distance ESP", 2, 0);
			DrawMenuOption(canvas, L"Health ESP", 3, 0);
			DrawMenuOption(canvas, L"Bone ESP", 4, 0);
			DrawMenuOption(canvas, L"Head Circle ESP", 5, 0);
			DrawMenuOption(canvas, L"Bounding Box", 6, 1, wBoundingBox[iBoundingBox]);
			DrawMenuOption(canvas, L"Laser ESP", 7, 0);
			DrawMenuOption(canvas, L"Alien & Zombie ESP", 8, 0);
			DrawMenuOption(canvas, L"Snap Lines", 9, 0);
			DrawMenuOption(canvas, L"Grenade ESP", 10, 0);
			DrawMenuOption(canvas, L"I'm Dead ESP", 11, 0);
			DrawMenuOption(canvas, L"Show Player Stats", 12, 0);
			DrawMenuOption(canvas, L"Enemy Visible", 13, 1, wEnemyVis[iEnemyVis]);
			DrawMenuOption(canvas, L"Enemy Invisible", 14, 1, wEnemyInv[iEnemyInv]);
			DrawMenuOption(canvas, L"Team Visible", 15, 1, wTeamVis[iTeamVis]);
			DrawMenuOption(canvas, L"Team Invisible", 16, 1, wTeamInv[iTeamInv]);
		}
		//ESP 2D (Radar)
		else if (iMenuIndex == 2)
		{
			DrawMenuOption(canvas, L"Enable Radar", 0, 1, wEnemyRadar[iEnemyRadar]);
			DrawMenuOption(canvas, L"Enemy Color", 1, 1, wEnemyColor[iEnemyColor]);
			DrawMenuOption(canvas, L"Team Color", 2, 1, wTeamColor[iTeamColor]);
			DrawMenuOption(canvas, L"Border Color", 3, 1, wBorderColor[iBorderColor]);
			DrawMenuOption(canvas, L"Quadrant Color", 4, 1, wQuadrantColor[iQuadrantColor]);
			DrawMenuOption(canvas, L"Background Color", 5, 1, wBackgroundColor[iBackgroundColor]);
			DrawMenuOption(canvas, L"Background Opacity", 6, 2, wBackgroundOpacity[iBackgroundOpacity], iBackgroundOpacity, 255);
			DrawMenuOption(canvas, L"Radar Scale", 7, 2, wPlayerRadius[iPlayerRadius], iPlayerRadius, 175);
			DrawMenuOption(canvas, L"Radar Size", 8, 2, wRadarSize[iRadarSize], iRadarSize, 350);
			DrawMenuOption(canvas, L"Move Radar", 9, 1, wMoveRadar[iMoveRadar]);

			if (iMoveRadar == 1)
			{
				const int PixelX = 152;
				int PixelY = 47 + (20 * 10);

				canvas->SetPos(PixelX, PixelY, 0);
				canvas->DrawColor = Yellow;
				canvas->DrawText(L"PRESS LEFT MOUSE CLICK TO STOP MOVING!", false, 1.0f, 1.0f, NULL);
			}
		}
		//PLAYER
		else if (iMenuIndex == 3)
		{
			DrawMenuOption(canvas, L"CrossHair", 0, 1, wCrosshair[iCrosshair]);
			DrawMenuOption(canvas, L"CrossHair Size", 1, 2, wCrosshairSize[iCrosshairSize], iCrosshairSize, 95);
			DrawMenuOption(canvas, L"Unl.Ammo Mode", 2, 1, wUnlAmmo[iUnlAmmo]);
			DrawMenuOption(canvas, L"Always Throw Weapon on Death", 3, 0);
			DrawMenuOption(canvas, L"Full Weapon Auto", 4, 0);
			DrawMenuOption(canvas, L"Range Hack", 5, 0);
			DrawMenuOption(canvas, L"Burst Fire", 6, 1, wBurstFire[iBurstFire]);
			DrawMenuOption(canvas, L"No Recoil", 7, 0);
			DrawMenuOption(canvas, L"No Spread", 8, 0);
			DrawMenuOption(canvas, L"Triggerbot", 9, 1, wTriggerbot[iTriggerbot]);
			DrawMenuOption(canvas, L"Change Name", 10, 1, wNameStealer[iNameStealer]);
			DrawMenuOption(canvas, L"No Flash", 11, 0);
			DrawMenuOption(canvas, L"No Smoke", 12, 0);
			DrawMenuOption(canvas, L"No Respawn Cost", 13, 0);
			DrawMenuOption(canvas, L"Auto Respawn", 14, 1, wAutoRespawn[iAutoRespawn]);
			DrawMenuOption(canvas, L"Respawn on HP < ", 15, 2, wHpRespawn[iHpRespawn], iHpRespawn, 89);
			DrawMenuOption(canvas, L"No Bullets Gravity", 16, 0);
			DrawMenuOption(canvas, L"Auto Switch (QQ)", 17, 0);
		}
		//SPECIAL
		else if (iMenuIndex == 4)
		{
			DrawMenuOption(canvas, L"Enable OPK", 0, 1, wEnableOpk[iEnableOpk]);
			DrawMenuOption(canvas, L"OPK Target", 1, 1, wPickBestPlayer[iPickBestPlayer]);
			DrawMenuOption(canvas, L"OPK Key", 2, 1, wOpkKey[iOpkKey]);
			DrawMenuOption(canvas, L"OPK Damage Type", 3, 1, wOpkDamage[iOpkDamage]);
			DrawMenuOption(canvas, L"OPK Bone", 4, 1, wOpkBone[iOpkBone]);
			DrawMenuOption(canvas, L"Shoot Through Walls", 5, 0);
			DrawMenuOption(canvas, L"Bullets per Shot", 6, 2, wBulletPerShot[iBulletPerShot], iBulletPerShot, 9);
			DrawMenuOption(canvas, L"Add Hero Mode MP", 7, 0);
			DrawMenuOption(canvas, L"Add Hero Mode DP", 8, 0);
			DrawMenuOption(canvas, L"Add Hero Mode AP", 9, 0);
			DrawMenuOption(canvas, L"Add Hero Mode EXP", 10, 0);
			DrawMenuOption(canvas, L"Hero Points", 11, 2, wHeroPoints[iHeroPoints], iHeroPoints, 99);
			DrawMenuOption(canvas, L"Hero Points Key", 12, 1, wHeroPointsKey[iHeroPointsKey]);
			DrawMenuOption(canvas, L"OPK Hero Monsters Only", 13, 0);
			DrawMenuOption(canvas, L"Virtual Jump Value", 14, 2, wVirtualJumpValue[iVirtualJumpValue], iVirtualJumpValue, 200);
			DrawMenuOption(canvas, L"Virtual Jump", 15, 1, wVirtualJump[iVirtualJump]);
		}
		//SETTINGS
		else if (iMenuIndex == 5)
		{
			DrawMenuOption(canvas, L"Show FPS", 0, 0);
			DrawMenuOption(canvas, L"Show Watermark", 1, 0);
			DrawMenuOption(canvas, L"MAC Spoof", 2, 0);
			DrawMenuOption(canvas, L"Custom Name #1 :", 3, 3);
			DrawMenuOption(canvas, L"Custom Name #2 :", 4, 3);
			DrawMenuOption(canvas, L"Restore Default Settings", 5, 0);
			DrawMenuOption(canvas, L"Save Settings", 6, 0);
			DrawMenuOption(canvas, L"Load Settings", 7, 0);
			
			if (iName1 > 0)
			{
				int PixelY2 = 47 + (20 * 3);
				canvas->SetPos(307, PixelY2 + 3, 0);
				canvas->DrawColor = White;
				Name1 = (wchar_t*)getWC(cName1);
				canvas->DrawTextA(Name1, false, 0.8f, 0.8f, NULL);
			}
			if (iName2 > 0)
			{
				int PixelY2 = 47 + (20 * 4);
				canvas->SetPos(307, PixelY2 + 3, 0);
				canvas->DrawColor = White;
				Name2 = (wchar_t*)getWC(cName2);
				canvas->DrawTextA(Name2, false, 0.8f, 0.8f, NULL);
			}

			if (bTick1 == true)
			{
				int PixelY2 = 47 + (20 * 3);
				float len = StrLen(canvas, Name1) * 0.8f;
				
				if (iName1 == 0)
					len = 0;

				canvas->SetPos(307 + len, PixelY2 + 3, 0);
				canvas->DrawColor = White;
				canvas->DrawTextA(L"|", false, 0.8f, 0.8f, NULL);
			}
			else if (bTick2 == true)
			{
				int PixelY2 = 47 + (20 * 4);
				float len = StrLen(canvas, Name2) * 0.8f;

				if (iName2 == 0)
					len = 0;

				canvas->SetPos(307 + len, PixelY2 + 3, 0);
				canvas->DrawColor = White;
				canvas->DrawTextA(L"|", false, 0.8f, 0.8f, NULL);
			}

			if (Restored == false)
			{
				if (Saved == true)
				{
					const int PixelX = 152;
					int PixelY = 47 + (20 * 8);

					canvas->SetPos(PixelX, PixelY, 0);
					canvas->DrawColor = Yellow;
					canvas->DrawText(L"Settings Saved", false, 1.0f, 1.0f, NULL);
				}
				
				if (Loaded == true && Saved == true)
				{
					const int PixelX = 152;
					int PixelY = 47 + (20 * 9);

					canvas->SetPos(PixelX, PixelY, 0);
					canvas->DrawColor = Yellow;
					canvas->DrawText(L"Settings Loaded", false, 1.0f, 1.0f, NULL);
				}
				else if (Loaded == true && Saved == false) {
					const int PixelX = 152;
					int PixelY = 47 + (20 * 8);

					canvas->SetPos(PixelX, PixelY, 0);
					canvas->DrawColor = Yellow;
					canvas->DrawText(L"Settings Loaded", false, 1.0f, 1.0f, NULL);
				}
			}
			else
			{
				//RESTORE
				{
					const int PixelX = 152;
					int PixelY = 47 + (20 * 8);

					canvas->SetPos(PixelX, PixelY, 0);
					canvas->DrawColor = Yellow;
					canvas->DrawText(L"Default Settings Restored!", false, 1.0f, 1.0f, NULL);
				}

				if (Saved == true)
				{
					const int PixelX = 152;
					int PixelY = 47 + (20 * 9);

					canvas->SetPos(PixelX, PixelY, 0);
					canvas->DrawColor = Yellow;
					canvas->DrawText(L"Settings Saved", false, 1.0f, 1.0f, NULL);
				}
				
				if (Loaded == true && Saved == true)
				{
					const int PixelX = 152;
					int PixelY = 47 + (20 * 10);

					canvas->SetPos(PixelX, PixelY, 0);
					canvas->DrawColor = Yellow;
					canvas->DrawText(L"Settings Loaded", false, 1.0f, 1.0f, NULL);
				}
				else if (Loaded == true && Saved == false) {
					const int PixelX = 152;
					int PixelY = 47 + (20 * 9);

					canvas->SetPos(PixelX, PixelY, 0);
					canvas->DrawColor = Yellow;
					canvas->DrawText(L"Settings Loaded", false, 1.0f, 1.0f, NULL);
				}
			}
		}
	}

	//DRAW ENABLED
	{
		if (iMenuIndex == 0)
		{
			if (bEnableAim) DrawEnabled(canvas, 0, false);
			if (bAutoFire) DrawEnabled(canvas, 7, false);
			if (bSilentAim) DrawEnabled(canvas, 9, false);
			if (bSmartAccuracy) DrawEnabled(canvas, 10, false);
			if (bHardLock) DrawEnabled(canvas, 11, false);
		}
		if (iMenuIndex == 1)
		{
			if (bNameEsp) DrawEnabled(canvas, 1, false);
			if (bDistanceEsp) DrawEnabled(canvas, 2, false);
			if (bHealthEsp) DrawEnabled(canvas, 3, false);
			if (bBoneEsp) DrawEnabled(canvas, 4, false);
			if (bHeadCircle) DrawEnabled(canvas, 5, false);
			if (bLaserEsp) DrawEnabled(canvas, 7, false);
			if (AlienZombie) DrawEnabled(canvas, 8, false);
			if (bSnapLines) DrawEnabled(canvas, 9, false);
			if (bGrenadeEsp) DrawEnabled(canvas, 10, false);
			if (bDeadVisible) DrawEnabled(canvas, 11, false);
			if (bShowStats) DrawEnabled(canvas, 12, false);
		}
		if (iMenuIndex == 2)
		{
		}
		if (iMenuIndex == 3)
		{
			if (bDropWeapon) DrawEnabled(canvas, 3, false);
			if (bFullAutoWeapon) DrawEnabled(canvas, 4, false);
			if (bRangeHack) DrawEnabled(canvas, 5, false);
			if (bNoRecoil) DrawEnabled(canvas, 7, false);
			if (bNoSpread) DrawEnabled(canvas, 8, false);
			if (bNoFlash) DrawEnabled(canvas, 11, false);
			if (bNoSmoke) DrawEnabled(canvas, 12, false);
			if (bNoRespawnCost) DrawEnabled(canvas, 13, false);
			if (bNoBulletGravity) DrawEnabled(canvas, 16, false);
			if (bAutoSwitch) DrawEnabled(canvas, 17, false);
		}
		if (iMenuIndex == 4)
		{
			if (bShotThroughWall) DrawEnabled(canvas, 5, false);
			if (bHeroMP) DrawEnabled(canvas, 7, false);
			if (bHeroDP) DrawEnabled(canvas, 8, false);
			if (bHeroAP) DrawEnabled(canvas, 9, false);
			if (bHeroEXP) DrawEnabled(canvas, 10, false);
			if (bOpkHero) DrawEnabled(canvas, 13, false);
		}
		if (iMenuIndex == 5)
		{
			if (bFPS) DrawEnabled(canvas, 0, false);
			if (bWatermark) DrawEnabled(canvas, 1, false);
			if (bMACSpoof) DrawEnabled(canvas, 2, false);
			if (bRestoreDefaultSettings) DrawEnabled(canvas, 3, false);
			if (bSaveSettings) DrawEnabled(canvas, 4, false);
			if (bLoadSettings) DrawEnabled(canvas, 5, false);
		}
	}

	//CURSOR DRAW - Done
	DrawBorderText(canvas, L"+", MouseX - StrLen(canvas, L"+") / 2, MouseY - StrLenY(canvas, L"+")/2, White);
	
	/*UTexture2D*  t2dTexture3 = (UTexture2D*)UObject::FindObject < UTexture2D >("Texture2D EngineResources.Cursors.SplitterHorz");
	canvas->DrawColor = Red;
	canvas->CurX = MouseX;
	canvas->CurY = MouseY;
	canvas->DrawTexture(t2dTexture3, 1.0f);*/
}

FRotator inline LimitRotation(UCanvas *canvas, const FRotator& startRotation, const FRotator& endRotation)
{
	int realSmoothAim = 9999;

	if (iSmoothAim == 1) realSmoothAim = 5;
	else
		if (iSmoothAim == 2) realSmoothAim = 4;
		else
			if (iSmoothAim == 3) realSmoothAim = 3;
			else
				if (iSmoothAim == 4) realSmoothAim = 2;
				else
					if (iSmoothAim == 5) realSmoothAim = 1;

	int maxRotation = realSmoothAim * 100;

	FRotator deltaRotation = canvas->Normalize(Rotator_Sub(endRotation, startRotation));

	if (deltaRotation.Yaw > maxRotation) { deltaRotation.Yaw = maxRotation; }
	else if (deltaRotation.Yaw < -maxRotation) { deltaRotation.Yaw = -maxRotation; }

	if (deltaRotation.Pitch > maxRotation) { deltaRotation.Pitch = maxRotation; }
	else if (deltaRotation.Pitch < -maxRotation) { deltaRotation.Pitch = -maxRotation; }

	return Rotator_Sum(startRotation, deltaRotation);
}

bool IsInFOV(APawn *pawn, APawn* target)
{
	double dist;

	int HP = iHPLimit * 25;
	if (HP == 100) HP = 99;

	if (target->bDeleteMe
		|| target->Health < 1
		|| IsSameTeam(pawn, target)
		|| (!IsTargetVisible(target))
		|| target->Health <= HP
		|| target == pawn)
		return false;

	float dist2 = Get3DDistance(pawn, target);

	FRotator newRotation = VectorToRotation(Vector_Sub(target->Location, cameraLocation));
	float fYaw = PlayerController->Rotation.Yaw - newRotation.Yaw;
	if (fYaw < 0) fYaw = -fYaw;

	fYaw = (fYaw / 182.0444f);

	int HowMany = (int)fYaw;
	int Inside = HowMany / 360;

	if (Inside > 0) fYaw = (fYaw - (360 * Inside));

	switch (iFovAngle)
	{
	case 0:
		if (fYaw <= 1) return true;
		else return false;

		break;
	case 1:
		if (fYaw <= 2) return true;
		else return false;

		break;
	case 2:
		if (fYaw <= 3) return true;
		else return false;

		break;
	case 3:
		if (fYaw <= 5) return true;
		else return false;

		break;
	case 4:
		if (fYaw <= 10) return true;
		else return false;

		break;
	case 5:
		if (fYaw <= 25) return true;
		else return false;

		break;
	case 6:
		if (fYaw <= 30) return true;
		else return false;

		break;
	case 7:
		if (fYaw <= 45) return true;
		else return false;

		break;
	default:
		return false;
	}
}

void inline BurstFire(ASFPawn* pawn, ASFWeapon* weapon)
{
	if (pawn->IsA(ASFPawn::StaticClass()) && weapon->IsA(ASFWeapon::StaticClass()) && pawn && weapon && weapon->IsA(ASFWeap_Bullet::StaticClass()))
	{
		ASFPawn_Player* MyPl = (ASFPawn_Player*)pawn;
		FS_RECOIL_RESULT Backup;

		if (MyPl)
		{
			Backup = MyPl->RecoilResult;
			MyPl->RecoilResult = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		}

		float SGCount = ((ASFWeap_Bullet*)weapon)->SGPelletCount;
		float SGSpre = ((ASFWeap_Bullet*)weapon)->SGSpread;
		float SGSize = ((ASFWeap_Bullet*)weapon)->SGSpreadSize;

		((ASFWeap_Bullet*)weapon)->SGPelletCount = 0;
		((ASFWeap_Bullet*)weapon)->SGSpread = 0.0f;
		((ASFWeap_Bullet*)weapon)->SGSpreadSize = 0.0f;

		((ASFWeap_Bullet*)weapon)->InstantFire();
		
		((ASFWeap_Bullet*)weapon)->SGPelletCount = SGCount;
		((ASFWeap_Bullet*)weapon)->SGSpread = SGSpre;
		((ASFWeap_Bullet*)weapon)->SGSpreadSize = SGSize;

		if (MyPl)
		{
			MyPl->RecoilResult = Backup;
			Backup = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		}
	}
}

void inline NoRecoil(bool Activate)
{
	PlayerController->bAppliedWeaponRecoilToCamera = !Activate;
}

void inline NoSpread(ASFPawn* pawn, ASFWeapon* weapon)
{
	if (pawn->IsA(ASFPawn::StaticClass()) && weapon->IsA(ASFWeapon::StaticClass()) && pawn && weapon)
	{

		ASFPawn_Player* MyPl = (ASFPawn_Player*)pawn;

		if (MyPl)
		{	
			//Recoil Backup
			{
				if (NoSpreadBackup == 0.0f && MyPl->RecoilResult.spinz > 0.0f) NoSpreadBackup = MyPl->RecoilResult.spinz;
				else MyPl->RecoilResult.spinz = NoSpreadBackup;
			}

			//General No Spread & Crosshair Freeze
			{
				MyPl->RecoilResult.crossDecreasValue = 1.0f;
				MyPl->RecoilResult.currentCrossVert = 0.0f;
				MyPl->RecoilResult.currentDomValue = 0.0f;
				MyPl->RecoilResult.spiny = 0.0f;
				MyPl->RecoilResult.expectCrossVert = 0.0f;
			}

			//No Spread while Walk, Run, Jump
			{
				ASFWeap_Bullet *sfWeapon = (ASFWeap_Bullet*)weapon;
				if (sfWeapon)
				{
					sfWeapon->RecoilCurrent.mulValueJump = 0.0f;
					sfWeapon->RecoilCurrent.mulValueRun = 0.0f;
					sfWeapon->RecoilCurrent.mulValueWalk = 0.0f;
				}
			}
		}
	}
}

void inline AutoQuickScope(ASFWeapon *weapon)
{
	if (!IsMyPawn || !weapon || !weapon->IsA(ASFWeap_SniperBase::StaticClass()) || weapon->AmmoCountInMgz == 0
		|| AfterShot == false) return;

	if (hwnd != GetForegroundWindow()) return;

	PostMessage(hwnd, WM_KEYDOWN, 0x51, NULL);
	PostMessage(hwnd, WM_KEYUP, 0x51, NULL);
	PostMessage(hwnd, WM_KEYDOWN, 0x51, NULL);
	PostMessage(hwnd, WM_KEYUP, 0x51, NULL);
	AfterShot = false;
}

void inline AutoFire()
{
	if (PlayerController->Pawn->IsA(ASFPawn::StaticClass()) && PlayerController->Pawn->Weapon->IsA(ASFWeapon::StaticClass()) && PlayerController->Pawn && PlayerController->Pawn->Weapon && PlayerController->Pawn->Weapon->IsA(ASFWeap_Bullet::StaticClass()))
	{
		if (((ASFWeap_Bullet*)PlayerController->Pawn->Weapon)->eventIsFiring() == false && ((ASFWeap_Bullet*)PlayerController->Pawn->Weapon)->AmmoCountInMgz > 0)
		{
			((ASFWeap_Bullet*)PlayerController->Pawn->Weapon)->SGSpread = 0.0f;

			unsigned char FireMode = ((ASFWeap_Bullet*)PlayerController->Pawn->Weapon)->CurrentFireMode;
			((APlayerController*)PlayerController)->StartFire(FireMode);
			PlayerController->StopFire(FireMode);
		}
	}
}

void inline AutoAim(UCanvas *canvas, AWeapon *weapon, APawn *target)
{
	if (target->Health < 1 || !target->Mesh || target->bDeleteMe) return;
	FVector boneLocation;

	if (bRandomNumChange == true)
	{
		iRandomNum = rand() % 61;
		bRandomNumChange = false;
	}

	if (iAimPosition == 0) boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(iRandomNum), 0);
	else if (iAimPosition == 1) boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(HEAD), 0);
	else if (iAimPosition == 2) boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(CHEST), 0);
	else if (iAimPosition == 3) boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(RIGHT_WRIST), 0);

	FRotator newRotation = VectorToRotation(Vector_Sub(boneLocation, cameraLocation));

	FRotator OldRotation = PlayerController->Pawn->Rotation;

	if (iSmoothAim > 0)
		newRotation = LimitRotation(canvas, cameraRotation, newRotation);
	
	/*float bak1, bak2, bak3;

	if ((ASFPawn_Player*)PlayerController->Pawn)
	{
		bak1 = ((ASFPawn_Player*)PlayerController->Pawn)->RecoilResult.impactIncreaseEye;
		bak2 = ((ASFPawn_Player*)PlayerController->Pawn)->RecoilResult.impactSpinZ;
		bak3 = ((ASFPawn_Player*)PlayerController->Pawn)->RecoilResult.spinz;

		((ASFPawn_Player*)PlayerController->Pawn)->RecoilResult.impactIncreaseEye = 0.0f;
		((ASFPawn_Player*)PlayerController->Pawn)->RecoilResult.impactSpinZ = 0.0f;
		((ASFPawn_Player*)PlayerController->Pawn)->RecoilResult.spinz = 0.0f;
	}*/

	PlayerController->Rotation = newRotation;
	PlayerController->Pawn->Rotation = newRotation;
	PlayerController->PlayerCamera->Rotation = newRotation;
	PlayerController->Pawn->ClientSetRotation(newRotation);
	PlayerController->rotInput = newRotation;

	if (bAutoFire)
	{
		std::string ActorName;
		std::size_t IsActor;

		APawn *actor = (APawn*)((ASFPawn*)PlayerController->Pawn)->AimingInfo.HitActor;
		if (!actor || actor->Health < 1) return;

		ActorName = actor->Name.GetName();
		IsActor = ActorName.find("Pawn");

		if (IsActor != std::string::npos) AutoFire();
	}

}

FRotator CalcSilentAimRot(APawn *target)
{
	if (target->Health < 1 || !target->Mesh || target->bDeleteMe) return { 0,0,0 };
	FVector boneLocation;

	if (bRandomNumChange == true)
	{
		iRandomNum = rand() % 61;
		bRandomNumChange = false;
	}

	if (iAimPosition == 0) boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(iRandomNum), 0);
	else if (iAimPosition == 1) boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(HEAD), 0);
	else if (iAimPosition == 2) boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(CHEST), 0);
	else if (iAimPosition == 3) boneLocation = target->Mesh->GetBoneLocation(target->Mesh->GetBoneName(RIGHT_WRIST), 0);

	FRotator newRotation = VectorToRotation(Vector_Sub(boneLocation, cameraLocation));

	return newRotation;
}

APawn* FindClosedTarget(APawn *pawn, APawn *target)
{
	APawn* result = NULL;

	double dist;

	int HP = iHPLimit * 25;
	if (HP == 100) HP = 99;

	while (target)
	{
		if (target->bDeleteMe
			|| target->Health < 1
			|| !target->IsAliveAndWell()
			|| IsSameTeam(pawn, target)
			|| (!IsTargetVisible(target))
			|| target->Health <= HP
			|| target == pawn
			|| ((ASFPawn*)target)->bIsSpawnProtection == true)
		{
			target = target->NextPawn;
			continue;
		}

		if (iAimBy == 1 && !IsInFOV(pawn, target))
		{
			target = target->NextPawn;
			continue;
		}

		float dist2 = Get3DDistance(pawn, target);

		if (!result || (dist2 < dist))
		{
			result = target;
			dist = dist2;
		}

		target = target->NextPawn;
	}

	return result;
}

APawn* FindLowestHP(APawn *pawn, APawn *target)
{
	APawn* result = NULL;

	int hp1;

	while (target)
	{
		if (target->bDeleteMe
			|| target->Health < 1
			|| IsSameTeam(pawn, target)
			|| !target->IsAliveAndWell()
			|| (!IsTargetVisible(target))
			|| target == pawn
			|| ((ASFPawn*)target)->bIsSpawnProtection == true)
		{
			target = target->NextPawn;
			continue;
		}

		if (iAimBy != 2) return nullptr;

		int hp2 = target->Health;

		if (!result || (hp2 < hp1))
		{
			result = target;
			hp1 = hp2;
		}

		target = target->NextPawn;
	}

	return result;
}

void HeadCircle(APawn *target, UCanvas* pCanvas, int numSides, FColor Color)
{
	if (!target->Mesh)
	{
		return;
	}

	FVector WorldHead = target->Mesh->GetBoneLocationByIndex(Bone_Head, 0);

	FVector Head = WorldHead;
	Head = WorldToScreen(pCanvas, Head);

	FVector HeadUp = WorldHead;
	HeadUp.Z += 14;
	HeadUp = WorldToScreen(pCanvas, HeadUp);

	FVector HeadLeft = WorldHead;
	HeadLeft.X += 14;
	HeadLeft = WorldToScreen(pCanvas, HeadLeft);

	FVector HeadRight = WorldHead;
	HeadRight.Y += 14;
	HeadRight = WorldToScreen(pCanvas, HeadRight);

	FVector Neck = target->Mesh->GetBoneLocationByIndex(Bone_Neck, 0);
	Neck = WorldToScreen(pCanvas, Neck);

	pCanvas->Draw2DLine(Neck.X, Neck.Y, Head.X, Head.Y, Color);

	int X = Head.X;
	int Y = Head.Y;

	int radius = 0;

	int up = (HeadUp.Y - Head.Y);
	int left = (X - HeadLeft.X);
	int right = (X - HeadRight.X);

	if (up < 0) up = -up;
	if (left < 0) left = -left;
	if (right < 0) right = -right;

	if (up >= left && up >= right) radius = up;
	else if (left >= up && left >= right) radius = left;
	else if (right >= up && right >= up) radius = right;

	if (radius < 0) radius = -radius;

	float Step = CONST_Pi * 2.0 / numSides;
	int Count = 0;
	FVector2D V[128];
	for (float a = 0; a < CONST_Pi*2.0; a += Step) {
		float X1 = radius * cos(a) + X;
		float Y1 = radius * sin(a) + Y;
		float X2 = radius * cos(a + Step) + X;
		float Y2 = radius * sin(a + Step) + Y;
		V[Count].X = X1;
		V[Count].Y = Y1;
		V[Count + 1].X = X2;
		V[Count + 1].Y = Y2;
		pCanvas->Draw2DLine(V[Count].X, V[Count].Y, X2, Y2, Color);
	}
}

void inline DrawTargetName(UCanvas *canvas, APawn *pawn, APawn *target, const FColor& color)
{
	if (!target->Mesh
		|| !target->PlayerReplicationInfo) return;

	FVector center = WorldToScreen(canvas, target->Mesh->GetBoneLocationByIndex(HEAD, 0));

	wchar_t buffer[1024];

	if (bNameEsp && bDistanceEsp)
		swprintf(buffer, 1024, L"[%dm] %s", (int)(Get3DDistance(pawn, target) / 100), target->PlayerReplicationInfo->GetHumanReadableName());
	else if (bNameEsp)
		swprintf(buffer, 1024, L"%s", target->PlayerReplicationInfo->GetHumanReadableName());
	else if (bDistanceEsp)
		swprintf(buffer, 1024, L"[%dm]", (int)(Get3DDistance(pawn, target) / 100));

	FString name(buffer);

	CheckOutsideScreen(canvas, buffer, center.X - StrLen(canvas, name) / 2, center.Y, color);
}

void inline DrawHealthBar(UCanvas *canvas, APawn *pawn)
{
	FVector min, max, center;

	FBox box;
	pawn->GetComponentsBoundingBox(&box);

	if (box.IsValid)
	{
		min = box.Min;
		max = box.Max;

		int Health = pawn->Health;
		int HealthMax = pawn->HealthMax;

		if (Health > HealthMax) {
			Health = HealthMax;
		}

		float size = (70.0f / HealthMax) * Health;

		FColor color;

		if (Health > (HealthMax / 2))
		{
			color = MakeColor(MapColorValueA(Health, (HealthMax / 2)), 255, 0);
		}
		else
		{
			color = MakeColor(255, MapColorValueB(Health, (HealthMax / 2)), 0);
		}

		float W = max.X - min.X;
		float H = max.Y - min.Y;
		float D = max.Z - min.Z;

		center.X = max.X - (W / 2);
		center.Y = max.Y - (H / 2);
		center.Z = max.Z - (D + 8);
		center = WorldToScreen(canvas, center);

		center.Y += 7;

		canvas->Draw2DLine(center.X - 35 - 1, center.Y, ((center.X - 35) + size), center.Y, color);
		canvas->Draw2DLine(center.X - 35 - 1, center.Y - 1, ((center.X - 35) + size), center.Y - 1, color);
		canvas->Draw2DLine(center.X - 35 - 1, center.Y - 2, ((center.X - 35) + size), center.Y - 2, color);
		canvas->Draw2DLine(center.X - 35 - 1, center.Y - 3, ((center.X - 35) + size), center.Y - 3, color);

		canvas->Draw2DLine(center.X - 36, center.Y + 1, center.X + 36, center.Y + 1, Black);
		canvas->Draw2DLine(center.X - 36 - 1, center.Y - 4, center.X + 36, center.Y - 4, Black);
		canvas->Draw2DLine(center.X - 36, center.Y - 4, center.X - 36, center.Y + 1, Black);
		canvas->Draw2DLine(center.X + 36, center.Y - 4, center.X + 36, center.Y + 1, Black);
	}
}

void DrawPlayerBones(UCanvas* pCanvas, APawn* Target, FColor Color)
{
	FVector vTopHead, vHead, vNeck, vPelvis, vLArmUp, vLArmLow, vLHand, vLLegUp, vLLegLow, vLFoot, vRArmUp, vRArmLow, vRHand, vRLegUp, vRLegLow, vRFoot;

	// top
	vHead = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_Head, 0));
	
	vNeck = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_Neck, 0));
	vPelvis = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_Pelvis, 0));

	// left
	vLArmUp = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_LArmUp, 0));
	vLArmLow = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_LArmLow, 0));
	vLHand = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_LHand, 0));
	vLLegUp = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_LLegUp, 0));
	vLLegLow = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_LLegLow, 0));
	vLFoot = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_LFoot, 0));

	// right
	vRArmUp = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_RArmUp, 0));
	vRArmLow = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_RArmLow, 0));
	vRHand = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_RHand, 0));
	vRLegUp = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_RLegUp, 0));
	vRLegLow = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_RLegLow, 0));
	vRFoot = WorldToScreen(pCanvas, Target->Mesh->GetBoneLocationByIndex(Bone_RFoot, 0));

	//head
	pCanvas->Draw2DLine(vHead.X, vHead.Y, vNeck.X, vNeck.Y, Color);
	pCanvas->Draw2DLine(vNeck.X, vNeck.Y, vPelvis.X, vPelvis.Y, Color);

	// shoulders
	pCanvas->Draw2DLine(vLArmUp.X, vLArmUp.Y, vNeck.X, vNeck.Y, Color);
	pCanvas->Draw2DLine(vRArmUp.X, vRArmUp.Y, vNeck.X, vNeck.Y, Color);

	// pelvis
	pCanvas->Draw2DLine(vLLegUp.X, vLLegUp.Y, vPelvis.X, vPelvis.Y, Color);
	pCanvas->Draw2DLine(vRLegUp.X, vRLegUp.Y, vPelvis.X, vPelvis.Y, Color);

	// left
	pCanvas->Draw2DLine(vLArmUp.X, vLArmUp.Y, vLArmLow.X, vLArmLow.Y, Color);
	pCanvas->Draw2DLine(vLArmLow.X, vLArmLow.Y, vLHand.X, vLHand.Y, Color);

	pCanvas->Draw2DLine(vLLegUp.X, vLLegUp.Y, vLLegLow.X, vLLegLow.Y, Color);
	pCanvas->Draw2DLine(vLLegLow.X, vLLegLow.Y, vLFoot.X, vLFoot.Y, Color);

	// right
	pCanvas->Draw2DLine(vRArmUp.X, vRArmUp.Y, vRArmLow.X, vRArmLow.Y, Color);
	pCanvas->Draw2DLine(vRArmLow.X, vRArmLow.Y, vRHand.X, vRHand.Y, Color);

	pCanvas->Draw2DLine(vRLegUp.X, vRLegUp.Y, vRLegLow.X, vRLegLow.Y, Color);
	pCanvas->Draw2DLine(vRLegLow.X, vRLegLow.Y, vRFoot.X, vRFoot.Y, Color);
}

void inline Draw3DBoundingBox(UCanvas *canvas, APawn *pawn, const FColor& color)
{
	if (pawn->Health < 1) return;

	FVector min, max, vec1, vec2, vec3, vec4, vec5, vec6, vec7, vec8;

	FBox box;
	pawn->GetComponentsBoundingBox(&box);

	if (box.IsValid)
	{
		min = box.Min;
		max = box.Max;

		vec3 = min;
		vec3.X = max.X;
		vec4 = min;
		vec4.Y = max.Y;
		vec5 = min;
		vec5.Z = max.Z;
		vec6 = max;
		vec6.X = min.X;
		vec7 = max;
		vec7.Y = min.Y;
		vec8 = max;
		vec8.Z = min.Z;
		vec1 = WorldToScreen(canvas, min);
		vec2 = WorldToScreen(canvas, max);
		vec3 = WorldToScreen(canvas, vec3);
		vec4 = WorldToScreen(canvas, vec4);
		vec5 = WorldToScreen(canvas, vec5);
		vec6 = WorldToScreen(canvas, vec6);
		vec7 = WorldToScreen(canvas, vec7);
		vec8 = WorldToScreen(canvas, vec8);
		canvas->Draw2DLine(vec1.X, vec1.Y, vec5.X, vec5.Y, color);
		canvas->Draw2DLine(vec2.X, vec2.Y, vec8.X, vec8.Y, color);
		canvas->Draw2DLine(vec3.X, vec3.Y, vec7.X, vec7.Y, color);
		canvas->Draw2DLine(vec4.X, vec4.Y, vec6.X, vec6.Y, color);
		canvas->Draw2DLine(vec1.X, vec1.Y, vec3.X, vec3.Y, color);
		canvas->Draw2DLine(vec1.X, vec1.Y, vec4.X, vec4.Y, color);
		canvas->Draw2DLine(vec8.X, vec8.Y, vec3.X, vec3.Y, color);
		canvas->Draw2DLine(vec8.X, vec8.Y, vec4.X, vec4.Y, color);
		canvas->Draw2DLine(vec2.X, vec2.Y, vec6.X, vec6.Y, color);
		canvas->Draw2DLine(vec2.X, vec2.Y, vec7.X, vec7.Y, color);
		canvas->Draw2DLine(vec5.X, vec5.Y, vec6.X, vec6.Y, color);
		canvas->Draw2DLine(vec5.X, vec5.Y, vec7.X, vec7.Y, color);
	}
}

void Draw2DBoundingBox(UCanvas* Canvas, APawn* Target, FColor color)
{
	if (Target->Health < 1) return;

	FBox Box;
	Target->GetComponentsBoundingBox(&Box);

	FVector vpjMax = WorldToScreen(Canvas, Box.Max);
	FVector vpjMin = WorldToScreen(Canvas, Box.Min);
	FVector vpjCenter = WorldToScreen(Canvas, Target->Location);

	float flWidth = fabs((vpjMax.Y - vpjMin.Y) / 4);

	Canvas->Draw2DLine(vpjCenter.X - flWidth, vpjMin.Y, vpjCenter.X + flWidth, vpjMin.Y, color); // bottom
	Canvas->Draw2DLine(vpjCenter.X - flWidth, vpjMax.Y, vpjCenter.X + flWidth, vpjMax.Y, color); // up
	Canvas->Draw2DLine(vpjCenter.X - flWidth, vpjMin.Y, vpjCenter.X - flWidth, vpjMax.Y, color); // left
	Canvas->Draw2DLine(vpjCenter.X + flWidth, vpjMax.Y, vpjCenter.X + flWidth, vpjMin.Y, color); // right
}

void inline DrawSnapLines(UCanvas *canvas, APawn *pawn, const FColor& color)
{
	FVector location = pawn->Location;
	location = WorldToScreen(canvas, location);

	canvas->Draw2DLine(canvas->ClipX / 2, canvas->ClipY, location.X, location.Y, color);
}

inline void DrawProjectiles(UCanvas *canvas, APawn *pawn)
{
	TArray<AActor*> projectiles;

	pawn->FindActorsOfClass(ASFProjectile::StaticClass(), &projectiles);

	for (int i = 0; i < projectiles.Count; i++)
	{
		AProjectile* projectile = (AProjectile*)projectiles.Data[i];
		if (!projectile
			|| projectile->bDeleteMe
			|| projectile->bPendingDelete
			|| projectile->bHidden) continue;

		FVector center = WorldToScreen(canvas, projectile->Location);

		FString string(L"[+]");
		DrawBorderText(canvas, string, center.X - StrLen(canvas, string) / 2, center.Y - StrLenY(canvas, string) / 2, Yellow);
	}
}

void inline LaserESP(UCanvas *canvas, APawn* target, const FColor& color)
{
	if (target != NULL && canvas != NULL)
	{
		ASFPawn* sftarget = (ASFPawn*)target;

		double Yaw = sftarget->Rotation.Yaw / 182;  //Trasformazione da Gradi Virtuali a Gradi Reali.
		double Pitch = sftarget->BlendedRemoteViewPitch / 182;

		double radiantsYAW = ((Yaw * CONST_Pi) / 180);  //Trasformazione da Gradi a Radianti.
		double radiantsPITCH = ((Pitch * CONST_Pi) / 180);
		double hyp = 250;
		double X = (hyp * cos(radiantsYAW));
		double Y = (hyp * sin(radiantsYAW));
		double Z = (hyp * sin(radiantsPITCH));
		float PlX = target->Location.X + X;
		float PlZ = target->Location.Y + Y;
		float PlY = target->eventGetPawnViewLocation().Z + Z;

		FVector Laser;
		Laser.X = PlX;
		Laser.Z = PlY;
		Laser.Y = PlZ;
		Laser = WorldToScreen(canvas, Laser);

		FVector HeadLoc;
		HeadLoc.X = target->Location.X;
		HeadLoc.Y = target->Location.Y;
		HeadLoc.Z = target->Mesh->GetBoneLocationByIndex(Bone_Head, 0).Z;
		HeadLoc = WorldToScreen(canvas, HeadLoc);

		canvas->Draw2DLine(HeadLoc.X, HeadLoc.Y, Laser.X, Laser.Y, color);
	}
}

void inline ESP(UCanvas *canvas, APawn *pawn, APawn *target)
{
	if (!target || !pawn || target->Health < 1 || !target->PlayerReplicationInfo) return;

	wchar_t buffer[1024];

	swprintf(buffer, 1024, L"%s", target->PlayerReplicationInfo->PlayerName);

	wstring name(buffer);
	std::size_t found = name.find(L"Zombie Walker");

	if (AlienZombie == false &&
		(target->IsA(ASFPawn_Aliens::StaticClass())
			|| target->IsA(ASFPawn_AlienPlayer::StaticClass())
			|| target->IsA(ASFZombieHideSeekPlayerController::StaticClass())
			|| target->IsA(ASFPawnZombiePlayer_Walker::StaticClass())
			|| target->IsA(ASFPawn_AI_Aliens_Base::StaticClass())
			|| target->IsA(ASFAIController_ZombieHideSeek::StaticClass())
			|| target->IsA(ASFPawnAI_ZombieHideSeekWalker::StaticClass())
			|| target->IsA(ASFAIController_Zombie::StaticClass())
			|| target->IsA(ASFAIController_ZombieMelee::StaticClass())
			|| target->IsA(ASFAIController_ZombiePuker::StaticClass())
			|| target->IsA(ASFPawnAI_Zombie::StaticClass())
			|| target->IsA(ASFPawnAI_ZombiePunisher::StaticClass())
			|| target->IsA(ASFPawnAI_ZombieWalker::StaticClass())
			) && found != std::string::npos)
			return;

	if (AlienZombie == true && 
		(target->IsA(ASFPawn_Aliens::StaticClass())
			|| target->IsA(ASFPawn_AlienPlayer::StaticClass())
			|| target->IsA(ASFZombieHideSeekPlayerController::StaticClass())
			|| target->IsA(ASFPawnZombiePlayer_Walker::StaticClass())
			|| target->IsA(ASFPawn_AI_Aliens_Base::StaticClass())
			|| target->IsA(ASFAIController_ZombieHideSeek::StaticClass())
			|| target->IsA(ASFPawnAI_ZombieHideSeekWalker::StaticClass())
			|| target->IsA(ASFAIController_Zombie::StaticClass())
			|| target->IsA(ASFAIController_ZombieMelee::StaticClass())
			|| target->IsA(ASFAIController_ZombiePuker::StaticClass())
			|| target->IsA(ASFPawnAI_Zombie::StaticClass())
			|| target->IsA(ASFPawnAI_ZombiePunisher::StaticClass())
			|| target->IsA(ASFPawnAI_ZombieWalker::StaticClass())
			) && found != std::string::npos)
	{
		ASFPawn *sfTarget = (ASFPawn*)target;

		FColor color;

		if (sfTarget)
		{
			if (sfTarget->bIsSpawnProtection) color = Blue;
			else
			{
				if (IsSameTeam(pawn, target))
				{
					if (IsTargetVisible(target))
					{
						if (iTeamVis == 0) color = Blue;
						if (iTeamVis == 1) color = Green;
						if (iTeamVis == 2) color = Yellow;
					}
					else
					{
						if (iTeamInv == 0) color = Blue;
						if (iTeamInv == 1) color = Green;
						if (iTeamInv == 2) color = Yellow;
					}
				}
				else
				{
					if (IsTargetVisible(target))
					{
						if (iEnemyVis == 0) color = Red;
						if (iEnemyVis == 1) color = Orange;
						if (iEnemyVis == 2) color = Yellow;
					}
					else
					{
						if (iEnemyInv == 0) color = Red;
						if (iEnemyInv == 1) color = Orange;
						if (iEnemyInv == 2) color = Yellow;
					}
				}
			}
		}
		else color = Black;

		if (iEnableEsp == 0 && !IsSameTeam(pawn, target))
		{
			if (bHealthEsp) DrawHealthBar(canvas, target);
			if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
			if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
			if (bSnapLines) DrawSnapLines(canvas, target, color);
			if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
		}
		else if (iEnableEsp == 1 && IsSameTeam(pawn, target))
		{
			if (bHealthEsp) DrawHealthBar(canvas, target);
			if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
			if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
			if (bSnapLines) DrawSnapLines(canvas, target, color);
			if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
		}
		else if (iEnableEsp == 2)
		{
			if (bHealthEsp) DrawHealthBar(canvas, target);
			if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
			if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
			if (bSnapLines) DrawSnapLines(canvas, target, color);
			if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
		}
	}
	else
	{
		ASFPawn *sfTarget = (ASFPawn*)target;

		FColor color;

		if (sfTarget)
		{
			if (sfTarget->bIsSpawnProtection) color = Blue;
			else
			{
				if (IsSameTeam(pawn, target))
				{
					if (IsTargetVisible(target))
					{
						if (iTeamVis == 0) color = Blue;
						if (iTeamVis == 1) color = Green;
						if (iTeamVis == 2) color = Yellow;
					}
					else
					{
						if (iTeamInv == 0) color = Blue;
						if (iTeamInv == 1) color = Green;
						if (iTeamInv == 2) color = Yellow;
					}
				}
				else
				{
					if (IsTargetVisible(target))
					{
						if (iEnemyVis == 0) color = Red;
						if (iEnemyVis == 1) color = Orange;
						if (iEnemyVis == 2) color = Yellow;
					}
					else
					{
						if (iEnemyInv == 0) color = Red;
						if (iEnemyInv == 1) color = Orange;
						if (iEnemyInv == 2) color = Yellow;
					}
				}
			}
		}
		else color = Black;

		if (target->IsA(ASFPawn_Aliens::StaticClass())
			|| target->IsA(ASFPawn_AlienPlayer::StaticClass())
			|| target->IsA(ASFZombieHideSeekPlayerController::StaticClass())
			|| target->IsA(ASFPawnZombiePlayer_Walker::StaticClass())
			|| target->IsA(ASFPawn_AI_Aliens_Base::StaticClass())
			|| target->IsA(ASFAIController_ZombieHideSeek::StaticClass())
			|| target->IsA(ASFPawnAI_ZombieHideSeekWalker::StaticClass())
			|| target->IsA(ASFAIController_Zombie::StaticClass())
			|| target->IsA(ASFAIController_ZombieMelee::StaticClass())
			|| target->IsA(ASFAIController_ZombiePuker::StaticClass())
			|| target->IsA(ASFPawnAI_Zombie::StaticClass())
			|| target->IsA(ASFPawnAI_ZombiePunisher::StaticClass())
			|| target->IsA(ASFPawnAI_ZombieWalker::StaticClass()))
		{
			if (iEnableEsp == 0 && !IsSameTeam(pawn, target))
			{
				if (bHealthEsp) DrawHealthBar(canvas, target);
				if (bLaserEsp) LaserESP(canvas, target, color);
				if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
				if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
				if (bSnapLines) DrawSnapLines(canvas, target, color);
				if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
			}
			else if (iEnableEsp == 1 && IsSameTeam(pawn, target))
			{
				if (bHealthEsp) DrawHealthBar(canvas, target);
				if (bLaserEsp) LaserESP(canvas, target, color);
				if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
				if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
				if (bSnapLines) DrawSnapLines(canvas, target, color);
				if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
			}
			else if (iEnableEsp == 2)
			{
				if (bHealthEsp) DrawHealthBar(canvas, target);
				if (bLaserEsp) LaserESP(canvas, target, color);
				if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
				if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
				if (bSnapLines) DrawSnapLines(canvas, target, color);
				if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
			}
		}
		else
		{
			if (iEnableEsp == 0 && !IsSameTeam(pawn, target))
			{
				if (bHealthEsp) DrawHealthBar(canvas, target);
				if (bBoneEsp) DrawPlayerBones(canvas, target, Cyan);
				if (bHeadCircle) HeadCircle(target, canvas, 350, Cyan);
				if (bLaserEsp) LaserESP(canvas, target, color);
				if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
				if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
				if (bSnapLines) DrawSnapLines(canvas, target, color);
				if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
			}
			else if (iEnableEsp == 1 && IsSameTeam(pawn, target))
			{
				if (bHealthEsp) DrawHealthBar(canvas, target);
				if (bBoneEsp) DrawPlayerBones(canvas, target, Cyan);
				if (bHeadCircle) HeadCircle(target, canvas, 350, Cyan);
				if (bLaserEsp) LaserESP(canvas, target, color);
				if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
				if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
				if (bSnapLines) DrawSnapLines(canvas, target, color);
				if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
			}
			else if (iEnableEsp == 2)
			{
				if (bHealthEsp) DrawHealthBar(canvas, target);
				if (bBoneEsp) DrawPlayerBones(canvas, target, Cyan);
				if (bHeadCircle) HeadCircle(target, canvas, 350, Cyan);
				if (bLaserEsp) LaserESP(canvas, target, color);
				if (iBoundingBox == 1) Draw3DBoundingBox(canvas, target, color);
				if (iBoundingBox == 2) Draw2DBoundingBox(canvas, target, color);
				if (bSnapLines) DrawSnapLines(canvas, target, color);
				if (bNameEsp || bDistanceEsp) DrawTargetName(canvas, pawn, target, color);
			}
		}
	}
}

FVector2D WorldToRadar(FVector Location, INT RadarX, INT RadarY, int size)
{
	FVector2D Return;

	FLOAT CosYaw = cos(URotationToRadians(cameraRotation.Yaw));
	FLOAT SinYaw = sin(URotationToRadians(cameraRotation.Yaw));

	FLOAT DeltaX = Location.X - cameraLocation.X;
	FLOAT DeltaY = Location.Y - cameraLocation.Y;

	FLOAT LocationX = (DeltaY * CosYaw - DeltaX * SinYaw) / (iPlayerRadius + 25);
	FLOAT LocationY = (DeltaX * CosYaw + DeltaY * SinYaw) / (iPlayerRadius + 25);

	if (LocationX > ((size / 2) - 5.0f) - 2.5f)
		LocationX = ((size / 2) - 5.0f) - 2.5f;
	else if (LocationX < -(((size / 2) - 5.0f) - 2.5f))
		LocationX = -(((size / 2) - 5.0f) - 2.5f);

	if (LocationY >((size / 2) - 5.0f) - 2.5f)
		LocationY = ((size / 2) - 5.0f) - 2.5f;
	else if (LocationY < -(((size / 2) - 5.0f) - 2.5f))
		LocationY = -(((size / 2) - 5.0f) - 2.5f);

	Return.X = LocationX + RadarX;
	Return.Y = -LocationY + RadarY;

	return Return;
}

void RadarDraw(UCanvas *canvas, int Size)
{
	APawn *pawn;
	
	canvas->SetPos(RadarLocation.X, RadarLocation.Y, 0);
	if (iQuadrantColor == 0) canvas->SetDrawColor(0, 0, 0, 255);
	else if (iQuadrantColor == 1) canvas->SetDrawColor(63, 63, 63, 255);
	else if (iQuadrantColor == 2) canvas->SetDrawColor(255, 255, 255, 255);
	else if (iQuadrantColor == 3) canvas->SetDrawColor(255, 0, 0, 255);
	else if (iQuadrantColor == 4) canvas->SetDrawColor(0, 0, 255, 255);
	canvas->DrawBox(Size, Size);

	canvas->SetPos(RadarLocation.X+1, RadarLocation.Y+1, 0);
	if (iBackgroundColor == 0) canvas->SetDrawColor(80, 80, 80, iBackgroundOpacity);
	else if (iBackgroundColor == 1) canvas->SetDrawColor(255, 255, 255, iBackgroundOpacity);
	else if (iBackgroundColor == 2) canvas->SetDrawColor(255, 0, 0, iBackgroundOpacity);
	else if (iBackgroundColor == 3) canvas->SetDrawColor(0, 0, 255, iBackgroundOpacity);
	else if (iBackgroundColor == 4) canvas->SetDrawColor(0, 255, 0, iBackgroundOpacity);
	canvas->DrawRect(Size - 2, Size - 2, canvas->DefaultTexture);

	//CROSS
	canvas->Draw2DLine(RadarLocation.X + (Size / 2), RadarLocation.Y + (Size / 2), RadarLocation.X + (Size / 2) - (Size / 2), RadarLocation.Y + (Size / 2), Black); //Centro Sinistra
	canvas->Draw2DLine(RadarLocation.X + (Size / 2), RadarLocation.Y + (Size / 2), RadarLocation.X + (Size / 2) + (Size / 2), RadarLocation.Y + (Size / 2), Black); //Centro Destra
	canvas->Draw2DLine(RadarLocation.X + (Size / 2), RadarLocation.Y + (Size / 2), RadarLocation.X + (Size / 2), RadarLocation.Y + (Size / 2) - (Size / 2), Black); //Centro Su
	canvas->Draw2DLine(RadarLocation.X + (Size / 2), RadarLocation.Y + (Size / 2), RadarLocation.X + (Size / 2), RadarLocation.Y + (Size / 2) + (Size / 2), Black); //Centro Giu
	
	if (!PlayerController
		|| !PlayerController->PlayerCamera) return;

	//CRASH - Dangerous!
	/*if (bDeadVisible)
	{
		if (!(PlayerController->Pawn)) pawn = (APawn*)PlayerController->GetViewTarget();
		else pawn = PlayerController->Pawn;
	}
	else
	{
		if (PlayerController->Pawn) pawn = PlayerController->Pawn;
		else return;
	}*/

	if (PlayerController->Pawn)
	{
		pawn = PlayerController->Pawn;
	}
	else return;

	if (!pawn || pawn->Health < 1 || !pawn->IsAliveAndWell()) return;

	float FOVAngle = PlayerController->FOVAngle;
	//FOV IN QUESTO GIOCO = 105.0f
	//(Size/2) : 90 = x : NEWFOV -> x = ((Size/2) * NEWFOV) / 90
	float NewFOV = ((Size / 2) * FOVAngle) / 90;

	canvas->Draw2DLine((Size / 2) + RadarLocation.X, (Size / 2) + RadarLocation.Y, (Size / 2) + RadarLocation.X - NewFOV + 13, RadarLocation.Y, Black);
	canvas->Draw2DLine((Size / 2) + RadarLocation.X, (Size / 2) + RadarLocation.Y, (Size / 2) + RadarLocation.X + NewFOV - 13, RadarLocation.Y, Black);

	
	APawn *target = PlayerController->WorldInfo->PawnList;
	ASFPawn* Target;
	FLinearColor color;
	FLinearColor Bordercolor;

	if (iBorderColor == 0) Bordercolor = { 0,0,0,255 };
	if (iBorderColor == 1) Bordercolor = { 255,255,255,255 };
	if (iBorderColor == 2) Bordercolor = { 255,0,0,255 };
	if (iBorderColor == 3) Bordercolor = { 0,0,255,255 };

	while (target)
	{
		Target = (ASFPawn*)target;
		if (target != PlayerController->Pawn)
		{
			if (target->IsAliveAndWell() == true)
			{
				if (IsSameTeam(pawn, target)) {
					FVector2D RadarCoords = WorldToRadar(target->Location, (Size / 2) + RadarLocation.X, (Size / 2) + RadarLocation.Y, Size);

					canvas->SetPos(RadarCoords.X - 4, RadarCoords.Y - 4, 0);
					canvas->SetDrawColor(Bordercolor.R, Bordercolor.G, Bordercolor.B, Bordercolor.A);
					canvas->DrawRect(5, 5, canvas->DefaultTexture);

					if (iTeamColor == 0) color = { 0,0,255,255 };
					if (iTeamColor == 1) color = { 0,255,0,255 };
					if (iTeamColor == 2) color = { 255,255,0,255 };

					canvas->SetPos(RadarCoords.X - 3, RadarCoords.Y - 3, 0);
					canvas->SetDrawColor(color.R, color.G, color.B, color.A);
					canvas->DrawRect(3, 3, canvas->DefaultTexture);
				}
				else if (!IsSameTeam(pawn, target)) {
					FVector2D RadarCoords = WorldToRadar(target->Location, (Size / 2) + RadarLocation.X, (Size / 2) + RadarLocation.Y, Size);

					canvas->SetPos(RadarCoords.X - 4, RadarCoords.Y - 4, 0);
					canvas->SetDrawColor(Bordercolor.R, Bordercolor.G, Bordercolor.B, Bordercolor.A);
					canvas->DrawRect(5, 5, canvas->DefaultTexture);

					if (iEnemyColor == 0) color = { 255,0,0,255 };
					if (iEnemyColor == 1) color = { 255,128,0,255 };
					if (iEnemyColor == 2) color = { 255,255,0,255 };

					canvas->SetPos(RadarCoords.X - 3, RadarCoords.Y - 3, 0);
					canvas->SetDrawColor(color.R, color.G, color.B, color.A);
					canvas->DrawRect(3, 3, canvas->DefaultTexture);
				}
			}
		}
		target = target->NextPawn;
	}

	canvas->SetPos((Size / 2) + RadarLocation.X-3, (Size / 2) + RadarLocation.Y-3, 0);
	canvas->SetDrawColor(Bordercolor.R, Bordercolor.G, Bordercolor.B, Bordercolor.A);
	canvas->DrawRect(5, 5, canvas->DefaultTexture);

	canvas->SetPos((Size / 2) + RadarLocation.X-2, (Size / 2) + RadarLocation.Y-2, 0);
	canvas->SetDrawColor(255, 255, 255, 255);
	canvas->DrawRect(3, 3, canvas->DefaultTexture);

}

void AttachRadarToMouse(int RadarSize)
{
	RadarLocation.X = MouseX - (RadarSize / 2);
	RadarLocation.Y = MouseY - (RadarSize / 2);
}

void inline Crosshair(UCanvas* canvas)
{
	//BLACK BORDER
	{
		canvas->Draw2DLine(((canvas->ClipX / 2) - (iCrosshairSize + 6)), canvas->ClipY / 2, ((canvas->ClipX / 2) + (iCrosshairSize + 6)), canvas->ClipY / 2, Black);
		canvas->Draw2DLine(((canvas->ClipX / 2) - (iCrosshairSize + 6)), canvas->ClipY / 2 - 1, ((canvas->ClipX / 2) + (iCrosshairSize + 6)), canvas->ClipY / 2 - 1, Black);
		canvas->Draw2DLine(((canvas->ClipX / 2) - (iCrosshairSize + 6)), canvas->ClipY / 2 + 1, ((canvas->ClipX / 2) + (iCrosshairSize + 6)), canvas->ClipY / 2 + 1, Black);

		canvas->Draw2DLine(canvas->ClipX / 2, ((canvas->ClipY / 2) - (iCrosshairSize + 6)), canvas->ClipX / 2, ((canvas->ClipY / 2) + (iCrosshairSize + 6)), Black);
		canvas->Draw2DLine(canvas->ClipX / 2 - 1, ((canvas->ClipY / 2) - (iCrosshairSize + 6)), canvas->ClipX / 2 - 1, ((canvas->ClipY / 2) + (iCrosshairSize + 6)), Black);
		canvas->Draw2DLine(canvas->ClipX / 2 + 1, ((canvas->ClipY / 2) - (iCrosshairSize + 6)), canvas->ClipX / 2 + 1, ((canvas->ClipY / 2) + (iCrosshairSize + 6)), Black);
	}
	
	//CROSSHAIR
	canvas->Draw2DLine(((canvas->ClipX / 2) - (iCrosshairSize + 5)), canvas->ClipY / 2, ((canvas->ClipX / 2) + (iCrosshairSize + 5)), canvas->ClipY / 2, Red); // -
	canvas->Draw2DLine(canvas->ClipX / 2, ((canvas->ClipY / 2) - (iCrosshairSize + 5)), canvas->ClipX / 2, ((canvas->ClipY / 2) + (iCrosshairSize + 5)), Red); // |
}

void inline UnlimitedAmmo(APawn* pawn)
{
	if (!PlayerController || !pawn || !pawn->Weapon) return;

	if (iUnlAmmo == 1)
	{
		if (((ASFWeapon*)pawn->Weapon)->eventUsingInfiniteAmmo() == false)
			PlayerController->ServerToggleInfiniteAmmo();

		if (((ASFWeapon*)pawn->Weapon)->UsingInfiniteMagazine() == false)
			PlayerController->ServerToggleInfiniteMagazine();
	}
	else if (iUnlAmmo == 0)
	{
		if (((ASFWeapon*)pawn->Weapon)->eventUsingInfiniteAmmo() == true)
			PlayerController->ServerToggleInfiniteAmmo();

		if (((ASFWeapon*)pawn->Weapon)->UsingInfiniteMagazine() == true)
			PlayerController->ServerToggleInfiniteMagazine();
	}
		
	if (iUnlAmmo == 1 && !((ASFWeapon*)pawn->Weapon)->IsA(ASFWeap_Crossbow::StaticClass()))
		((ASFWeapon*)pawn->Weapon)->AmmoCountInMgz = 30;
}

float OriginalWeapRange = 0;
void inline RangeHack(APawn* pawn)
{
	if (bRangeHack)
	{
		if (pawn && pawn->Weapon && pawn->Weapon->IsA(ASFWeap_Melee::StaticClass()))
		{
			if (OriginalWeapRange == 0)
				OriginalWeapRange = ((ASFWeap_Melee*)pawn->Weapon)->WeaponRange;

			((ASFWeap_Melee*)pawn->Weapon)->WeaponRange = 99999999.9f;

			for (int i = 0; i < ((ASFWeap_Melee*)pawn->Weapon)->HitDetectHorzAngle.Max; i++)
				((ASFWeap_Melee*)pawn->Weapon)->HitDetectHorzAngle(i) = 0.0f;
		}
		else return;
	}
	else if (!bRangeHack && OriginalWeapRange != 0)
	{
		((ASFWeap_Melee*)pawn->Weapon)->WeaponRange = OriginalWeapRange;
	}
	else return;
}

void inline TriggerBot(ASFPawn* pawn)
{
	if (pawn == nullptr || !pawn->IsAliveAndWell() || !pawn->Weapon) return;
	
	std::string ActorName;
	std::size_t IsActor;

	APawn *actor = ((APawn*)pawn->AimingInfo.HitActor);
	if (!actor && actor == nullptr) return;

	if (actor->Health <= 0) return;

	ActorName = actor->Name.GetName();
	IsActor = ActorName.find("Pawn");

	if (!PlayerController->WorldInfo || !actor) return;

	if (IsActor != std::string::npos)
	{
		if (IsSameTeam(pawn, actor) == false)
		{
			ASFWeap_Bullet* Weap = (ASFWeap_Bullet*)pawn->Weapon;
			if (Weap->IsSprintPossible()) AfterShot = true;

			AutoFire();

			if (IsMyPawn
				&& bAutoSwitch
				&& PlayerController
				&& PlayerController->Pawn
				&& PlayerController->Pawn->Weapon
				&& PlayerController->Pawn->Health > 0)
				AutoQuickScope((ASFWeapon*)PlayerController->Pawn->Weapon);
		}
	}
}

void inline NameStealer(UCanvas *canvas)
{
	/*if (target->PlayerReplicationInfo)
	{
		PlayerController->ServerChangeName(target->PlayerReplicationInfo->PlayerName);
	}*/

	if (iNameStealer == 1)
	{
		if (FistSteal == true && PlayerController->Pawn && StrLen(canvas, OldName) == 0)
		{
			OldName = PlayerController->Pawn->PlayerReplicationInfo->GetHumanReadableName();
			FistSteal = false;
		}
		if (iName1 == 0) PlayerController->ServerChangeName(L"Hack by dano20zombie");
		else PlayerController->ServerChangeName(Name1);
	}
	else if(iNameStealer == 2)
	{
		if (FistSteal == true && PlayerController->Pawn && StrLen(canvas, OldName) == 0)
		{
			OldName = PlayerController->Pawn->PlayerReplicationInfo->GetHumanReadableName();
			FistSteal = false;
		}
		if (iName2 == 0) PlayerController->ServerChangeName(L"Hack by dano20zombie");
		else PlayerController->ServerChangeName(Name2);
	}
	else if (iNameStealer == 3)
	{
		if (FistSteal == true && PlayerController->Pawn && StrLen(canvas, OldName) == 0)
		{
			OldName = PlayerController->Pawn->PlayerReplicationInfo->GetHumanReadableName();
			FistSteal = false;
		}
		PlayerController->ServerChangeName(L" ");
	}
	else if (iNameStealer == 0)
	{
		wchar_t PlayerName[1024];
		swprintf(PlayerName, 1024, L"%s", OldName);
		if (wcscmp(PlayerName, L"") == 0 ||
			wcscmp(PlayerName, L" ") == 0)
		{
			return;
		}
		else
		{
			PlayerController->ServerChangeName(OldName);
			OldName = L"";
			swprintf(PlayerName, 1024, L"");
		}
	}
}

void inline NoFlash(APawn *pawn)
{
	ASFPawn *sfPawn = (ASFPawn*)pawn;
	sfPawn->bStun = false;
	sfPawn->FlashBangEffect = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
}

void inline NoSmoke(APawn *pawn)
{
	TArray<AActor*> projectiles;

	pawn->FindActorsOfClass(ASFProjectileM18::StaticClass(), &projectiles);

	for (int i = 0; i < projectiles.Count; i++)
	{
		ASFProjectileM18* projectile = (ASFProjectileM18*)projectiles.Data[i];

		if (!projectile
			|| projectile->bDeleteMe
			|| projectile->bPendingDelete
			|| projectile->bHidden) continue;

		projectile->fSmokeDuringTime = 0.0f;
		projectile->fExploTime = 99999999999999999.9f;
		projectile->fSmokeLifeTime = 0.0f;
		projectile->fSmokeMaxTime = 0.0f;

		if (projectile->SmokeEffect)
		{
			projectile->SmokeEffect->SetHidden(true);
			projectile->SmokeEffect->KillParticlesForced();
			projectile->SmokeEffect->DeactivateSystem();
			projectile->SmokeEffect->SavedScale3D = { 0.0f, 0.0f, 0.0f };
			projectile->SmokeEffect->LODLevel = 0;
			projectile->SmokeEffect->SecondsBeforeInactive = 0;
			projectile->SmokeEffect->EmitterDelay = 0;
			projectile->SmokeEffect->CustomTimeDilation = 0;
			projectile->SmokeEffect->bOwnerNoSee = true;
			projectile->SmokeEffect->Scale = 0.0f;
			projectile->SmokeEffect->Scale3D = { 0.0f,0.0f,0.0f };
		}
	}
}

void inline AutoRespawn(APawn* pawn, bool ByKey = false)
{
	if (pawn->Health < 1 || !pawn->IsAliveAndWell()) return;

	if (ByKey == true && pawn->Health > 0 && pawn->IsAliveAndWell())
	{
		PlayerController->ServerInstanceRespawn(!bNoRespawnCost);
		return;
	}

	if (ByKey == false && pawn->Health > 0 && pawn->IsAliveAndWell())
	{
		if (pawn->Health < (iHpRespawn + 10))
		{
			PlayerController->ServerInstanceRespawn(!bNoRespawnCost);
			return;
		}
	}
}

void InvisibleAll(ASFPawn* pawn)
{
	if (pawn == nullptr || !pawn->IsAliveAndWell() || !pawn->Weapon) return;
	
	PlayerController->eventServerUpdateLevelVisibility(pawn->GetPackageName(), false);
}

void FastFastRespawn()
{
	PlayerController->ServerInstanceRespawn(false);
}

void inline NoBulletsGravity(UCanvas *canvas, APawn *pawn)
{
	TArray<AActor*> projectiles;

	pawn->FindActorsOfClass(ASFProjectile::StaticClass(), &projectiles);

	for (int i = 0; i < projectiles.Count; i++)
	{
		AProjectile* projectile = (AProjectile*)projectiles.Data[i];
		if (!projectile
			|| projectile->bDeleteMe
			|| projectile->bPendingDelete
			|| projectile->bHidden) continue;
				
		if (bNoBulletGravity)
		{
			if (RealGravityScaling == 0.0f) RealGravityScaling = ((ASFProjectile*)projectile)->CustomGravityScaling;

			((ASFProjectile*)projectile)->CustomGravityScaling = 0.0f;
			bGravityEnabled = true;
		}
		else
		{
			if (RealGravityScaling != 0.0f) ((ASFProjectile*)projectile)->CustomGravityScaling = RealGravityScaling;
			bGravityEnabled = false;
		}
	}
}

void inline OPK(APawn* pawn, APawn* target)
{
	bool Teammate;

	if (pawn != target)
	{
		if (IsSameTeam(pawn, target)) Teammate = true;
		else Teammate = false;
	}
	else Teammate = true;

	if (target->Health < 1) return;

	if (iPickBestPlayer == 0)
	{
		if (IsSameTeam(pawn, target)) return;
	}
	if (iPickBestPlayer == 1)
	{
		if (!IsSameTeam(pawn, target)) return;
	}

	if (bOpkHero && (target->IsA(ASFPawn_Aliens::StaticClass())
					|| target->IsA(ASFPawn_AlienPlayer::StaticClass())
					|| target->IsA(ASFPawn_AI_Aliens_Base::StaticClass())
					|| target->IsA(ASFZombieHideSeekPlayerController::StaticClass())
					|| target->IsA(ASFAIController_ZombieHideSeek::StaticClass())
					|| target->IsA(ASFPawnAI_ZombieHideSeekWalker::StaticClass())
					|| target->IsA(ASFAIController_Zombie::StaticClass())
					|| target->IsA(ASFAIController_ZombieMelee::StaticClass())
					|| target->IsA(ASFAIController_ZombiePuker::StaticClass())
					|| target->IsA(ASFPawnAI_Zombie::StaticClass())
					|| target->IsA(ASFPawnAI_ZombiePunisher::StaticClass())
					|| target->IsA(ASFPawnAI_ZombieWalker::StaticClass())))
	{
		FSFTakeHitInfo HitInfo;
		HitInfo.Damage = target->Health;

		if (iOpkDamage == 0) HitInfo.DamageType = USFDmgType_C4::StaticClass();
		else if (iOpkDamage == 1) HitInfo.DamageType = USFDmgType_Strike::StaticClass();
		else if (iOpkDamage == 2) HitInfo.DamageType = USFDmgType_MG_AutoTurret::StaticClass();
		else if (iOpkDamage == 3) HitInfo.DamageType = NULL;

		if (target->NextPawn) HitInfo.DamagedBy = target->NextPawn;
		else  HitInfo.DamagedBy = NULL;

		if (iOpkBone == 0) HitInfo.HitBoneIndex = HEAD;
		else if (iOpkBone == 1) HitInfo.HitBoneIndex = CHEST;
		else if (iOpkBone == 2) HitInfo.HitBoneIndex = iRandomNum;

		if (iOpkBone == 0) HitInfo.HitLocation = target->Mesh->GetBoneLocationByIndex(HEAD, 0);
		else if (iOpkBone == 1) HitInfo.HitLocation = target->Mesh->GetBoneLocationByIndex(CHEST, 0);
		else if (iOpkBone == 2) HitInfo.HitLocation = target->Mesh->GetBoneLocationByIndex(iRandomNum, 0);

		if (target->NextPawn) PlayerController->ServerRequestDamageForProjectile((ASFPawn*)target, HitInfo, target->NextPawn);
		else PlayerController->ServerRequestDamageForProjectile((ASFPawn*)target, HitInfo, NULL);
	}
	else if (!bOpkHero)
	{
		FSFTakeHitInfo HitInfo;
		HitInfo.Damage = target->Health + 1;

		if (Teammate == false)
		{
			if (iOpkDamage == 0) HitInfo.DamageType = USFDmgType_C4::StaticClass();
			else if (iOpkDamage == 1) HitInfo.DamageType = USFDmgType_Strike::StaticClass();
			else if (iOpkDamage == 2) HitInfo.DamageType = USFDmgType_MG_AutoTurret::StaticClass();
			else if (iOpkDamage == 3) HitInfo.DamageType = NULL;
		}
		else HitInfo.DamageType = USFDmgType_C4::StaticClass();

		//DON'T WORK
		//-USFDmgType_ElectricShock
		//-USFDmgType_Elevator
		//-USFDmgType_Enviroment
		//-USFDmgType_Explosive
		//-USFDmgType_Fell
		//-USFDmgType_MG
		//-USFDmgType_Pistol
		//-USFDmgType_PlayerStunnerExplo
		//-USFDmgType_Rifle
		//-USFDmgType_Shotgun
		//-USFDmgType_Shuriken
		//-USFDmgType_SMG
		//-USFDmgType_Sniper
		//-USFDmgType_StunGrenade
		//-USFDmgType_StunnerExplo
		//-USFDmgType_TeslaCanon
		//-USFDmgType_LongTime
		//-USFDmgType_Knife
		//-USFDmgType_IncendiaryGrenade
		//-USFDmgType_HG_FBang
		//-USFDmgType_HG_Frag
		//-USFDmgType_HG_Gas
		//-USFDmgType_HG_Smoke
		//-USFDmgType_HandGrenade
		//-USFDmgType_GrenadeLauncher

		//WORK
		//-USFDmgType_MG_AutoTurret (HERO Turret)
		//-USFDmgType_C4
		//-USFDmgType_RPG (Like C4)
		//-USFDmgType_Strike (Baseball Ball)
		//-USFDmgType_KillVolume (Like C4)
		//-USFDmgType_EnvCrash (Like C4)
		//-USFDmgType_Drum (Like C4)

		HitInfo.DamagedBy = NULL;

		if (iOpkBone == 0) HitInfo.HitBoneIndex = HEAD;
		else if (iOpkBone == 1) HitInfo.HitBoneIndex = CHEST;
		else if (iOpkBone == 2) HitInfo.HitBoneIndex = iRandomNum;

		if (iOpkBone == 0) HitInfo.HitLocation = target->Mesh->GetBoneLocationByIndex(HEAD, 0);
		else if (iOpkBone == 1) HitInfo.HitLocation = target->Mesh->GetBoneLocationByIndex(CHEST, 0);
		else if (iOpkBone == 2) HitInfo.HitLocation = target->Mesh->GetBoneLocationByIndex(iRandomNum, 0);

		PlayerController->ServerRequestDamageForProjectile((ASFPawn*)target, HitInfo, target);
	}
	else return;
}

void inline SuperBullet(AWeapon *weapon)
{
	ASFWeap_Bullet *sfWeapon = (ASFWeap_Bullet*)weapon;

	if (!sfWeapon) return;
	
	sfWeapon->ThicknessForPenetrate = 3.40282e+38;
	sfWeapon->ApplyPenetrationOption(3.40282e+38);
	sfWeapon->fPenetrationMax = 3.40282e+38;
	sfWeapon->MaxPenetrationCount = 2147483647;
}

void inline DamageHack(AWeapon *weapon)
{
	ASFWeap_Bullet *sfWeapon = (ASFWeap_Bullet*)weapon;

	if (!sfWeapon) return;

	sfWeapon->SGPelletCount = (iBulletPerShot + 1);
}

void inline VirtualJump(ASFPawn* pawn)
{
	pawn->SetCollisionSize(pawn->GetCollisionRadius(), iVirtualJumpValue + 55);
}

void inline DrawStats(UCanvas* canvas, ASFPawn* pawn)
{
	if (pawn && pawn->PlayerReplicationInfo);

	wchar_t PlayerName[1024];
	swprintf(PlayerName, 1024, L"Player Name: %s", pawn->PlayerReplicationInfo->GetHumanReadableName());

	wchar_t RoundedScore[1024];
	swprintf(RoundedScore, 1024, L"%f", pawn->PlayerReplicationInfo->Score);
	wchar_t OnlyScore[1024];
	wchar_t Score[1024];

	for (int i = 0; i < 15; i++)
	{
		if (RoundedScore[i] == '.')
		{
			OnlyScore[i] = '\0';
			break;
		}
		else
			OnlyScore[i] = RoundedScore[i];
	}
	swprintf(Score, 1024, L"Score: %s", OnlyScore);

	wchar_t KD[1024];
	swprintf(KD, 1024, L"Kill/Death: %d / %d", pawn->PlayerReplicationInfo->Kills, pawn->PlayerReplicationInfo->Deaths);

	wchar_t RoundedPing[1024];
	swprintf(RoundedPing, 1024, L"%f", pawn->PlayerReplicationInfo->ExactPing);
	wchar_t DeleteZeros[1024];
	wchar_t Ping[1024];

	if (RoundedPing[0] == '1')
		swprintf(DeleteZeros, 1024, L"Ping: 1000+");
	else
	{
		for (int i = 0; i < 5; i++)
		{
			RoundedPing[i] = RoundedPing[i + 2];
		}
		RoundedPing[3] = '\0';

		swprintf(DeleteZeros, 1024, L"%s", RoundedPing);

		if (DeleteZeros[0] == '0')
		{
			DeleteZeros[0] = DeleteZeros[1];
			DeleteZeros[1] = DeleteZeros[2];
			DeleteZeros[2] = DeleteZeros[3];
		}

		if (DeleteZeros[0] == '0')
		{
			DeleteZeros[0] = DeleteZeros[1];
			DeleteZeros[1] = DeleteZeros[2];
		}
		
		swprintf(Ping, 1024, L"Ping: %s", DeleteZeros);
	}
		
	int PixBetweenStrings = StrLenY(canvas, PlayerName) + 4;

	DrawBorderText(canvas, PlayerName, canvas->ClipX - 250, 215, Yellow);

	DrawBorderText(canvas, Score, canvas->ClipX - 250, 215 + PixBetweenStrings, Yellow);

	DrawBorderText(canvas, KD, canvas->ClipX - 250, 215 + (PixBetweenStrings * 2), Yellow);

	DrawBorderText(canvas, Ping, canvas->ClipX - 250, 215 + (PixBetweenStrings * 3), Yellow);
}

void ClearSettings()
{
	// REMOVE OLD CONFIG FILES

	wchar_t buffer[MAX_PATH];

	swprintf(buffer, MAX_PATH, L"%s\\Documents\\SF2.ini", userData);
	
	_wremove(buffer);

	swprintf(buffer, MAX_PATH, L"%s\\Documents\\SF2_%d%d.ini", userData, 1, 1);

	_wremove(buffer);

	swprintf(buffer, MAX_PATH, L"%s\\Documents\\SF2_%d%d.ini", userData, 1, 2);

	_wremove(buffer);
}

void SaveSettings()
{
	ofstream outputFile;
	wchar_t buffer[MAX_PATH];
	swprintf(buffer, MAX_PATH, L"%s\\Documents\\SF2_%d%d.ini", userData, HACK_MAJOR_VERSION, HACK_MINOR_VERSION);
	
	outputFile.open(buffer);

	if (!outputFile.is_open())
	{
		return;
	}
	
	//AIMBOT
	{
		outputFile << bEnableAim << endl;
		outputFile << iAimKey << endl;
		outputFile << iAimBy << endl;
		outputFile << iFovAngle << endl;
		outputFile << iHPLimit << endl;
		outputFile << iAimPosition << endl;
		outputFile << iBoneRefreshTime << endl;
		outputFile << bBoneRefreshed << endl;
		outputFile << bAutoFire << endl;
		outputFile << iSmoothAim << endl;
		outputFile << bSilentAim << endl;
		outputFile << bSmartAccuracy << endl;
		outputFile << bHardLock << endl;
	}
	
	//ESP3D
	{
		outputFile << iEnableEsp << endl;
		outputFile << bNameEsp << endl;
		outputFile << bDistanceEsp << endl;
		outputFile << bHealthEsp << endl;
		outputFile << bBoneEsp << endl;
		outputFile << bHeadCircle << endl;
		outputFile << iBoundingBox << endl;
		outputFile << bLaserEsp << endl;
		outputFile << AlienZombie << endl;
		outputFile << bSnapLines << endl;
		outputFile << bGrenadeEsp << endl;
		outputFile << bDeadVisible << endl;
		outputFile << bShowStats << endl;
		outputFile << iEnemyVis << endl;
		outputFile << iEnemyInv << endl;
		outputFile << iTeamVis << endl;
		outputFile << iTeamInv << endl;
	}

	//ESP2D
	{
		outputFile << iEnemyRadar << endl;
		outputFile << iEnemyColor << endl;
		outputFile << iTeamColor << endl;
		outputFile << iBorderColor << endl;
		outputFile << iQuadrantColor << endl;
		outputFile << iBackgroundColor << endl;
		outputFile << iBackgroundOpacity << endl;
		outputFile << iPlayerRadius << endl;
		outputFile << iRadarSize << endl;
		outputFile << RadarLocation.X << endl;
		outputFile << RadarLocation.Y << endl;
	}

	//PLAYER
	{
		outputFile << iCrosshair << endl;
		outputFile << iCrosshairSize << endl;
		outputFile << iUnlAmmo << endl;
		outputFile << bDropWeapon << endl;
		outputFile << bFullAutoWeapon << endl;
		outputFile << bRangeHack << endl;
		outputFile << iBurstFire << endl;
		outputFile << bNoRecoil << endl;
		outputFile << bNoSpread << endl;
		outputFile << iTriggerbot << endl;
		outputFile << iNameStealer << endl;
		outputFile << bNoFlash << endl;
		outputFile << bNoSmoke << endl;
		outputFile << bNoRespawnCost << endl;
		outputFile << iAutoRespawn << endl;
		outputFile << iHpRespawn << endl;
		outputFile << bNoBulletGravity << endl;
		outputFile << bAutoSwitch << endl;
	}

	//MISC
	{
		outputFile << iEnableOpk << endl;
		outputFile << iPickBestPlayer << endl;
		outputFile << iOpkKey << endl;
		outputFile << iOpkDamage << endl;
		outputFile << iOpkBone << endl;
		outputFile << bShotThroughWall << endl;
		outputFile << iBulletPerShot << endl;
		outputFile << bHeroMP << endl;
		outputFile << bHeroDP << endl;
		outputFile << bHeroAP << endl;
		outputFile << bHeroEXP << endl;
		outputFile << iHeroPoints << endl;
		outputFile << iHeroPointsKey << endl;
		outputFile << bOpkHero << endl;
		outputFile << iVirtualJumpValue << endl;
		outputFile << iVirtualJump << endl;
	}

	//SETTINGS
	{
		outputFile << bFPS << endl;
		outputFile << bWatermark << endl;
		outputFile << bMACSpoof << endl;
		
		char *bakNames = cName1;

		for (int i = 0; i < iName1; i++)
		{
			if (bakNames[i] == ' ') bakNames[i] = '^';
		}

		outputFile << bakNames << endl;
		outputFile << iName1 << endl;

		bakNames = cName2;

		for (int i = 0; i < iName2; i++)
		{
			if (bakNames[i] == ' ') bakNames[i] = '^';
		}

		outputFile << bakNames << endl;
		outputFile << iName2 << endl;
	}

	outputFile.close();

	Saved = true;
	bSaveSettings = false;
}

void LoadSettings()
{
	wchar_t buffer[MAX_PATH];
	swprintf(buffer, MAX_PATH, L"%s\\Documents\\SF2_%d%d.ini", userData, HACK_MAJOR_VERSION, HACK_MINOR_VERSION);
	ifstream inputFile(buffer);

	if (!inputFile.is_open())
	{
		return;
	}

	//AIMBOT
	{
		inputFile >> bEnableAim;
		inputFile >> iAimKey;
		inputFile >> iAimBy;
		inputFile >> iFovAngle;
		inputFile >> iHPLimit;
		inputFile >> iAimPosition;
		inputFile >> iBoneRefreshTime;
		inputFile >> bBoneRefreshed;
		inputFile >> bAutoFire;
		inputFile >> iSmoothAim;
		inputFile >> bSilentAim;
		inputFile >> bSmartAccuracy;
		inputFile >> bHardLock;
	}

	//ESP3D
	{
		inputFile >> iEnableEsp;
		inputFile >> bNameEsp;
		inputFile >> bDistanceEsp;
		inputFile >> bHealthEsp;
		inputFile >> bBoneEsp;
		inputFile >> bHeadCircle;
		inputFile >> iBoundingBox;
		inputFile >> bLaserEsp;
		inputFile >> AlienZombie;
		inputFile >> bSnapLines;
		inputFile >> bGrenadeEsp;
		inputFile >> bDeadVisible;
		inputFile >> bShowStats;
		inputFile >> iEnemyVis;
		inputFile >> iEnemyInv;
		inputFile >> iTeamVis;
		inputFile >> iTeamInv;
	}

	//ESP2D
	{
		inputFile >> iEnemyRadar;
		inputFile >> iEnemyColor;
		inputFile >> iTeamColor;
		inputFile >> iBorderColor;
		inputFile >> iQuadrantColor;
		inputFile >> iBackgroundColor;
		inputFile >> iBackgroundOpacity;
		inputFile >> iPlayerRadius;
		inputFile >> iRadarSize;
		inputFile >> RadarLocation.X;
		inputFile >> RadarLocation.Y;
	}

	//PLAYER
	{
		inputFile >> iCrosshair;
		inputFile >> iCrosshairSize;
		inputFile >> iUnlAmmo;
		inputFile >> bDropWeapon;
		inputFile >> bFullAutoWeapon;
		inputFile >> bRangeHack;
		inputFile >> iBurstFire;
		inputFile >> bNoRecoil;
		inputFile >> bNoSpread;
		inputFile >> iTriggerbot;
		inputFile >> iNameStealer;
		inputFile >> bNoFlash;
		inputFile >> bNoSmoke;
		inputFile >> bNoRespawnCost;
		inputFile >> iAutoRespawn;
		inputFile >> iHpRespawn;
		inputFile >> bNoBulletGravity;
		inputFile >> bAutoSwitch;
	}

	//MISC
	{
		inputFile >> iEnableOpk;
		inputFile >> iPickBestPlayer;
		inputFile >> iOpkKey;
		inputFile >> iOpkDamage;
		inputFile >> iOpkBone;
		inputFile >> bShotThroughWall;
		inputFile >> iBulletPerShot;
		inputFile >> bHeroMP;
		inputFile >> bHeroDP;
		inputFile >> bHeroAP;
		inputFile >> bHeroEXP;
		inputFile >> iHeroPoints;
		inputFile >> iHeroPointsKey;
		inputFile >> bOpkHero;
		inputFile >> iVirtualJumpValue;
		inputFile >> iVirtualJump;
	}

	//SETTINGS
	{
		inputFile >> bFPS;
		inputFile >> bWatermark;
		inputFile >> bMACSpoof;

		inputFile >> cName1;
		inputFile >> iName1;
		
		for (int i = 0; i < iName1; i++)
		{
			if (cName1[i] == '^') cName1[i] = ' ';
		}

		inputFile >> cName2;
		inputFile >> iName2;

		for (int i = 0; i < iName2; i++)
		{
			if (cName2[i] == '^') cName2[i] = ' ';
		}

		Name1 = (wchar_t*)getWC(cName1);
		Name2 = (wchar_t*)getWC(cName2);
	}

	Loaded = true;
	bLoadSettings = false;
}

void RestoreDefaultSettings()
{
	//RESTORE DEFAULT SETTINGS
	{
		//AIMBOT
		{
			bEnableAim = false;
			iAimKey = 0;
			iAimBy = 0;
			iFovAngle = 0;
			iHPLimit = 0;
			iAimPosition = 0;
			iBoneRefreshTime = 0;
			bBoneRefreshed = false;
			bAutoFire = false;
			iSmoothAim = 0;
			bSilentAim = false;
			bSmartAccuracy = false;
			bHardLock = false;
		}

		//ESP 3D
		{
			iEnableEsp = 2;
			bNameEsp = false;
			bDistanceEsp = false;
			bHealthEsp = false;
			bBoneEsp = false;
			bHeadCircle = false;
			iBoundingBox = 0;
			bLaserEsp = false;
			AlienZombie = false;
			bSnapLines = false;
			bGrenadeEsp = false;
			bDeadVisible = false;
			bShowStats = false;
			iEnemyVis = 1;
			iEnemyInv = 0;
			iTeamVis = 1;
			iTeamInv = 1;
		}

		//ESP 2D
		{
			iEnemyRadar = 0;
			iEnemyColor = 0;
			iTeamColor = 1;
			iBorderColor = 0;
			iQuadrantColor = 0;
			iBackgroundColor = 0;
			iBackgroundOpacity = 255;
			iPlayerRadius = 0;
			iRadarSize = 100;
		}

		//PLAYER
		{
			iCrosshair = 0;
			iCrosshairSize = 0;
			iUnlAmmo = 0;
			bUnlGrenade = false;
			bDropWeapon = false;
			bFullAutoWeapon = false;
			bRangeHack = false;
			iBurstFire = 0;
			bNoRecoil = false;
			bNoSpread = false;
			iTriggerbot = 0;
			iNameStealer = 0;
			bNoFlash = false;
			bNoSmoke = false;
			bNoRespawnCost = false;
			iAutoRespawn = 0;
			iHpRespawn = 0;
			bNoBulletGravity = false;
			bAutoSwitch = false;
		}

		//SPECIAL
		{
			iEnableOpk = 0;
			iPickBestPlayer = 0;
			iOpkKey = 0;
			iOpkDamage = 0;
			iOpkBone = 0;
			bShotThroughWall = false;
			iBulletPerShot = 0;
			bHeroMP = false;
			bHeroDP = false;
			bHeroAP = false;
			bHeroEXP = false;
			iHeroPoints = 0;
			iHeroPointsKey = 0;
			bOpkHero = false;
			iVirtualJumpValue = 0;
			iVirtualJump = 0;
		}

		//SETTINGS
		{
			bFPS = false;
			bWatermark = false;
			bMACSpoof = false;
		}

	}

	SaveSettings();
	Restored = true;
}

bool bFirstLoad = true;
bool bForcingNoRecoil = true;

bool SpecialKeys(int S_Key) {
	switch (S_Key) {
	case VK_SPACE:
		cout << " ";
		return true;
	case VK_RETURN:
		cout << "\n";
		return true;
	case VK_SHIFT:
		cout << "#SHIFT#";
		return true;
	default:
		return false;
	}
}

void PostRender(UCanvas *canvas)
{
	if (bFirstLoad == true)
	{
		LoadSettings();
		bFirstLoad = false;
	}

	if ((bEnableAim || bSilentAim)
		&& bAutoFire)
	{
		if (!bNoRecoil)
		{
			bForcingNoRecoil = true;
		}

		bNoRecoil = true;
	}
	else if (bForcingNoRecoil)
	{
		bNoRecoil = false;
		bForcingNoRecoil = false;
	}

	if (FindWindowA(NULL, "TeamViewer")
		|| FindWindowA(NULL, "AnyDesk"))
	{
		return;
	}

	if (!canvas) return;
		
	if (bHWNDtaken == false)
	{
		hwnd = FindWindowA("LaunchUnrealUWindowsClient", "Special Force 2");
		bHWNDtaken = true;
	}
		
	if (iPickBestPlayer == 1) iOpkDamage = 0;

	//FPS SHOW
	{
		CurrentTickCount = clock() * 0.001f;
		Fps++;

		if ((CurrentTickCount - LastTickCount) > 1.0f)
		{
			LastTickCount = CurrentTickCount;
			swprintf(FrameRate, 50, L"[ FPS: %d ]", Fps);
			Fps = 0;
		}

		if (bFPS) DrawBorderText(canvas, FrameRate, canvas->ClipX - 5 - (StrLen(canvas, FrameRate)), 11, White);
	}

	//WATERMARK
	{
		if (bWatermark) DrawBorderText(canvas, L"Hack by dano20zombie", (canvas->ClipX / 2) - (StrLen(canvas, L"Hack by dano20zombie")/2), 11, White);
	}

	canvas->CurZ = 1.0f;

	//CLICK CAPTURE
	{
		POINT Mouse;
		GetCursorPos(&Mouse);
		ScreenToClient(hwnd, &Mouse);
		MouseX = Mouse.x;
		MouseY = Mouse.y;
		ClickCapture();
	}

	//Name 1
	{
		CurrentTickName1 = clock() * 0.001f;
		if ((CurrentTickName1 - LastTickName1) > 1.0f && Name1isActive == true)
		{
			bTick1 = !bTick1;
			LastTickName1 = CurrentTickName1;
		}

		if (Name1isActive == false) bTick1 = false;
	}

	//Name 2
	{
		CurrentTickName2 = clock() * 0.001f;
		if ((CurrentTickName2 - LastTickName2) > 1.0f && Name2isActive == true)
		{
			bTick2 = !bTick2;
			LastTickName2 = CurrentTickName2;
		}

		if (Name2isActive == false) bTick2 = false;
	}
		
	//Restore & Save & Load Settings
	{
		//Restore
		CurrentTickRestore = clock() * 0.001f;
		if ((CurrentTickRestore - LastTickRestore) > 5.0f)
		{
			Restored = false;
			if (bRestoreDefaultSettings)
			{
				RestoreDefaultSettings();
				LastTickRestore = CurrentTickRestore;
			}
		}

		//Save
		CurrentTickSave = clock() * 0.001f;
		if ((CurrentTickSave - LastTickSave) > 5.0f)
		{
			Saved = false;
			if (bSaveSettings)
			{
				SaveSettings();
				LastTickSave = CurrentTickSave;
			}
		}

		//Load
		CurrentTickLoad = clock() * 0.001f;
		if ((CurrentTickLoad - LastTickLoad) > 5.0f)
		{
			Loaded = false;
			if (bLoadSettings)
			{
				LoadSettings();
				LastTickLoad = CurrentTickLoad;
			}
		}
	}

	bRestoreDefaultSettings = false;
	bSaveSettings = false;
	bLoadSettings = false;

	//Bone Refresh
	{
		CurrentTickBone = clock() * 0.001f;
		Bone++;
		if ((CurrentTickBone - LastTickBone) > (float)((iBoneRefreshTime * 20)/1000))
		{
			LastTickBone = CurrentTickBone;
			bBoneRefreshed = true;
			Bone = 0;
		}
	}

	//AIM Bone Randomizer
	{
		CurrentTickRandBone = clock() * 0.001f;
		RandBone++;
		if ((CurrentTickRandBone - LastTickRandBone) > 2.5f)
		{
			LastTickRandBone = CurrentTickRandBone;
			bRandomNumChange = true;
			RandBone = 0;
		}
	}

	if (iEnemyRadar == 1) RadarDraw(canvas, iRadarSize + 50);
	
	if (bShowMenu) DrawMenu(canvas);
		
	if (bMoving) AttachRadarToMouse(iRadarSize + 50);
	if (iMoveRadar == 1 && bMoving == false && NewMove == true)
	{
		bMoving = true;
		NewMove = false;
	}
	if (iMoveRadar == 0) NewMove = true;
				
	APawn *pawn;

	if (!PlayerController
		|| !PlayerController->PlayerCamera)
	{
		if (iCrosshair == 1) Crosshair(canvas);
		return;
	}

	//BLOCK INPUT
	if (bShowMenu)
	{
		PlayerController->bIgnoreInput = true;
		PlayerController->bIgnoreLookInput = true;
	}
	else
	{
		PlayerController->bIgnoreInput = false;
		PlayerController->bIgnoreLookInput = false;
	}
	
	if (PlayerController->Pawn && PlayerController->Pawn->Health > 0)
	{
		if (PlayerController->Pawn)
			NameStealer(canvas);

		pawn = PlayerController->Pawn;
		IsMyPawn = true;
	}
	else if (!(PlayerController->Pawn) && PlayerController->ViewTarget != NULL && PlayerController->ViewTarget && PlayerController->ViewTarget->IsA(APawn::StaticClass()))
	{
		if ((APawn*)PlayerController->ViewTarget)
			NameStealer(canvas);

		pawn = ((APawn*)PlayerController->ViewTarget);
		IsMyPawn = false;
	}
	else
	{
		if (iCrosshair == 1) Crosshair(canvas);
		return;
	}

	if (pawn) NameStealer(canvas);
	
	if (iAutoRespawn == 1 && bRespawnKey) AutoRespawn(pawn, true);
	else if (iAutoRespawn == 2) AutoRespawn(pawn, false);
	
	if (!pawn || pawn->Health < 1)
	{
		if (iCrosshair == 1) Crosshair(canvas);
		return;
	}

	cameraLocation = PlayerController->PlayerCamera->Location;
	cameraRotation = PlayerController->PlayerCamera->Rotation;

	ASFPawn *sfpawn = (ASFPawn*)pawn;

	if (bShowStats && IsMyPawn == true && sfpawn && sfpawn->Health > 0) DrawStats(canvas, sfpawn);
	
	if (PlayerController->WorldInfo && PlayerController->WorldInfo->PawnList)
	{
		APawn *target = PlayerController->WorldInfo->PawnList;
		APawn *closedTarget = FindClosedTarget(pawn, target);
		APawn* lowestTargetHP = FindLowestHP(pawn, target);

		while (target)
		{
			if (target != pawn
				&& !target->bDeleteMe)
			{
				if (target
					&& target->Health > 0
					&& target->Weapon
					&& target->Weapon->IsA(ASFWeap_Bullet::StaticClass()))
				{
					target->Weapon->bDropOnDeath = bDropWeapon;
				}
				
				//((ASFPawn*)target)->bLastHitWasHeadShot = true;

				if (bDeadVisible && IsMyPawn == false) ESP(canvas, pawn, target);
				else if (IsMyPawn == true) ESP(canvas, pawn, target);

				if (target->Health > 0 && target->IsAliveAndWell() && target->Mesh && bBoneRefreshed)
				{
					target->Mesh->ForceSkelUpdate();
					target->Mesh->UpdateAnimations();
					target->Mesh->UpdateParentBoneMap();
				}
				if (iEnableOpk == 1 && iOpkKey == 0) OPK(pawn, target);
				else if (iEnableOpk == 1 && iOpkKey == 1 && bOPKKey) OPK(pawn, target);
			}

			if (target == pawn && !target->bDeleteMe && IsMyPawn == false && iEnableOpk == 1 && ((iOpkKey == 0) || (iOpkKey == 1 && bOPKKey)))
				OPK(pawn, target);

			target = target->NextPawn;
		}
		
		if (IsMyPawn == true)
		{
			if (pawn && bNoFlash) NoFlash(pawn);

			if (pawn && bNoSmoke) NoSmoke(pawn);

			if (pawn && iVirtualJump == 1) VirtualJump(sfpawn);
			
			if (bSilentAim)
			{
				if (iAimBy == 2)
				{
					if (lowestTargetHP)
					{
						if (iAimKey == 0 && bRButton)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(lowestTargetHP);
						}
						else if (iAimKey == 1 && bLButton)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(lowestTargetHP);
						}
						else if (iAimKey == 2 && bShiftButton)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(lowestTargetHP);
						}
						else if (iAimKey == 3 && bAltButton)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(lowestTargetHP);
						}
						else if (iAimKey == 4)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(lowestTargetHP);
						}
						else Enemy = false;
					}
					else Enemy = false;
				}
				else
				{
					if (closedTarget)
					{
						if (iAimKey == 0 && bRButton)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(closedTarget);
						}
						else if (iAimKey == 1 && bLButton)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(closedTarget);
						}
						else if (iAimKey == 2 && bShiftButton)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(closedTarget);
						}
						else if (iAimKey == 3 && bAltButton)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(closedTarget);
						}
						else if (iAimKey == 4)
						{
							Enemy = true;
							SilentAimRot = CalcSilentAimRot(closedTarget);
						}
						else Enemy = false;
					}
					else Enemy = false;
				}
			}
			else Enemy = false;

			if (pawn->Weapon)
			{
				AWeapon *weapon = (AWeapon*)pawn->Weapon;

				if (bEnableAim)
				{
					if (iAimBy == 2)
					{
						if (lowestTargetHP)
						{
							if (iAimKey == 0 && bRButton)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, lowestTargetHP);
							}
							else if (iAimKey == 1 && bLButton)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, lowestTargetHP);
							}
							else if (iAimKey == 2 && bShiftButton)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, lowestTargetHP);
							}
							else if (iAimKey == 3 && bAltButton)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, lowestTargetHP);
							}
							else if (iAimKey == 4)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, lowestTargetHP);
							}
							else
								PlayerController->bIgnoreLookInput = false;
						}
						else
							PlayerController->bIgnoreLookInput = false;
					}
					else
					{
						if (closedTarget)
						{
							if (iAimKey == 0 && bRButton)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, closedTarget);
							}
							else if (iAimKey == 1 && bLButton)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, closedTarget);
							}
							else if (iAimKey == 2 && bShiftButton)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, closedTarget);
							}
							else if (iAimKey == 3 && bAltButton)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, closedTarget);
							}
							else if (iAimKey == 4)
							{
								if (bHardLock) PlayerController->bIgnoreLookInput = true;
								AutoAim(canvas, weapon, closedTarget);
							}
							else
								PlayerController->bIgnoreLookInput = false;
						}
						else
							PlayerController->bIgnoreLookInput = false;
					}
				}
			}
		}
	}
	
	if (!pawn->Weapon)
	{
		if (iCrosshair == 1) Crosshair(canvas);
		return;
	}

	AWeapon *weapon = (AWeapon*)pawn->Weapon;
	ASFWeapon *sfweapon = (ASFWeapon*)weapon;

	if (weapon) bBullet = weapon->IsA(ASFWeap_Bullet::StaticClass());
	
	if (bGravityEnabled == true || bNoBulletGravity) NoBulletsGravity(canvas, pawn);

	if (bGrenadeEsp) DrawProjectiles(canvas, pawn);
	
	if (IsMyPawn == true)
	{
		if (weapon && bBullet) UnlimitedAmmo(pawn);

		RangeHack(pawn);

		if (weapon && bFullAutoWeapon && bBullet) ((ASFWeapon*)pawn->Weapon)->bIsAutomatic = true;

		if (sfweapon && iBurstFire == 1 && bBullet) BurstFire(sfpawn, sfweapon);

		if (sfpawn && sfweapon && bNoSpread && bBullet) NoSpread(sfpawn, sfweapon);

		if (sfpawn && iTriggerbot == 1) TriggerBot(sfpawn);

		if (pawn && weapon && bBullet) NoRecoil(bNoRecoil);

		if (pawn && weapon && bShotThroughWall && bBullet) SuperBullet(weapon);

		if (pawn && weapon && iBulletPerShot >= 0 && bBullet) DamageHack(weapon);
	}

	if (iCrosshair == 1) Crosshair(canvas);

	if (PlayerController->IsA(ASFWarriorPlayerController::StaticClass()))
	{
		ASFWarriorPlayerController *WarriorPlayerController = (ASFWarriorPlayerController*)PlayerController;

		if (iHeroPointsKey == 0 && bHeroKey1 && FlagHero == 0)
		{
			if (bHeroAP) WarriorPlayerController->ServerAddModeAP(70);
			if (bHeroMP) WarriorPlayerController->ServerAddModeMP(70);
			if (bHeroDP) WarriorPlayerController->ServerAddModeDP(70);
			if (bHeroEXP) WarriorPlayerController->ServerAddModeExp(70);

			FlagHero = 1;
		}
		if (iHeroPointsKey == 1 && bHeroKey2 && FlagHero == 0)
		{
			if (bHeroAP) WarriorPlayerController->ServerAddModeAP(70);
			if (bHeroMP) WarriorPlayerController->ServerAddModeMP(70);
			if (bHeroDP) WarriorPlayerController->ServerAddModeDP(70);
			if (bHeroEXP) WarriorPlayerController->ServerAddModeExp(70);

			FlagHero = 1;
		}

		if (iHeroPointsKey == 0 && bHeroKey1 && FlagHero == 1) FlagHero = 0;
		if (iHeroPointsKey == 1 && bHeroKey2 && FlagHero == 1) FlagHero = 0;
	}
}

#endif