/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPC_structs.h
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

// ScriptStruct OnlineSubsystemPC.Packet.Data
// 0x0804
struct FData
{
	unsigned char                                      data_size[ 0x2 ];                                 		// 0x0000 (0x0002) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Command[ 0x2 ];                                   		// 0x0002 (0x0002) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      Buffer[ 0x800 ];                                  		// 0x0004 (0x0800) [0x0000000000002000]              ( CPF_Transient )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif