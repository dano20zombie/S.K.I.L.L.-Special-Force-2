#include "SpecialForce2.hpp"

UObject *pGlobalObject;
void *pGlobalParms;
void *pGlobalResult;

char *szName;

bool bSilentAimStarted = false;

#define IS_FUNCTION(c, oo, o, n) (pFunction->Class->Name.Index == c && pFunction->Outer->Outer->Name.Index == oo && pFunction->Outer->Name.Index == o && pFunction->Name.Index == n)

#define EXCEPTION_CONTINUABLE 0

DWORD dwNullptrExceptionHandler = NULL;

LONG WINAPI MyVectorExceptionFilter(PEXCEPTION_POINTERS pException)
{
	if (pException->ExceptionRecord->ExceptionFlags == EXCEPTION_CONTINUABLE
		&& pException->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION)
	{
		MEMORY_BASIC_INFORMATION mbi = {};
		if (VirtualQuery(pException->ExceptionRecord->ExceptionAddress, &mbi, sizeof(mbi))
			&& mbi.AllocationProtect == PAGE_EXECUTE_READWRITE)
		{
			pException->ContextRecord->Eip = dwNullptrExceptionHandler;
			return EXCEPTION_CONTINUE_EXECUTION;
		}
	}

	return EXCEPTION_CONTINUE_SEARCH;
}

void __fastcall hkProcessEvent(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	if (!dwNullptrExceptionHandler)
	{
		__asm push eax
		__asm mov eax, catchHere
		__asm mov dwNullptrExceptionHandler, eax
		__asm pop eax

		AddVectoredExceptionHandler(1, MyVectorExceptionFilter);
	}

	try
	{
		szName = pFunction->GetFullName();

		/*
			std::cout
				<< std::hex
				<< "c = " << pFunction->Class->Name.Index << std::endl
				<< "oo = " << pFunction->Outer->Outer->Name.Index << std::endl
				<< "o = " << pFunction->Outer->Name.Index << std::endl
				<< "n = " << pFunction->Name.Index << std::endl
				<< std::dec;
		*/

		//Function SFGame.SFProj_HG_Gas.ExplodeTimeOut
		if (IS_FUNCTION(0x0067, 0x194f, 0x1a9a, 0xa946))
		{
			if (bNoSmoke) return;
		}

		#pragma region PostRender
		//Function Engine.GameViewportClient.PostRender
		if (IS_FUNCTION(0x0067, 0x0015, 0x0FBA, 0x1F1B))
		{
			if (pParms)
				PostRender((((UGameViewportClient_eventPostRender_Parms*)(pParms))->Canvas));
		}
		#pragma endregion

		#pragma region AutoSwitch
		//.StopFire
		if (pFunction->Name.Index == 0x626E)
		{
			if (pObject
				&& IsMyPawn
				&& bAutoSwitch
				&& PlayerController
				&& PlayerController->Pawn
				&& PlayerController->Pawn->Weapon
				&& PlayerController->Pawn->Health > 0)
			{
				AutoQuickScope((ASFWeapon*)PlayerController->Pawn->Weapon);
			}
			bSilentAimStarted = false;
		}
		#pragma endregion

		#pragma region PlayerTick
		//.PlayerTick
		if (pFunction->Name.Index == 0x1F0E)
		{
			PlayerController = reinterpret_cast<ASFPlayerController*>(pObject);
		}
		#pragma endregion

		#pragma region PlayerDestroyed
		//Function Engine.PlayerController.Destroyed
		//Function Engine.Controller.Destroyed
		//Function SFGame.SFPlayerController.Destroyed

		if (IS_FUNCTION(0x0067, 0x0015, 0xFAE, 0x12C)
			|| IS_FUNCTION(0x0067, 0x0015, 0xFAC, 0x12C)
			|| IS_FUNCTION(0x0067, 0x194F, 0x1AFA, 0x12C))
		{
			if (pObject == PlayerController) {
				PlayerController = nullptr;
			}
		}
		#pragma endregion

		#pragma region SilentAim
		//Function SFGame.SFPlayerController.StartFire
		if (IS_FUNCTION(0x0067, 0x194F, 0x1AFA, 0x61C2))
		{
			if (pObject
				&& Enemy
				&& bBullet
				&& IsMyPawn
				&& PlayerController
				&& PlayerController->Pawn
				&& pObject == PlayerController
				&& PlayerController->Pawn->Weapon
				&& PlayerController->Pawn->IsAliveAndWell()
				&& ((ASFPlayerController*)pObject)
				&& ((ASFPlayerController*)pObject)->Pawn
				&& ((ASFPlayerController*)pObject)->Pawn->Weapon
				&& ((ASFPlayerController*)pObject)->Pawn->Weapon->IsA(ASFWeap_Bullet::StaticClass()))
			{
				ASFWeap_Bullet* Weap = (ASFWeap_Bullet*)((ASFPlayerController*)pObject)->Pawn->Weapon;
				if (Weap->IsSprintPossible()) AfterShot = true;
			}

			if (pObject
				&& Enemy
				&& bBullet
				&& IsMyPawn
				&& bSilentAim
				&& PlayerController
				&& PlayerController->Pawn
				&& pObject == PlayerController
				&& PlayerController->Pawn->Weapon
				&& PlayerController->Pawn->Health > 0
				&& PlayerController->Pawn->IsAliveAndWell()
				&& ((ASFPlayerController*)pObject)
				&& ((ASFPlayerController*)pObject)->Pawn
				&& ((ASFPlayerController*)pObject)->Pawn->Weapon
				&& ((ASFPlayerController*)pObject)->Pawn->Weapon->IsA(ASFWeap_Bullet::StaticClass()))
			{
				ASFWeap_Bullet* Weap = (ASFWeap_Bullet*)((ASFPlayerController*)pObject)->Pawn->Weapon;
				if (Weap) Weap->SGPelletCount = 1;

				bSilentAimStarted = true;
			}
		}
		//Function SFGame.SFPawn.GetBaseAimRotation
		else if (IS_FUNCTION(0x0067, 0x194F, 0x1CD2, 0x1E11))
		{
			if (pParms
				&& Enemy
				&& pObject
				&& IsMyPawn
				&& bSilentAim
				&& PlayerController
				&& PlayerController->Pawn
				&& ((ASFPawn*)pObject)->Weapon
				&& PlayerController->Pawn->Weapon
				&& pObject == PlayerController->Pawn
				&& PlayerController->Pawn->Health > 0
				&& PlayerController->Pawn->IsAliveAndWell()
				&& ((ASFPawn*)pObject)->Weapon->IsA(ASFWeap_Bullet::StaticClass())
				&& PlayerController->Pawn->Weapon->IsA(ASFWeap_Bullet::StaticClass()))
			{
				ASFWeap_Bullet* Weap = (ASFWeap_Bullet*)PlayerController->Pawn->Weapon;
				if (Weap) Weap->SGPelletCount = 1;

				((ASFPawn_eventGetBaseAimRotation_Parms*)pParms)->ReturnValue.Pitch = SilentAimRot.Pitch;
				((ASFPawn_eventGetBaseAimRotation_Parms*)pParms)->ReturnValue.Yaw = SilentAimRot.Yaw;

				if (bAutoFire
					&& ((ASFWeap_Bullet*)PlayerController->Pawn->Weapon)->AmmoCountInMgz > 0)
				{
					AutoFire();
				}

				return;
			}
		}
		else if (bSilentAimStarted)
		{
			if (Enemy
				&& bBullet
				&& IsMyPawn
				&& bSilentAim
				&& PlayerController
				&& PlayerController->Pawn
				&& PlayerController->Pawn->Weapon
				&& PlayerController->Pawn->Health > 0
				&& PlayerController->Pawn->IsAliveAndWell()
				&& PlayerController->Pawn->Weapon->IsA(ASFWeap_Bullet::StaticClass()))
			{
				ASFWeap_Bullet* Weap = (ASFWeap_Bullet*)PlayerController->Pawn->Weapon;
				if (Weap) Weap->SGPelletCount = 1;
			}
		}
		#pragma endregion
	}
	catch (...)
	{
	}
	
catchHere:
	oProcessEvent(pObject, pFunction, pParms, pResult);
}

bool isUpper()
{
	if ((bCapsButton && bShiftButton)
		|| (!bCapsButton && !bShiftButton))
		return false;

	else if ((bCapsButton && !bShiftButton)
		|| (!bCapsButton && bShiftButton))
		return true;
}

LPVOID VMTHook(TArray< UObject* >* GObjObjects, char* ObjectName, int index)
{
	DWORD * vtable = NULL;
	for (DWORD i = 0x0; i < GObjObjects->Num(); i++)
	{
		if (!GObjObjects->Data[i]) { continue; }
		if (!strcmp(GObjObjects->Data[i]->GetFullName(), ObjectName))
			vtable = (DWORD*)*(DWORD*)GObjObjects->Data[i];
	}

	if (!vtable) return NULL;

	uintptr_t dwVTable = *((uintptr_t*)vtable);
	uintptr_t * dwEntry = ((uintptr_t*)vtable + index);
	uintptr_t dwOrig = *((uintptr_t*)dwEntry);

	DWORD dwOldProtection;
	VirtualProtect((LPVOID)dwEntry, sizeof(dwEntry), PAGE_EXECUTE_READWRITE, &dwOldProtection);
	*((uintptr_t*)dwEntry) = (uintptr_t)hkProcessEvent;
	VirtualProtect((LPVOID)dwEntry, sizeof(dwEntry), dwOldProtection, &dwOldProtection);

	return (LPVOID)dwOrig;
}

void OnAttach()
{
	srand(time(0));
	
	Sleep(500);
	HANDLE hToken;
	OpenProcessToken(GetCurrentProcess(), TOKEN_READ, &hToken);
	GetUserProfileDirectoryW(hToken, userData, &userDataSize);
	Sleep(500);

	CloseHandle(hToken);

	ClearSettings();

	TArray< UObject* >* GObjObjects = (TArray< UObject* >*) GObjects;

	while (GObjObjects->Count < 138000)
	{
		Sleep(100);
	}

	oProcessEvent = (tProcessEvent)VMTHook(GObjObjects, "SFGameViewportClient Transient.SFGameEngine.SFGameViewportClient", ProcessEvent_Index);
	VMTHook(GObjObjects, "SFPlayerController SFGame.Default__SFPlayerController", ProcessEvent_Index);
	VMTHook(GObjObjects, "Controller Engine.Default__Controller", ProcessEvent_Index);
	VMTHook(GObjObjects, "PlayerController Engine.Default__PlayerController", ProcessEvent_Index);
	VMTHook(GObjObjects, "SFPawn SFGame.Default__SFPawn", ProcessEvent_Index);
	VMTHook(GObjObjects, "Pawn Engine.Default__Pawn", ProcessEvent_Index);
	VMTHook(GObjObjects, "SFPawn_Player SFGame.Default__SFPawn_Player", ProcessEvent_Index);
	VMTHook(GObjObjects, "SFWeapon SFGame.Default__SFWeapon", ProcessEvent_Index);
	VMTHook(GObjObjects, "SFWeap_InstantHit SFGame.Default__SFWeap_InstantHit", ProcessEvent_Index);
	VMTHook(GObjObjects, "SFWeap_Bullet SFGame.Default__SFWeap_Bullet", ProcessEvent_Index);

	int k = 0;
	int keycurrent = 0;

	while(true)
	{
		if (hwnd == GetForegroundWindow())
		{
			#pragma region KeyDetection
			if (bMoving && GetAsyncKeyState(VK_LBUTTON))
			{
				NewMove = true;
				bMoving = false;
				iMoveRadar = 0;
			}

			if (GetAsyncKeyState(0x4C)) bOPKKey = true;
			else bOPKKey = false;
			if (GetAsyncKeyState(0x4D)) bRespawnKey = true;
			else bRespawnKey = false;
			if (GetAsyncKeyState(0x4B)) bHeroKey1 = true;
			else bHeroKey1 = false;
			if (GetAsyncKeyState(0x50)) bHeroKey2 = true;
			else bHeroKey2 = false;


			if (GetAsyncKeyState(VK_RBUTTON)) bRButton = true;
			else bRButton = false;
			if (GetAsyncKeyState(VK_LBUTTON)) bLButton = true;
			else bLButton = false;
			if (GetAsyncKeyState(VK_SHIFT)) bShiftButton = true;
			else bShiftButton = false;
			if ((GetKeyState(VK_CAPITAL) & 0x0001) != 0) bCapsButton = true;
			else bCapsButton = false;
			if (GetAsyncKeyState(VK_LMENU)) bAltButton = true;
			else bAltButton = false;
			#pragma endregion	

			#pragma region Custom Names
			if (Name1isActive || Name2isActive && (iName1 < 21 || iName2 < 21))
			{
				for (int b = 48; b <= 90; b++)
				{
					int i = b;

					if (b == 58)
						i = ' ';
					else if (b == 59)
						i = VK_BACK;

					if (isalnum((char)i) || ((char)i) == ' ' || i == VK_BACK)
					{
						if ((GetAsyncKeyState(i) & 0x8000) && (k == 0))
						{
							k = 1;
							keycurrent = i;
							char newLetter;

							if (isUpper() == true)
								newLetter = toupper((char)i);
							else
								newLetter = tolower((char)i);

							if (i == VK_BACK)
							{
								if (Name1isActive && iName1 < 22 && iName1 > 0)
								{
									cName1[iName1 - 1] = '\0';
									iName1--;
								}
								else if (Name2isActive && iName2 < 22 && iName2 > 0)
								{
									cName2[iName2 - 1] = '\0';
									iName2--;
								}
							}
							else
							{
								if (Name1isActive && iName1 < 21)
								{
									cName1[iName1] = newLetter;
									iName1++;
								}
								else if (Name2isActive && iName2 < 21)
								{
									cName2[iName2] = newLetter;
									iName2++;
								}
							}
						}
						else if (GetAsyncKeyState(i) == 0)
						{
							if (i == keycurrent)
							{
								k = 0;
							}
						}
					}
				}
			}
			#pragma endregion
		}

		Sleep(50);
	}

}

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpvReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hInstance);
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, NULL, NULL, NULL);
	}

	return TRUE;
}