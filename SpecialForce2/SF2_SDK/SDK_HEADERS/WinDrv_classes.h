/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.WindowsClient
// 0x018C (0x01DC - 0x0050)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[ 0x14C ];                           		// 0x0050 (0x014C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x019C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x2C ];                            		// 0x01A0 (0x002C) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x01CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData02[ 0xC ];                             		// 0x01D0 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2935 ];

		return pClassPointer;
	};

};

UClass* UWindowsClient::pClassPointer = NULL;

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0050 - 0x0050)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2939 ];

		return pClassPointer;
	};

};

UClass* UXnaForceFeedbackManager::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif