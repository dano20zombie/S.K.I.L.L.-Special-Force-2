/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_functions.h
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

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxMoviePlayer*         Movie                          ( CPF_Parm )
// class UGFxEvent_FSCommand*     Event                          ( CPF_Parm )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxFSCmdHandler::eventFSCommand ( class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, struct FString Cmd, struct FString Arg )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = (UFunction*) UObject::GObjObjects()->Data[ 40865 ];

	UGFxFSCmdHandler_eventFSCommand_Parms FSCommand_Parms;
	FSCommand_Parms.Movie = Movie;
	FSCommand_Parms.Event = Event;
	memcpy ( &FSCommand_Parms.Cmd, &Cmd, 0xC );
	memcpy ( &FSCommand_Parms.Arg, &Arg, 0xC );

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	return FSCommand_Parms.ReturnValue;
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::CloseAllMoviePlayers ( )
{
	static UFunction* pFnCloseAllMoviePlayers = NULL;

	if ( ! pFnCloseAllMoviePlayers )
		pFnCloseAllMoviePlayers = (UFunction*) UObject::GObjObjects()->Data[ 40890 ];

	UGFxInteraction_execCloseAllMoviePlayers_Parms CloseAllMoviePlayers_Parms;

	pFnCloseAllMoviePlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseAllMoviePlayers, &CloseAllMoviePlayers_Parms, NULL );

	pFnCloseAllMoviePlayers->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifySplitscreenLayoutChanged ( )
{
	static UFunction* pFnNotifySplitscreenLayoutChanged = NULL;

	if ( ! pFnNotifySplitscreenLayoutChanged )
		pFnNotifySplitscreenLayoutChanged = (UFunction*) UObject::GObjObjects()->Data[ 40889 ];

	UGFxInteraction_execNotifySplitscreenLayoutChanged_Parms NotifySplitscreenLayoutChanged_Parms;

	pFnNotifySplitscreenLayoutChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifySplitscreenLayoutChanged, &NotifySplitscreenLayoutChanged_Parms, NULL );

	pFnNotifySplitscreenLayoutChanged->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            PlayerIndex                    ( CPF_Parm )
// class ULocalPlayer*            RemovedPlayer                  ( CPF_Parm )

void UGFxInteraction::NotifyPlayerRemoved ( int PlayerIndex, class ULocalPlayer* RemovedPlayer )
{
	static UFunction* pFnNotifyPlayerRemoved = NULL;

	if ( ! pFnNotifyPlayerRemoved )
		pFnNotifyPlayerRemoved = (UFunction*) UObject::GObjObjects()->Data[ 40886 ];

	UGFxInteraction_execNotifyPlayerRemoved_Parms NotifyPlayerRemoved_Parms;
	NotifyPlayerRemoved_Parms.PlayerIndex = PlayerIndex;
	NotifyPlayerRemoved_Parms.RemovedPlayer = RemovedPlayer;

	pFnNotifyPlayerRemoved->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyPlayerRemoved, &NotifyPlayerRemoved_Parms, NULL );

	pFnNotifyPlayerRemoved->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            PlayerIndex                    ( CPF_Parm )
// class ULocalPlayer*            AddedPlayer                    ( CPF_Parm )

void UGFxInteraction::NotifyPlayerAdded ( int PlayerIndex, class ULocalPlayer* AddedPlayer )
{
	static UFunction* pFnNotifyPlayerAdded = NULL;

	if ( ! pFnNotifyPlayerAdded )
		pFnNotifyPlayerAdded = (UFunction*) UObject::GObjObjects()->Data[ 40883 ];

	UGFxInteraction_execNotifyPlayerAdded_Parms NotifyPlayerAdded_Parms;
	NotifyPlayerAdded_Parms.PlayerIndex = PlayerIndex;
	NotifyPlayerAdded_Parms.AddedPlayer = AddedPlayer;

	pFnNotifyPlayerAdded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyPlayerAdded, &NotifyPlayerAdded_Parms, NULL );

	pFnNotifyPlayerAdded->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 40882 ];

	UGFxInteraction_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	pFnNotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	pFnNotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxMoviePlayer*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie ( int ControllerId )
{
	static UFunction* pFnGetFocusMovie = NULL;

	if ( ! pFnGetFocusMovie )
		pFnGetFocusMovie = (UFunction*) UObject::GObjObjects()->Data[ 40879 ];

	UGFxInteraction_execGetFocusMovie_Parms GetFocusMovie_Parms;
	GetFocusMovie_Parms.ControllerId = ControllerId;

	pFnGetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFocusMovie, &GetFocusMovie_Parms, NULL );

	pFnGetFocusMovie->FunctionFlags |= 0x400;

	return GetFocusMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.RemoveExternalInterfaceListen
// [0x00020002] 
// Parameters infos:
// class UObject*                 Obj                            ( CPF_Parm )

void UGFxMoviePlayer::RemoveExternalInterfaceListen ( class UObject* Obj )
{
	static UFunction* pFnRemoveExternalInterfaceListen = NULL;

	if ( ! pFnRemoveExternalInterfaceListen )
		pFnRemoveExternalInterfaceListen = (UFunction*) UObject::GObjObjects()->Data[ 40177 ];

	UGFxMoviePlayer_execRemoveExternalInterfaceListen_Parms RemoveExternalInterfaceListen_Parms;
	RemoveExternalInterfaceListen_Parms.Obj = Obj;

	this->ProcessEvent ( pFnRemoveExternalInterfaceListen, &RemoveExternalInterfaceListen_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.AddExternalInterfaceListen
// [0x00020002] 
// Parameters infos:
// class UObject*                 Obj                            ( CPF_Parm )

void UGFxMoviePlayer::AddExternalInterfaceListen ( class UObject* Obj )
{
	static UFunction* pFnAddExternalInterfaceListen = NULL;

	if ( ! pFnAddExternalInterfaceListen )
		pFnAddExternalInterfaceListen = (UFunction*) UObject::GObjObjects()->Data[ 40178 ];

	UGFxMoviePlayer_execAddExternalInterfaceListen_Parms AddExternalInterfaceListen_Parms;
	AddExternalInterfaceListen_Parms.Obj = Obj;

	this->ProcessEvent ( pFnAddExternalInterfaceListen, &AddExternalInterfaceListen_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::UpdateSplitscreenLayout ( )
{
	static UFunction* pFnUpdateSplitscreenLayout = NULL;

	if ( ! pFnUpdateSplitscreenLayout )
		pFnUpdateSplitscreenLayout = (UFunction*) UObject::GObjObjects()->Data[ 40181 ];

	UGFxMoviePlayer_execUpdateSplitscreenLayout_Parms UpdateSplitscreenLayout_Parms;

	pFnUpdateSplitscreenLayout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSplitscreenLayout, &UpdateSplitscreenLayout_Parms, NULL );

	pFnUpdateSplitscreenLayout->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020000] 
// Parameters infos:
// unsigned long                  bRemoveEffect                  ( CPF_Parm )

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect ( unsigned long bRemoveEffect )
{
	static UFunction* pFnApplyPriorityVisibilityEffect = NULL;

	if ( ! pFnApplyPriorityVisibilityEffect )
		pFnApplyPriorityVisibilityEffect = (UFunction*) UObject::GObjObjects()->Data[ 40183 ];

	UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Parms ApplyPriorityVisibilityEffect_Parms;
	ApplyPriorityVisibilityEffect_Parms.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent ( pFnApplyPriorityVisibilityEffect, &ApplyPriorityVisibilityEffect_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020000] 
// Parameters infos:
// unsigned long                  bRemoveEffect                  ( CPF_Parm )

void UGFxMoviePlayer::ApplyPriorityBlurEffect ( unsigned long bRemoveEffect )
{
	static UFunction* pFnApplyPriorityBlurEffect = NULL;

	if ( ! pFnApplyPriorityBlurEffect )
		pFnApplyPriorityBlurEffect = (UFunction*) UObject::GObjObjects()->Data[ 40184 ];

	UGFxMoviePlayer_execApplyPriorityBlurEffect_Parms ApplyPriorityBlurEffect_Parms;
	ApplyPriorityBlurEffect_Parms.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent ( pFnApplyPriorityBlurEffect, &ApplyPriorityBlurEffect_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bRequestedBlurState            ( CPF_Parm )
// unsigned long                  bRequestedHiddenState          ( CPF_Parm )

void UGFxMoviePlayer::eventApplyPriorityEffect ( unsigned long bRequestedBlurState, unsigned long bRequestedHiddenState )
{
	static UFunction* pFnApplyPriorityEffect = NULL;

	if ( ! pFnApplyPriorityEffect )
		pFnApplyPriorityEffect = (UFunction*) UObject::GObjObjects()->Data[ 40186 ];

	UGFxMoviePlayer_eventApplyPriorityEffect_Parms ApplyPriorityEffect_Parms;
	ApplyPriorityEffect_Parms.bRequestedBlurState = bRequestedBlurState;
	ApplyPriorityEffect_Parms.bRequestedHiddenState = bRequestedHiddenState;

	this->ProcessEvent ( pFnApplyPriorityEffect, &ApplyPriorityEffect_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024002] 
// Parameters infos:
// struct FName                   EventName                      ( CPF_Parm )
// struct FName                   SoundThemeName                 ( CPF_OptionalParm | CPF_Parm )

void UGFxMoviePlayer::PlaySoundFromTheme ( struct FName EventName, struct FName SoundThemeName )
{
	static UFunction* pFnPlaySoundFromTheme = NULL;

	if ( ! pFnPlaySoundFromTheme )
		pFnPlaySoundFromTheme = (UFunction*) UObject::GObjObjects()->Data[ 40188 ];

	UGFxMoviePlayer_execPlaySoundFromTheme_Parms PlaySoundFromTheme_Parms;
	memcpy ( &PlaySoundFromTheme_Parms.EventName, &EventName, 0x8 );
	memcpy ( &PlaySoundFromTheme_Parms.SoundThemeName, &SoundThemeName, 0x8 );

	this->ProcessEvent ( pFnPlaySoundFromTheme, &PlaySoundFromTheme_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            LocalPlayerIndex               ( CPF_Parm )

void UGFxMoviePlayer::eventOnFocusLost ( int LocalPlayerIndex )
{
	static UFunction* pFnOnFocusLost = NULL;

	if ( ! pFnOnFocusLost )
		pFnOnFocusLost = (UFunction*) UObject::GObjObjects()->Data[ 40195 ];

	UGFxMoviePlayer_eventOnFocusLost_Parms OnFocusLost_Parms;
	OnFocusLost_Parms.LocalPlayerIndex = LocalPlayerIndex;

	this->ProcessEvent ( pFnOnFocusLost, &OnFocusLost_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            LocalPlayerIndex               ( CPF_Parm )

void UGFxMoviePlayer::eventOnFocusGained ( int LocalPlayerIndex )
{
	static UFunction* pFnOnFocusGained = NULL;

	if ( ! pFnOnFocusGained )
		pFnOnFocusGained = (UFunction*) UObject::GObjObjects()->Data[ 40203 ];

	UGFxMoviePlayer_eventOnFocusGained_Parms OnFocusGained_Parms;
	OnFocusGained_Parms.LocalPlayerIndex = LocalPlayerIndex;

	this->ProcessEvent ( pFnOnFocusGained, &OnFocusGained_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::eventConsoleCommand ( struct FString Command )
{
	static UFunction* pFnConsoleCommand = NULL;

	if ( ! pFnConsoleCommand )
		pFnConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 40205 ];

	UGFxMoviePlayer_eventConsoleCommand_Parms ConsoleCommand_Parms;
	memcpy ( &ConsoleCommand_Parms.Command, &Command, 0xC );

	this->ProcessEvent ( pFnConsoleCommand, &ConsoleCommand_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APlayerController* UGFxMoviePlayer::eventGetPC ( )
{
	static UFunction* pFnGetPC = NULL;

	if ( ! pFnGetPC )
		pFnGetPC = (UFunction*) UObject::GObjObjects()->Data[ 40207 ];

	UGFxMoviePlayer_eventGetPC_Parms GetPC_Parms;

	this->ProcessEvent ( pFnGetPC, &GetPC_Parms, NULL );

	return GetPC_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class ULocalPlayer*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ULocalPlayer* UGFxMoviePlayer::eventGetLP ( )
{
	static UFunction* pFnGetLP = NULL;

	if ( ! pFnGetLP )
		pFnGetLP = (UFunction*) UObject::GObjObjects()->Data[ 40210 ];

	UGFxMoviePlayer_eventGetLP_Parms GetLP_Parms;

	this->ProcessEvent ( pFnGetLP, &GetLP_Parms, NULL );

	return GetLP_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024002] 
// Parameters infos:
// class ULocalPlayer*            LocPlay                        ( CPF_OptionalParm | CPF_Parm )

void UGFxMoviePlayer::Init ( class ULocalPlayer* LocPlay )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 40213 ];

	UGFxMoviePlayer_execInit_Parms Init_Parms;
	Init_Parms.LocPlay = LocPlay;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.SetDefaultIME
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetDefaultIME ( )
{
	static UFunction* pFnSetDefaultIME = NULL;

	if ( ! pFnSetDefaultIME )
		pFnSetDefaultIME = (UFunction*) UObject::GObjObjects()->Data[ 40217 ];

	UGFxMoviePlayer_execSetDefaultIME_Parms SetDefaultIME_Parms;

	pFnSetDefaultIME->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDefaultIME, &SetDefaultIME_Parms, NULL );

	pFnSetDefaultIME->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.IsEnableDefaultIME
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxMoviePlayer::eventIsEnableDefaultIME ( )
{
	static UFunction* pFnIsEnableDefaultIME = NULL;

	if ( ! pFnIsEnableDefaultIME )
		pFnIsEnableDefaultIME = (UFunction*) UObject::GObjObjects()->Data[ 40222 ];

	UGFxMoviePlayer_eventIsEnableDefaultIME_Parms IsEnableDefaultIME_Parms;

	this->ProcessEvent ( pFnIsEnableDefaultIME, &IsEnableDefaultIME_Parms, NULL );

	return IsEnableDefaultIME_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.IsInDefaultIME
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 strIME                         ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::eventIsInDefaultIME ( struct FString strIME )
{
	static UFunction* pFnIsInDefaultIME = NULL;

	if ( ! pFnIsInDefaultIME )
		pFnIsInDefaultIME = (UFunction*) UObject::GObjObjects()->Data[ 40223 ];

	UGFxMoviePlayer_eventIsInDefaultIME_Parms IsInDefaultIME_Parms;
	memcpy ( &IsInDefaultIME_Parms.strIME, &strIME, 0xC );

	this->ProcessEvent ( pFnIsInDefaultIME, &IsInDefaultIME_Parms, NULL );

	return IsInDefaultIME_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.IMETextInputUpdated
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventIMETextInputUpdated ( )
{
	static UFunction* pFnIMETextInputUpdated = NULL;

	if ( ! pFnIMETextInputUpdated )
		pFnIMETextInputUpdated = (UFunction*) UObject::GObjObjects()->Data[ 40225 ];

	UGFxMoviePlayer_eventIMETextInputUpdated_Parms IMETextInputUpdated_Parms;

	this->ProcessEvent ( pFnIMETextInputUpdated, &IMETextInputUpdated_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              WidgetToBind                   ( CPF_Parm )
// struct FName                   Path                           ( CPF_Parm )

void UGFxMoviePlayer::SetWidgetPathBinding ( class UGFxObject* WidgetToBind, struct FName Path )
{
	static UFunction* pFnSetWidgetPathBinding = NULL;

	if ( ! pFnSetWidgetPathBinding )
		pFnSetWidgetPathBinding = (UFunction*) UObject::GObjObjects()->Data[ 40228 ];

	UGFxMoviePlayer_execSetWidgetPathBinding_Parms SetWidgetPathBinding_Parms;
	SetWidgetPathBinding_Parms.WidgetToBind = WidgetToBind;
	memcpy ( &SetWidgetPathBinding_Parms.Path, &Path, 0x8 );

	pFnSetWidgetPathBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWidgetPathBinding, &SetWidgetPathBinding_Parms, NULL );

	pFnSetWidgetPathBinding->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.RestoreDevice
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventRestoreDevice ( )
{
	static UFunction* pFnRestoreDevice = NULL;

	if ( ! pFnRestoreDevice )
		pFnRestoreDevice = (UFunction*) UObject::GObjObjects()->Data[ 40229 ];

	UGFxMoviePlayer_eventRestoreDevice_Parms RestoreDevice_Parms;

	this->ProcessEvent ( pFnRestoreDevice, &RestoreDevice_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventPostWidgetInit ( )
{
	static UFunction* pFnPostWidgetInit = NULL;

	if ( ! pFnPostWidgetInit )
		pFnPostWidgetInit = (UFunction*) UObject::GObjObjects()->Data[ 40232 ];

	UGFxMoviePlayer_eventPostWidgetInit_Parms PostWidgetInit_Parms;

	this->ProcessEvent ( pFnPostWidgetInit, &PostWidgetInit_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UGFxMoviePlayer::eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = (UFunction*) UObject::GObjObjects()->Data[ 40233 ];

	UGFxMoviePlayer_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy ( &WidgetUnloaded_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetUnloaded_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetUnloaded_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UGFxMoviePlayer::eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->Data[ 40234 ];

	UGFxMoviePlayer_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy ( &WidgetInitialized_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetInitialized_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetInitialized_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );

	return WidgetInitialized_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

class UGFxObject* UGFxMoviePlayer::ActionScriptConstructor ( struct FString ClassName )
{
	static UFunction* pFnActionScriptConstructor = NULL;

	if ( ! pFnActionScriptConstructor )
		pFnActionScriptConstructor = (UFunction*) UObject::GObjObjects()->Data[ 40239 ];

	UGFxMoviePlayer_execActionScriptConstructor_Parms ActionScriptConstructor_Parms;
	memcpy ( &ActionScriptConstructor_Parms.ClassName, &ClassName, 0xC );

	pFnActionScriptConstructor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptConstructor, &ActionScriptConstructor_Parms, NULL );

	pFnActionScriptConstructor->FunctionFlags |= 0x400;

	return ActionScriptConstructor_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

class UGFxObject* UGFxMoviePlayer::ActionScriptObject ( struct FString Path )
{
	static UFunction* pFnActionScriptObject = NULL;

	if ( ! pFnActionScriptObject )
		pFnActionScriptObject = (UFunction*) UObject::GObjObjects()->Data[ 40244 ];

	UGFxMoviePlayer_execActionScriptObject_Parms ActionScriptObject_Parms;
	memcpy ( &ActionScriptObject_Parms.Path, &Path, 0xC );

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptObject, &ActionScriptObject_Parms, NULL );

	pFnActionScriptObject->FunctionFlags |= 0x400;

	return ActionScriptObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxMoviePlayer::ActionScriptString ( struct FString Path )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = (UFunction*) UObject::GObjObjects()->Data[ 40247 ];

	UGFxMoviePlayer_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy ( &ActionScriptString_Parms.Path, &Path, 0xC );

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

float UGFxMoviePlayer::ActionScriptFloat ( struct FString Path )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = (UFunction*) UObject::GObjObjects()->Data[ 40250 ];

	UGFxMoviePlayer_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy ( &ActionScriptFloat_Parms.Path, &Path, 0xC );

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

int UGFxMoviePlayer::ActionScriptInt ( struct FString Path )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = (UFunction*) UObject::GObjObjects()->Data[ 40253 ];

	UGFxMoviePlayer_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy ( &ActionScriptInt_Parms.Path, &Path, 0xC );

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::ActionScriptVoid ( struct FString Path )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = (UFunction*) UObject::GObjObjects()->Data[ 40256 ];

	UGFxMoviePlayer_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy ( &ActionScriptVoid_Parms.Path, &Path, 0xC );

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FASValue >      args                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxMoviePlayer::Invoke ( struct FString method, TArray< struct FASValue > args )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = (UFunction*) UObject::GObjObjects()->Data[ 40259 ];

	UGFxMoviePlayer_execInvoke_Parms Invoke_Parms;
	memcpy ( &Invoke_Parms.method, &method, 0xC );
	memcpy ( &Invoke_Parms.args, &args, 0xC );

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;

	return Invoke_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              Object                         ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::ActionScriptSetFunction ( class UGFxObject* Object, struct FString Member )
{
	static UFunction* pFnActionScriptSetFunction = NULL;

	if ( ! pFnActionScriptSetFunction )
		pFnActionScriptSetFunction = (UFunction*) UObject::GObjObjects()->Data[ 40261 ];

	UGFxMoviePlayer_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;
	ActionScriptSetFunction_Parms.Object = Object;
	memcpy ( &ActionScriptSetFunction_Parms.Member, &Member, 0xC );

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, NULL );

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGFxObject* UGFxMoviePlayer::CreateArray ( )
{
	static UFunction* pFnCreateArray = NULL;

	if ( ! pFnCreateArray )
		pFnCreateArray = (UFunction*) UObject::GObjObjects()->Data[ 40274 ];

	UGFxMoviePlayer_execCreateArray_Parms CreateArray_Parms;

	pFnCreateArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateArray, &CreateArray_Parms, NULL );

	pFnCreateArray->FunctionFlags |= 0x400;

	return CreateArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ASClass                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FASValue >      args                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

class UGFxObject* UGFxMoviePlayer::CreateObject ( struct FString ASClass, class UClass* Type, TArray< struct FASValue > args )
{
	static UFunction* pFnCreateObject = NULL;

	if ( ! pFnCreateObject )
		pFnCreateObject = (UFunction*) UObject::GObjObjects()->Data[ 40277 ];

	UGFxMoviePlayer_execCreateObject_Parms CreateObject_Parms;
	memcpy ( &CreateObject_Parms.ASClass, &ASClass, 0xC );
	CreateObject_Parms.Type = Type;
	memcpy ( &CreateObject_Parms.args, &args, 0xC );

	pFnCreateObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateObject, &CreateObject_Parms, NULL );

	pFnCreateObject->FunctionFlags |= 0x400;

	return CreateObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FString >       Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::SetVariableStringArray ( struct FString Path, int Index, TArray< struct FString > Arg )
{
	static UFunction* pFnSetVariableStringArray = NULL;

	if ( ! pFnSetVariableStringArray )
		pFnSetVariableStringArray = (UFunction*) UObject::GObjObjects()->Data[ 40279 ];

	UGFxMoviePlayer_execSetVariableStringArray_Parms SetVariableStringArray_Parms;
	memcpy ( &SetVariableStringArray_Parms.Path, &Path, 0xC );
	SetVariableStringArray_Parms.Index = Index;
	memcpy ( &SetVariableStringArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableStringArray, &SetVariableStringArray_Parms, NULL );

	pFnSetVariableStringArray->FunctionFlags |= 0x400;

	return SetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< float >                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::SetVariableFloatArray ( struct FString Path, int Index, TArray< float > Arg )
{
	static UFunction* pFnSetVariableFloatArray = NULL;

	if ( ! pFnSetVariableFloatArray )
		pFnSetVariableFloatArray = (UFunction*) UObject::GObjObjects()->Data[ 40285 ];

	UGFxMoviePlayer_execSetVariableFloatArray_Parms SetVariableFloatArray_Parms;
	memcpy ( &SetVariableFloatArray_Parms.Path, &Path, 0xC );
	SetVariableFloatArray_Parms.Index = Index;
	memcpy ( &SetVariableFloatArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableFloatArray, &SetVariableFloatArray_Parms, NULL );

	pFnSetVariableFloatArray->FunctionFlags |= 0x400;

	return SetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< int >                  Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::SetVariableIntArray ( struct FString Path, int Index, TArray< int > Arg )
{
	static UFunction* pFnSetVariableIntArray = NULL;

	if ( ! pFnSetVariableIntArray )
		pFnSetVariableIntArray = (UFunction*) UObject::GObjObjects()->Data[ 40291 ];

	UGFxMoviePlayer_execSetVariableIntArray_Parms SetVariableIntArray_Parms;
	memcpy ( &SetVariableIntArray_Parms.Path, &Path, 0xC );
	SetVariableIntArray_Parms.Index = Index;
	memcpy ( &SetVariableIntArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableIntArray, &SetVariableIntArray_Parms, NULL );

	pFnSetVariableIntArray->FunctionFlags |= 0x400;

	return SetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FASValue >      Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::SetVariableArray ( struct FString Path, int Index, TArray< struct FASValue > Arg )
{
	static UFunction* pFnSetVariableArray = NULL;

	if ( ! pFnSetVariableArray )
		pFnSetVariableArray = (UFunction*) UObject::GObjObjects()->Data[ 40297 ];

	UGFxMoviePlayer_execSetVariableArray_Parms SetVariableArray_Parms;
	memcpy ( &SetVariableArray_Parms.Path, &Path, 0xC );
	SetVariableArray_Parms.Index = Index;
	memcpy ( &SetVariableArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableArray, &SetVariableArray_Parms, NULL );

	pFnSetVariableArray->FunctionFlags |= 0x400;

	return SetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FString >       Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableStringArray ( struct FString Path, int Index, TArray< struct FString >* Arg )
{
	static UFunction* pFnGetVariableStringArray = NULL;

	if ( ! pFnGetVariableStringArray )
		pFnGetVariableStringArray = (UFunction*) UObject::GObjObjects()->Data[ 40303 ];

	UGFxMoviePlayer_execGetVariableStringArray_Parms GetVariableStringArray_Parms;
	memcpy ( &GetVariableStringArray_Parms.Path, &Path, 0xC );
	GetVariableStringArray_Parms.Index = Index;

	pFnGetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableStringArray, &GetVariableStringArray_Parms, NULL );

	pFnGetVariableStringArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableStringArray_Parms.Arg, 0xC );

	return GetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< float >                Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableFloatArray ( struct FString Path, int Index, TArray< float >* Arg )
{
	static UFunction* pFnGetVariableFloatArray = NULL;

	if ( ! pFnGetVariableFloatArray )
		pFnGetVariableFloatArray = (UFunction*) UObject::GObjObjects()->Data[ 40309 ];

	UGFxMoviePlayer_execGetVariableFloatArray_Parms GetVariableFloatArray_Parms;
	memcpy ( &GetVariableFloatArray_Parms.Path, &Path, 0xC );
	GetVariableFloatArray_Parms.Index = Index;

	pFnGetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableFloatArray, &GetVariableFloatArray_Parms, NULL );

	pFnGetVariableFloatArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableFloatArray_Parms.Arg, 0xC );

	return GetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< int >                  Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableIntArray ( struct FString Path, int Index, TArray< int >* Arg )
{
	static UFunction* pFnGetVariableIntArray = NULL;

	if ( ! pFnGetVariableIntArray )
		pFnGetVariableIntArray = (UFunction*) UObject::GObjObjects()->Data[ 40315 ];

	UGFxMoviePlayer_execGetVariableIntArray_Parms GetVariableIntArray_Parms;
	memcpy ( &GetVariableIntArray_Parms.Path, &Path, 0xC );
	GetVariableIntArray_Parms.Index = Index;

	pFnGetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableIntArray, &GetVariableIntArray_Parms, NULL );

	pFnGetVariableIntArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableIntArray_Parms.Arg, 0xC );

	return GetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FASValue >      Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableArray ( struct FString Path, int Index, TArray< struct FASValue >* Arg )
{
	static UFunction* pFnGetVariableArray = NULL;

	if ( ! pFnGetVariableArray )
		pFnGetVariableArray = (UFunction*) UObject::GObjObjects()->Data[ 40321 ];

	UGFxMoviePlayer_execGetVariableArray_Parms GetVariableArray_Parms;
	memcpy ( &GetVariableArray_Parms.Path, &Path, 0xC );
	GetVariableArray_Parms.Index = Index;

	pFnGetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableArray, &GetVariableArray_Parms, NULL );

	pFnGetVariableArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableArray_Parms.Arg, 0xC );

	return GetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              Object                         ( CPF_Parm )

void UGFxMoviePlayer::SetVariableObject ( struct FString Path, class UGFxObject* Object )
{
	static UFunction* pFnSetVariableObject = NULL;

	if ( ! pFnSetVariableObject )
		pFnSetVariableObject = (UFunction*) UObject::GObjObjects()->Data[ 40327 ];

	UGFxMoviePlayer_execSetVariableObject_Parms SetVariableObject_Parms;
	memcpy ( &SetVariableObject_Parms.Path, &Path, 0xC );
	SetVariableObject_Parms.Object = Object;

	pFnSetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableObject, &SetVariableObject_Parms, NULL );

	pFnSetVariableObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::SetVariableString ( struct FString Path, struct FString S )
{
	static UFunction* pFnSetVariableString = NULL;

	if ( ! pFnSetVariableString )
		pFnSetVariableString = (UFunction*) UObject::GObjObjects()->Data[ 40333 ];

	UGFxMoviePlayer_execSetVariableString_Parms SetVariableString_Parms;
	memcpy ( &SetVariableString_Parms.Path, &Path, 0xC );
	memcpy ( &SetVariableString_Parms.S, &S, 0xC );

	pFnSetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableString, &SetVariableString_Parms, NULL );

	pFnSetVariableString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

void UGFxMoviePlayer::SetVariableInt ( struct FString Path, int I )
{
	static UFunction* pFnSetVariableInt = NULL;

	if ( ! pFnSetVariableInt )
		pFnSetVariableInt = (UFunction*) UObject::GObjObjects()->Data[ 40336 ];

	UGFxMoviePlayer_execSetVariableInt_Parms SetVariableInt_Parms;
	memcpy ( &SetVariableInt_Parms.Path, &Path, 0xC );
	SetVariableInt_Parms.I = I;

	pFnSetVariableInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableInt, &SetVariableInt_Parms, NULL );

	pFnSetVariableInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxMoviePlayer::SetVariableNumber ( struct FString Path, float F )
{
	static UFunction* pFnSetVariableNumber = NULL;

	if ( ! pFnSetVariableNumber )
		pFnSetVariableNumber = (UFunction*) UObject::GObjObjects()->Data[ 40339 ];

	UGFxMoviePlayer_execSetVariableNumber_Parms SetVariableNumber_Parms;
	memcpy ( &SetVariableNumber_Parms.Path, &Path, 0xC );
	SetVariableNumber_Parms.F = F;

	pFnSetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableNumber, &SetVariableNumber_Parms, NULL );

	pFnSetVariableNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxMoviePlayer::SetVariableBool ( struct FString Path, unsigned long B )
{
	static UFunction* pFnSetVariableBool = NULL;

	if ( ! pFnSetVariableBool )
		pFnSetVariableBool = (UFunction*) UObject::GObjObjects()->Data[ 40342 ];

	UGFxMoviePlayer_execSetVariableBool_Parms SetVariableBool_Parms;
	memcpy ( &SetVariableBool_Parms.Path, &Path, 0xC );
	SetVariableBool_Parms.B = B;

	pFnSetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableBool, &SetVariableBool_Parms, NULL );

	pFnSetVariableBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::SetVariable ( struct FString Path, struct FASValue Arg )
{
	static UFunction* pFnSetVariable = NULL;

	if ( ! pFnSetVariable )
		pFnSetVariable = (UFunction*) UObject::GObjObjects()->Data[ 40345 ];

	UGFxMoviePlayer_execSetVariable_Parms SetVariable_Parms;
	memcpy ( &SetVariable_Parms.Path, &Path, 0xC );
	memcpy ( &SetVariable_Parms.Arg, &Arg, 0x1C );

	pFnSetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariable, &SetVariable_Parms, NULL );

	pFnSetVariable->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxMoviePlayer::GetVariableObject ( struct FString Path, class UClass* Type )
{
	static UFunction* pFnGetVariableObject = NULL;

	if ( ! pFnGetVariableObject )
		pFnGetVariableObject = (UFunction*) UObject::GObjObjects()->Data[ 40348 ];

	UGFxMoviePlayer_execGetVariableObject_Parms GetVariableObject_Parms;
	memcpy ( &GetVariableObject_Parms.Path, &Path, 0xC );
	GetVariableObject_Parms.Type = Type;

	pFnGetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableObject, &GetVariableObject_Parms, NULL );

	pFnGetVariableObject->FunctionFlags |= 0x400;

	return GetVariableObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxMoviePlayer::GetVariableString ( struct FString Path )
{
	static UFunction* pFnGetVariableString = NULL;

	if ( ! pFnGetVariableString )
		pFnGetVariableString = (UFunction*) UObject::GObjObjects()->Data[ 40351 ];

	UGFxMoviePlayer_execGetVariableString_Parms GetVariableString_Parms;
	memcpy ( &GetVariableString_Parms.Path, &Path, 0xC );

	pFnGetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableString, &GetVariableString_Parms, NULL );

	pFnGetVariableString->FunctionFlags |= 0x400;

	return GetVariableString_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

int UGFxMoviePlayer::GetVariableInt ( struct FString Path )
{
	static UFunction* pFnGetVariableInt = NULL;

	if ( ! pFnGetVariableInt )
		pFnGetVariableInt = (UFunction*) UObject::GObjObjects()->Data[ 40355 ];

	UGFxMoviePlayer_execGetVariableInt_Parms GetVariableInt_Parms;
	memcpy ( &GetVariableInt_Parms.Path, &Path, 0xC );

	pFnGetVariableInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableInt, &GetVariableInt_Parms, NULL );

	pFnGetVariableInt->FunctionFlags |= 0x400;

	return GetVariableInt_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

float UGFxMoviePlayer::GetVariableNumber ( struct FString Path )
{
	static UFunction* pFnGetVariableNumber = NULL;

	if ( ! pFnGetVariableNumber )
		pFnGetVariableNumber = (UFunction*) UObject::GObjObjects()->Data[ 40358 ];

	UGFxMoviePlayer_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy ( &GetVariableNumber_Parms.Path, &Path, 0xC );

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableNumber, &GetVariableNumber_Parms, NULL );

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableBool ( struct FString Path )
{
	static UFunction* pFnGetVariableBool = NULL;

	if ( ! pFnGetVariableBool )
		pFnGetVariableBool = (UFunction*) UObject::GObjObjects()->Data[ 40361 ];

	UGFxMoviePlayer_execGetVariableBool_Parms GetVariableBool_Parms;
	memcpy ( &GetVariableBool_Parms.Path, &Path, 0xC );

	pFnGetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableBool, &GetVariableBool_Parms, NULL );

	pFnGetVariableBool->FunctionFlags |= 0x400;

	return GetVariableBool_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxMoviePlayer::GetVariable ( struct FString Path )
{
	static UFunction* pFnGetVariable = NULL;

	if ( ! pFnGetVariable )
		pFnGetVariable = (UFunction*) UObject::GObjObjects()->Data[ 40364 ];

	UGFxMoviePlayer_execGetVariable_Parms GetVariable_Parms;
	memcpy ( &GetVariable_Parms.Path, &Path, 0xC );

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariable, &GetVariable_Parms, NULL );

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UGFxMoviePlayer::GetAVMVersion ( )
{
	static UFunction* pFnGetAVMVersion = NULL;

	if ( ! pFnGetAVMVersion )
		pFnGetAVMVersion = (UFunction*) UObject::GObjObjects()->Data[ 40367 ];

	UGFxMoviePlayer_execGetAVMVersion_Parms GetAVMVersion_Parms;

	pFnGetAVMVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAVMVersion, &GetAVMVersion_Parms, NULL );

	pFnGetAVMVersion->FunctionFlags |= 0x400;

	return GetAVMVersion_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UGFxMoviePlayer::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 40370 ];

	UGFxMoviePlayer_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  capturekeysonly                ( CPF_Parm )

void UGFxMoviePlayer::FlushPlayerInput ( unsigned long capturekeysonly )
{
	static UFunction* pFnFlushPlayerInput = NULL;

	if ( ! pFnFlushPlayerInput )
		pFnFlushPlayerInput = (UFunction*) UObject::GObjObjects()->Data[ 40372 ];

	UGFxMoviePlayer_execFlushPlayerInput_Parms FlushPlayerInput_Parms;
	FlushPlayerInput_Parms.capturekeysonly = capturekeysonly;

	pFnFlushPlayerInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushPlayerInput, &FlushPlayerInput_Parms, NULL );

	pFnFlushPlayerInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ClearFocusIgnoreKeys ( )
{
	static UFunction* pFnClearFocusIgnoreKeys = NULL;

	if ( ! pFnClearFocusIgnoreKeys )
		pFnClearFocusIgnoreKeys = (UFunction*) UObject::GObjObjects()->Data[ 40377 ];

	UGFxMoviePlayer_execClearFocusIgnoreKeys_Parms ClearFocusIgnoreKeys_Parms;

	pFnClearFocusIgnoreKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Parms, NULL );

	pFnClearFocusIgnoreKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )

void UGFxMoviePlayer::AddFocusIgnoreKey ( struct FName Key )
{
	static UFunction* pFnAddFocusIgnoreKey = NULL;

	if ( ! pFnAddFocusIgnoreKey )
		pFnAddFocusIgnoreKey = (UFunction*) UObject::GObjObjects()->Data[ 40379 ];

	UGFxMoviePlayer_execAddFocusIgnoreKey_Parms AddFocusIgnoreKey_Parms;
	memcpy ( &AddFocusIgnoreKey_Parms.Key, &Key, 0x8 );

	pFnAddFocusIgnoreKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Parms, NULL );

	pFnAddFocusIgnoreKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ClearCaptureKeys ( )
{
	static UFunction* pFnClearCaptureKeys = NULL;

	if ( ! pFnClearCaptureKeys )
		pFnClearCaptureKeys = (UFunction*) UObject::GObjObjects()->Data[ 40380 ];

	UGFxMoviePlayer_execClearCaptureKeys_Parms ClearCaptureKeys_Parms;

	pFnClearCaptureKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCaptureKeys, &ClearCaptureKeys_Parms, NULL );

	pFnClearCaptureKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )

void UGFxMoviePlayer::AddCaptureKey ( struct FName Key )
{
	static UFunction* pFnAddCaptureKey = NULL;

	if ( ! pFnAddCaptureKey )
		pFnAddCaptureKey = (UFunction*) UObject::GObjObjects()->Data[ 40382 ];

	UGFxMoviePlayer_execAddCaptureKey_Parms AddCaptureKey_Parms;
	memcpy ( &AddCaptureKey_Parms.Key, &Key, 0x8 );

	pFnAddCaptureKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddCaptureKey, &AddCaptureKey_Parms, NULL );

	pFnAddCaptureKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bCanReceiveInput               ( CPF_Parm )

void UGFxMoviePlayer::SetMovieCanReceiveInput ( unsigned long bCanReceiveInput )
{
	static UFunction* pFnSetMovieCanReceiveInput = NULL;

	if ( ! pFnSetMovieCanReceiveInput )
		pFnSetMovieCanReceiveInput = (UFunction*) UObject::GObjObjects()->Data[ 40383 ];

	UGFxMoviePlayer_execSetMovieCanReceiveInput_Parms SetMovieCanReceiveInput_Parms;
	SetMovieCanReceiveInput_Parms.bCanReceiveInput = bCanReceiveInput;

	pFnSetMovieCanReceiveInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMovieCanReceiveInput, &SetMovieCanReceiveInput_Parms, NULL );

	pFnSetMovieCanReceiveInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bCanReceiveFocus               ( CPF_Parm )

void UGFxMoviePlayer::SetMovieCanReceiveFocus ( unsigned long bCanReceiveFocus )
{
	static UFunction* pFnSetMovieCanReceiveFocus = NULL;

	if ( ! pFnSetMovieCanReceiveFocus )
		pFnSetMovieCanReceiveFocus = (UFunction*) UObject::GObjObjects()->Data[ 40385 ];

	UGFxMoviePlayer_execSetMovieCanReceiveFocus_Parms SetMovieCanReceiveFocus_Parms;
	SetMovieCanReceiveFocus_Parms.bCanReceiveFocus = bCanReceiveFocus;

	pFnSetMovieCanReceiveFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMovieCanReceiveFocus, &SetMovieCanReceiveFocus_Parms, NULL );

	pFnSetMovieCanReceiveFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetFocus
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  CaptureInput                   ( CPF_Parm )
// unsigned long                  Focus                          ( CPF_OptionalParm | CPF_Parm )

void UGFxMoviePlayer::SetFocus ( unsigned long CaptureInput, unsigned long Focus )
{
	static UFunction* pFnSetFocus = NULL;

	if ( ! pFnSetFocus )
		pFnSetFocus = (UFunction*) UObject::GObjObjects()->Data[ 40387 ];

	UGFxMoviePlayer_execSetFocus_Parms SetFocus_Parms;
	SetFocus_Parms.CaptureInput = CaptureInput;
	SetFocus_Parms.Focus = Focus;

	pFnSetFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFocus, &SetFocus_Parms, NULL );

	pFnSetFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 matPersp                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGFxMoviePlayer::SetPerspective3D ( struct FMatrix* matPersp )
{
	static UFunction* pFnSetPerspective3D = NULL;

	if ( ! pFnSetPerspective3D )
		pFnSetPerspective3D = (UFunction*) UObject::GObjObjects()->Data[ 40389 ];

	UGFxMoviePlayer_execSetPerspective3D_Parms SetPerspective3D_Parms;

	pFnSetPerspective3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPerspective3D, &SetPerspective3D_Parms, NULL );

	pFnSetPerspective3D->FunctionFlags |= 0x400;

	if ( matPersp )
		memcpy ( matPersp, &SetPerspective3D_Parms.matPersp, 0x40 );
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 matView                        ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGFxMoviePlayer::SetView3D ( struct FMatrix* matView )
{
	static UFunction* pFnSetView3D = NULL;

	if ( ! pFnSetView3D )
		pFnSetView3D = (UFunction*) UObject::GObjObjects()->Data[ 40392 ];

	UGFxMoviePlayer_execSetView3D_Parms SetView3D_Parms;

	pFnSetView3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetView3D, &SetView3D_Parms, NULL );

	pFnSetView3D->FunctionFlags |= 0x400;

	if ( matView )
		memcpy ( matView, &SetView3D_Parms.matView, 0x40 );
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          x0                             ( CPF_Parm | CPF_OutParm )
// float                          y0                             ( CPF_Parm | CPF_OutParm )
// float                          X1                             ( CPF_Parm | CPF_OutParm )
// float                          Y1                             ( CPF_Parm | CPF_OutParm )

void UGFxMoviePlayer::GetVisibleFrameRect ( float* x0, float* y0, float* X1, float* Y1 )
{
	static UFunction* pFnGetVisibleFrameRect = NULL;

	if ( ! pFnGetVisibleFrameRect )
		pFnGetVisibleFrameRect = (UFunction*) UObject::GObjObjects()->Data[ 40394 ];

	UGFxMoviePlayer_execGetVisibleFrameRect_Parms GetVisibleFrameRect_Parms;

	pFnGetVisibleFrameRect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVisibleFrameRect, &GetVisibleFrameRect_Parms, NULL );

	pFnGetVisibleFrameRect->FunctionFlags |= 0x400;

	if ( x0 )
		*x0 = GetVisibleFrameRect_Parms.x0;

	if ( y0 )
		*y0 = GetVisibleFrameRect_Parms.y0;

	if ( X1 )
		*X1 = GetVisibleFrameRect_Parms.X1;

	if ( Y1 )
		*Y1 = GetVisibleFrameRect_Parms.Y1;
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  A                              ( CPF_Parm )

void UGFxMoviePlayer::SetAlignment ( unsigned char A )
{
	static UFunction* pFnSetAlignment = NULL;

	if ( ! pFnSetAlignment )
		pFnSetAlignment = (UFunction*) UObject::GObjObjects()->Data[ 40396 ];

	UGFxMoviePlayer_execSetAlignment_Parms SetAlignment_Parms;
	SetAlignment_Parms.A = A;

	pFnSetAlignment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAlignment, &SetAlignment_Parms, NULL );

	pFnSetAlignment->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  SM                             ( CPF_Parm )

void UGFxMoviePlayer::SetViewScaleMode ( unsigned char SM )
{
	static UFunction* pFnSetViewScaleMode = NULL;

	if ( ! pFnSetViewScaleMode )
		pFnSetViewScaleMode = (UFunction*) UObject::GObjObjects()->Data[ 40401 ];

	UGFxMoviePlayer_execSetViewScaleMode_Parms SetViewScaleMode_Parms;
	SetViewScaleMode_Parms.SM = SM;

	pFnSetViewScaleMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewScaleMode, &SetViewScaleMode_Parms, NULL );

	pFnSetViewScaleMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// int                            Width                          ( CPF_Parm )
// int                            Height                         ( CPF_Parm )

void UGFxMoviePlayer::SetViewport ( int X, int Y, int Width, int Height )
{
	static UFunction* pFnSetViewport = NULL;

	if ( ! pFnSetViewport )
		pFnSetViewport = (UFunction*) UObject::GObjObjects()->Data[ 40405 ];

	UGFxMoviePlayer_execSetViewport_Parms SetViewport_Parms;
	SetViewport_Parms.X = X;
	SetViewport_Parms.Y = Y;
	SetViewport_Parms.Width = Width;
	SetViewport_Parms.Height = Height;

	pFnSetViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewport, &SetViewport_Parms, NULL );

	pFnSetViewport->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameViewportClient*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient ( )
{
	static UFunction* pFnGetGameViewportClient = NULL;

	if ( ! pFnGetGameViewportClient )
		pFnGetGameViewportClient = (UFunction*) UObject::GObjObjects()->Data[ 40407 ];

	UGFxMoviePlayer_execGetGameViewportClient_Parms GetGameViewportClient_Parms;

	pFnGetGameViewportClient->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameViewportClient, &GetGameViewportClient_Parms, NULL );

	pFnGetGameViewportClient->FunctionFlags |= 0x400;

	return GetGameViewportClient_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  NewPriority                    ( CPF_Parm )

void UGFxMoviePlayer::SetPriority ( unsigned char NewPriority )
{
	static UFunction* pFnSetPriority = NULL;

	if ( ! pFnSetPriority )
		pFnSetPriority = (UFunction*) UObject::GObjObjects()->Data[ 40412 ];

	UGFxMoviePlayer_execSetPriority_Parms SetPriority_Parms;
	SetPriority_Parms.NewPriority = NewPriority;

	pFnSetPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPriority, &SetPriority_Parms, NULL );

	pFnSetPriority->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Resource                       ( CPF_Parm | CPF_NeedCtorLink )
// class UTexture*                Texture                        ( CPF_Parm )

bool UGFxMoviePlayer::SetExternalTexture ( struct FString Resource, class UTexture* Texture )
{
	static UFunction* pFnSetExternalTexture = NULL;

	if ( ! pFnSetExternalTexture )
		pFnSetExternalTexture = (UFunction*) UObject::GObjObjects()->Data[ 40414 ];

	UGFxMoviePlayer_execSetExternalTexture_Parms SetExternalTexture_Parms;
	memcpy ( &SetExternalTexture_Parms.Resource, &Resource, 0xC );
	SetExternalTexture_Parms.Texture = Texture;

	pFnSetExternalTexture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetExternalTexture, &SetExternalTexture_Parms, NULL );

	pFnSetExternalTexture->FunctionFlags |= 0x400;

	return SetExternalTexture_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020002] 
// Parameters infos:
// class UObject*                 H                              ( CPF_Parm )

void UGFxMoviePlayer::SetExternalInterface ( class UObject* H )
{
	static UFunction* pFnSetExternalInterface = NULL;

	if ( ! pFnSetExternalInterface )
		pFnSetExternalInterface = (UFunction*) UObject::GObjObjects()->Data[ 40416 ];

	UGFxMoviePlayer_execSetExternalInterface_Parms SetExternalInterface_Parms;
	SetExternalInterface_Parms.H = H;

	this->ProcessEvent ( pFnSetExternalInterface, &SetExternalInterface_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Mode                           ( CPF_Parm )

void UGFxMoviePlayer::SetTimingMode ( unsigned char Mode )
{
	static UFunction* pFnSetTimingMode = NULL;

	if ( ! pFnSetTimingMode )
		pFnSetTimingMode = (UFunction*) UObject::GObjObjects()->Data[ 40420 ];

	UGFxMoviePlayer_execSetTimingMode_Parms SetTimingMode_Parms;
	SetTimingMode_Parms.Mode = Mode;

	pFnSetTimingMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTimingMode, &SetTimingMode_Parms, NULL );

	pFnSetTimingMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020002] 
// Parameters infos:
// class USwfMovie*               Data                           ( CPF_Parm )

void UGFxMoviePlayer::SetMovieInfo ( class USwfMovie* Data )
{
	static UFunction* pFnSetMovieInfo = NULL;

	if ( ! pFnSetMovieInfo )
		pFnSetMovieInfo = (UFunction*) UObject::GObjObjects()->Data[ 40423 ];

	UGFxMoviePlayer_execSetMovieInfo_Parms SetMovieInfo_Parms;
	SetMovieInfo_Parms.Data = Data;

	this->ProcessEvent ( pFnSetMovieInfo, &SetMovieInfo_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventConditionalClearPause ( )
{
	static UFunction* pFnConditionalClearPause = NULL;

	if ( ! pFnConditionalClearPause )
		pFnConditionalClearPause = (UFunction*) UObject::GObjObjects()->Data[ 40426 ];

	UGFxMoviePlayer_eventConditionalClearPause_Parms ConditionalClearPause_Parms;

	this->ProcessEvent ( pFnConditionalClearPause, &ConditionalClearPause_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventOnCleanup ( )
{
	static UFunction* pFnOnCleanup = NULL;

	if ( ! pFnOnCleanup )
		pFnOnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 40428 ];

	UGFxMoviePlayer_eventOnCleanup_Parms OnCleanup_Parms;

	this->ProcessEvent ( pFnOnCleanup, &OnCleanup_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 40431 ];

	UGFxMoviePlayer_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  Unload                         ( CPF_OptionalParm | CPF_Parm )

void UGFxMoviePlayer::Close ( unsigned long Unload )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = (UFunction*) UObject::GObjObjects()->Data[ 40432 ];

	UGFxMoviePlayer_execClose_Parms Close_Parms;
	Close_Parms.Unload = Unload;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPausePlayback                 ( CPF_OptionalParm | CPF_Parm )

void UGFxMoviePlayer::SetPause ( unsigned long bPausePlayback )
{
	static UFunction* pFnSetPause = NULL;

	if ( ! pFnSetPause )
		pFnSetPause = (UFunction*) UObject::GObjObjects()->Data[ 40433 ];

	UGFxMoviePlayer_execSetPause_Parms SetPause_Parms;
	SetPause_Parms.bPausePlayback = bPausePlayback;

	pFnSetPause->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPause, &SetPause_Parms, NULL );

	pFnSetPause->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGFxMoviePlayer::OnPostAdvance ( float DeltaTime )
{
	static UFunction* pFnOnPostAdvance = NULL;

	if ( ! pFnOnPostAdvance )
		pFnOnPostAdvance = (UFunction*) UObject::GObjObjects()->Data[ 40435 ];

	UGFxMoviePlayer_execOnPostAdvance_Parms OnPostAdvance_Parms;
	OnPostAdvance_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnPostAdvance, &OnPostAdvance_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGFxMoviePlayer::PostAdvance ( float DeltaTime )
{
	static UFunction* pFnPostAdvance = NULL;

	if ( ! pFnPostAdvance )
		pFnPostAdvance = (UFunction*) UObject::GObjObjects()->Data[ 40437 ];

	UGFxMoviePlayer_execPostAdvance_Parms PostAdvance_Parms;
	PostAdvance_Parms.DeltaTime = DeltaTime;

	pFnPostAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostAdvance, &PostAdvance_Parms, NULL );

	pFnPostAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          Time                           ( CPF_Parm )

void UGFxMoviePlayer::Advance ( float Time )
{
	static UFunction* pFnAdvance = NULL;

	if ( ! pFnAdvance )
		pFnAdvance = (UFunction*) UObject::GObjObjects()->Data[ 40221 ];

	UGFxMoviePlayer_execAdvance_Parms Advance_Parms;
	Advance_Parms.Time = Time;

	pFnAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdvance, &Advance_Parms, NULL );

	pFnAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UGFxMoviePlayer::eventStart ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 40440 ];

	UGFxMoviePlayer_eventStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	pFnStart->FunctionFlags |= 0x400;

	return Start_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UGFxObject::eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = (UFunction*) UObject::GObjObjects()->Data[ 40807 ];

	UGFxObject_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy ( &WidgetUnloaded_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetUnloaded_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetUnloaded_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UGFxObject::eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->Data[ 40802 ];

	UGFxObject_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy ( &WidgetInitialized_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetInitialized_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetInitialized_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );

	return WidgetInitialized_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ANSILength
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )

int UGFxObject::ANSILength ( struct FString Str )
{
	static UFunction* pFnANSILength = NULL;

	if ( ! pFnANSILength )
		pFnANSILength = (UFunction*) UObject::GObjObjects()->Data[ 40799 ];

	UGFxObject_execANSILength_Parms ANSILength_Parms;
	memcpy ( &ANSILength_Parms.Str, &Str, 0xC );

	pFnANSILength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnANSILength, &ANSILength_Parms, NULL );

	pFnANSILength->FunctionFlags |= 0x400;

	return ANSILength_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 symbolname                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 instancename                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Depth                          ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::AttachMovie ( struct FString symbolname, struct FString instancename, int Depth, class UClass* Type )
{
	static UFunction* pFnAttachMovie = NULL;

	if ( ! pFnAttachMovie )
		pFnAttachMovie = (UFunction*) UObject::GObjObjects()->Data[ 40793 ];

	UGFxObject_execAttachMovie_Parms AttachMovie_Parms;
	memcpy ( &AttachMovie_Parms.symbolname, &symbolname, 0xC );
	memcpy ( &AttachMovie_Parms.instancename, &instancename, 0xC );
	AttachMovie_Parms.Depth = Depth;
	AttachMovie_Parms.Type = Type;

	pFnAttachMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachMovie, &AttachMovie_Parms, NULL );

	pFnAttachMovie->FunctionFlags |= 0x400;

	return AttachMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 instancename                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Depth                          ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::CreateEmptyMovieClip ( struct FString instancename, int Depth, class UClass* Type )
{
	static UFunction* pFnCreateEmptyMovieClip = NULL;

	if ( ! pFnCreateEmptyMovieClip )
		pFnCreateEmptyMovieClip = (UFunction*) UObject::GObjObjects()->Data[ 40788 ];

	UGFxObject_execCreateEmptyMovieClip_Parms CreateEmptyMovieClip_Parms;
	memcpy ( &CreateEmptyMovieClip_Parms.instancename, &instancename, 0xC );
	CreateEmptyMovieClip_Parms.Depth = Depth;
	CreateEmptyMovieClip_Parms.Type = Type;

	pFnCreateEmptyMovieClip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateEmptyMovieClip, &CreateEmptyMovieClip_Parms, NULL );

	pFnCreateEmptyMovieClip->FunctionFlags |= 0x400;

	return CreateEmptyMovieClip_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            frame                          ( CPF_Parm )

void UGFxObject::GotoAndStopI ( int frame )
{
	static UFunction* pFnGotoAndStopI = NULL;

	if ( ! pFnGotoAndStopI )
		pFnGotoAndStopI = (UFunction*) UObject::GObjObjects()->Data[ 40786 ];

	UGFxObject_execGotoAndStopI_Parms GotoAndStopI_Parms;
	GotoAndStopI_Parms.frame = frame;

	pFnGotoAndStopI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndStopI, &GotoAndStopI_Parms, NULL );

	pFnGotoAndStopI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 frame                          ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::GotoAndStop ( struct FString frame )
{
	static UFunction* pFnGotoAndStop = NULL;

	if ( ! pFnGotoAndStop )
		pFnGotoAndStop = (UFunction*) UObject::GObjObjects()->Data[ 40784 ];

	UGFxObject_execGotoAndStop_Parms GotoAndStop_Parms;
	memcpy ( &GotoAndStop_Parms.frame, &frame, 0xC );

	pFnGotoAndStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndStop, &GotoAndStop_Parms, NULL );

	pFnGotoAndStop->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            frame                          ( CPF_Parm )

void UGFxObject::GotoAndPlayI ( int frame )
{
	static UFunction* pFnGotoAndPlayI = NULL;

	if ( ! pFnGotoAndPlayI )
		pFnGotoAndPlayI = (UFunction*) UObject::GObjObjects()->Data[ 40782 ];

	UGFxObject_execGotoAndPlayI_Parms GotoAndPlayI_Parms;
	GotoAndPlayI_Parms.frame = frame;

	pFnGotoAndPlayI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndPlayI, &GotoAndPlayI_Parms, NULL );

	pFnGotoAndPlayI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 frame                          ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::GotoAndPlay ( struct FString frame )
{
	static UFunction* pFnGotoAndPlay = NULL;

	if ( ! pFnGotoAndPlay )
		pFnGotoAndPlay = (UFunction*) UObject::GObjObjects()->Data[ 40780 ];

	UGFxObject_execGotoAndPlay_Parms GotoAndPlay_Parms;
	memcpy ( &GotoAndPlay_Parms.frame, &frame, 0xC );

	pFnGotoAndPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndPlay, &GotoAndPlay_Parms, NULL );

	pFnGotoAndPlay->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< class UGFxObject* >    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

TArray< class UGFxObject* > UGFxObject::ActionScriptArray ( struct FString Path )
{
	static UFunction* pFnActionScriptArray = NULL;

	if ( ! pFnActionScriptArray )
		pFnActionScriptArray = (UFunction*) UObject::GObjObjects()->Data[ 40776 ];

	UGFxObject_execActionScriptArray_Parms ActionScriptArray_Parms;
	memcpy ( &ActionScriptArray_Parms.Path, &Path, 0xC );

	pFnActionScriptArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptArray, &ActionScriptArray_Parms, NULL );

	pFnActionScriptArray->FunctionFlags |= 0x400;

	return ActionScriptArray_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

class UGFxObject* UGFxObject::ActionScriptObject ( struct FString Path )
{
	static UFunction* pFnActionScriptObject = NULL;

	if ( ! pFnActionScriptObject )
		pFnActionScriptObject = (UFunction*) UObject::GObjObjects()->Data[ 40773 ];

	UGFxObject_execActionScriptObject_Parms ActionScriptObject_Parms;
	memcpy ( &ActionScriptObject_Parms.Path, &Path, 0xC );

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptObject, &ActionScriptObject_Parms, NULL );

	pFnActionScriptObject->FunctionFlags |= 0x400;

	return ActionScriptObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxObject::ActionScriptString ( struct FString method )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = (UFunction*) UObject::GObjObjects()->Data[ 40770 ];

	UGFxObject_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy ( &ActionScriptString_Parms.method, &method, 0xC );

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxObject::ActionScriptFloat ( struct FString method )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = (UFunction*) UObject::GObjObjects()->Data[ 40767 ];

	UGFxObject_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy ( &ActionScriptFloat_Parms.method, &method, 0xC );

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

int UGFxObject::ActionScriptInt ( struct FString method )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = (UFunction*) UObject::GObjObjects()->Data[ 40764 ];

	UGFxObject_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy ( &ActionScriptInt_Parms.method, &method, 0xC );

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::ActionScriptVoid ( struct FString method )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = (UFunction*) UObject::GObjObjects()->Data[ 40762 ];

	UGFxObject_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy ( &ActionScriptVoid_Parms.method, &method, 0xC );

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FASValue >      args                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxObject::Invoke ( struct FString Member, TArray< struct FASValue > args )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = (UFunction*) UObject::GObjObjects()->Data[ 40757 ];

	UGFxObject_execInvoke_Parms Invoke_Parms;
	memcpy ( &Invoke_Parms.Member, &Member, 0xC );
	memcpy ( &Invoke_Parms.args, &args, 0xC );

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;

	return Invoke_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              Target                         ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::ActionScriptSetFunctionOn ( class UGFxObject* Target, struct FString Member )
{
	static UFunction* pFnActionScriptSetFunctionOn = NULL;

	if ( ! pFnActionScriptSetFunctionOn )
		pFnActionScriptSetFunctionOn = (UFunction*) UObject::GObjObjects()->Data[ 40754 ];

	UGFxObject_execActionScriptSetFunctionOn_Parms ActionScriptSetFunctionOn_Parms;
	ActionScriptSetFunctionOn_Parms.Target = Target;
	memcpy ( &ActionScriptSetFunctionOn_Parms.Member, &Member, 0xC );

	pFnActionScriptSetFunctionOn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunctionOn, &ActionScriptSetFunctionOn_Parms, NULL );

	pFnActionScriptSetFunctionOn->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::ActionScriptSetFunction ( struct FString Member )
{
	static UFunction* pFnActionScriptSetFunction = NULL;

	if ( ! pFnActionScriptSetFunction )
		pFnActionScriptSetFunction = (UFunction*) UObject::GObjObjects()->Data[ 40752 ];

	UGFxObject_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;
	memcpy ( &ActionScriptSetFunction_Parms.Member, &Member, 0xC );

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, NULL );

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetElementMemberString ( int Index, struct FString Member, struct FString S )
{
	static UFunction* pFnSetElementMemberString = NULL;

	if ( ! pFnSetElementMemberString )
		pFnSetElementMemberString = (UFunction*) UObject::GObjObjects()->Data[ 40748 ];

	UGFxObject_execSetElementMemberString_Parms SetElementMemberString_Parms;
	SetElementMemberString_Parms.Index = Index;
	memcpy ( &SetElementMemberString_Parms.Member, &Member, 0xC );
	memcpy ( &SetElementMemberString_Parms.S, &S, 0xC );

	pFnSetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberString, &SetElementMemberString_Parms, NULL );

	pFnSetElementMemberString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

void UGFxObject::SetElementMemberInt ( int Index, struct FString Member, int I )
{
	static UFunction* pFnSetElementMemberInt = NULL;

	if ( ! pFnSetElementMemberInt )
		pFnSetElementMemberInt = (UFunction*) UObject::GObjObjects()->Data[ 40744 ];

	UGFxObject_execSetElementMemberInt_Parms SetElementMemberInt_Parms;
	SetElementMemberInt_Parms.Index = Index;
	memcpy ( &SetElementMemberInt_Parms.Member, &Member, 0xC );
	SetElementMemberInt_Parms.I = I;

	pFnSetElementMemberInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberInt, &SetElementMemberInt_Parms, NULL );

	pFnSetElementMemberInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxObject::SetElementMemberFloat ( int Index, struct FString Member, float F )
{
	static UFunction* pFnSetElementMemberFloat = NULL;

	if ( ! pFnSetElementMemberFloat )
		pFnSetElementMemberFloat = (UFunction*) UObject::GObjObjects()->Data[ 40740 ];

	UGFxObject_execSetElementMemberFloat_Parms SetElementMemberFloat_Parms;
	SetElementMemberFloat_Parms.Index = Index;
	memcpy ( &SetElementMemberFloat_Parms.Member, &Member, 0xC );
	SetElementMemberFloat_Parms.F = F;

	pFnSetElementMemberFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberFloat, &SetElementMemberFloat_Parms, NULL );

	pFnSetElementMemberFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxObject::SetElementMemberBool ( int Index, struct FString Member, unsigned long B )
{
	static UFunction* pFnSetElementMemberBool = NULL;

	if ( ! pFnSetElementMemberBool )
		pFnSetElementMemberBool = (UFunction*) UObject::GObjObjects()->Data[ 40736 ];

	UGFxObject_execSetElementMemberBool_Parms SetElementMemberBool_Parms;
	SetElementMemberBool_Parms.Index = Index;
	memcpy ( &SetElementMemberBool_Parms.Member, &Member, 0xC );
	SetElementMemberBool_Parms.B = B;

	pFnSetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberBool, &SetElementMemberBool_Parms, NULL );

	pFnSetElementMemberBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              val                            ( CPF_Parm )

void UGFxObject::SetElementMemberObject ( int Index, struct FString Member, class UGFxObject* val )
{
	static UFunction* pFnSetElementMemberObject = NULL;

	if ( ! pFnSetElementMemberObject )
		pFnSetElementMemberObject = (UFunction*) UObject::GObjObjects()->Data[ 40732 ];

	UGFxObject_execSetElementMemberObject_Parms SetElementMemberObject_Parms;
	SetElementMemberObject_Parms.Index = Index;
	memcpy ( &SetElementMemberObject_Parms.Member, &Member, 0xC );
	SetElementMemberObject_Parms.val = val;

	pFnSetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberObject, &SetElementMemberObject_Parms, NULL );

	pFnSetElementMemberObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetElementMember ( int Index, struct FString Member, struct FASValue Arg )
{
	static UFunction* pFnSetElementMember = NULL;

	if ( ! pFnSetElementMember )
		pFnSetElementMember = (UFunction*) UObject::GObjObjects()->Data[ 40728 ];

	UGFxObject_execSetElementMember_Parms SetElementMember_Parms;
	SetElementMember_Parms.Index = Index;
	memcpy ( &SetElementMember_Parms.Member, &Member, 0xC );
	memcpy ( &SetElementMember_Parms.Arg, &Arg, 0x1C );

	pFnSetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMember, &SetElementMember_Parms, NULL );

	pFnSetElementMember->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxObject::GetElementMemberString ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMemberString = NULL;

	if ( ! pFnGetElementMemberString )
		pFnGetElementMemberString = (UFunction*) UObject::GObjObjects()->Data[ 40724 ];

	UGFxObject_execGetElementMemberString_Parms GetElementMemberString_Parms;
	GetElementMemberString_Parms.Index = Index;
	memcpy ( &GetElementMemberString_Parms.Member, &Member, 0xC );

	pFnGetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberString, &GetElementMemberString_Parms, NULL );

	pFnGetElementMemberString->FunctionFlags |= 0x400;

	return GetElementMemberString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

int UGFxObject::GetElementMemberInt ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMemberInt = NULL;

	if ( ! pFnGetElementMemberInt )
		pFnGetElementMemberInt = (UFunction*) UObject::GObjObjects()->Data[ 40720 ];

	UGFxObject_execGetElementMemberInt_Parms GetElementMemberInt_Parms;
	GetElementMemberInt_Parms.Index = Index;
	memcpy ( &GetElementMemberInt_Parms.Member, &Member, 0xC );

	pFnGetElementMemberInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberInt, &GetElementMemberInt_Parms, NULL );

	pFnGetElementMemberInt->FunctionFlags |= 0x400;

	return GetElementMemberInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxObject::GetElementMemberFloat ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMemberFloat = NULL;

	if ( ! pFnGetElementMemberFloat )
		pFnGetElementMemberFloat = (UFunction*) UObject::GObjObjects()->Data[ 40716 ];

	UGFxObject_execGetElementMemberFloat_Parms GetElementMemberFloat_Parms;
	GetElementMemberFloat_Parms.Index = Index;
	memcpy ( &GetElementMemberFloat_Parms.Member, &Member, 0xC );

	pFnGetElementMemberFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberFloat, &GetElementMemberFloat_Parms, NULL );

	pFnGetElementMemberFloat->FunctionFlags |= 0x400;

	return GetElementMemberFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxObject::GetElementMemberBool ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMemberBool = NULL;

	if ( ! pFnGetElementMemberBool )
		pFnGetElementMemberBool = (UFunction*) UObject::GObjObjects()->Data[ 40712 ];

	UGFxObject_execGetElementMemberBool_Parms GetElementMemberBool_Parms;
	GetElementMemberBool_Parms.Index = Index;
	memcpy ( &GetElementMemberBool_Parms.Member, &Member, 0xC );

	pFnGetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberBool, &GetElementMemberBool_Parms, NULL );

	pFnGetElementMemberBool->FunctionFlags |= 0x400;

	return GetElementMemberBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::GetElementMemberObject ( int Index, struct FString Member, class UClass* Type )
{
	static UFunction* pFnGetElementMemberObject = NULL;

	if ( ! pFnGetElementMemberObject )
		pFnGetElementMemberObject = (UFunction*) UObject::GObjObjects()->Data[ 40707 ];

	UGFxObject_execGetElementMemberObject_Parms GetElementMemberObject_Parms;
	GetElementMemberObject_Parms.Index = Index;
	memcpy ( &GetElementMemberObject_Parms.Member, &Member, 0xC );
	GetElementMemberObject_Parms.Type = Type;

	pFnGetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberObject, &GetElementMemberObject_Parms, NULL );

	pFnGetElementMemberObject->FunctionFlags |= 0x400;

	return GetElementMemberObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxObject::GetElementMember ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMember = NULL;

	if ( ! pFnGetElementMember )
		pFnGetElementMember = (UFunction*) UObject::GObjObjects()->Data[ 40703 ];

	UGFxObject_execGetElementMember_Parms GetElementMember_Parms;
	GetElementMember_Parms.Index = Index;
	memcpy ( &GetElementMember_Parms.Member, &Member, 0xC );

	pFnGetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMember, &GetElementMember_Parms, NULL );

	pFnGetElementMember->FunctionFlags |= 0x400;

	return GetElementMember_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASColorTransform       cxform                         ( CPF_Parm )

void UGFxObject::SetElementColorTransform ( int Index, struct FASColorTransform cxform )
{
	static UFunction* pFnSetElementColorTransform = NULL;

	if ( ! pFnSetElementColorTransform )
		pFnSetElementColorTransform = (UFunction*) UObject::GObjObjects()->Data[ 40700 ];

	UGFxObject_execSetElementColorTransform_Parms SetElementColorTransform_Parms;
	SetElementColorTransform_Parms.Index = Index;
	memcpy ( &SetElementColorTransform_Parms.cxform, &cxform, 0x20 );

	pFnSetElementColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementColorTransform, &SetElementColorTransform_Parms, NULL );

	pFnSetElementColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

void UGFxObject::SetElementPosition ( int Index, float X, float Y )
{
	static UFunction* pFnSetElementPosition = NULL;

	if ( ! pFnSetElementPosition )
		pFnSetElementPosition = (UFunction*) UObject::GObjObjects()->Data[ 40696 ];

	UGFxObject_execSetElementPosition_Parms SetElementPosition_Parms;
	SetElementPosition_Parms.Index = Index;
	SetElementPosition_Parms.X = X;
	SetElementPosition_Parms.Y = Y;

	pFnSetElementPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementPosition, &SetElementPosition_Parms, NULL );

	pFnSetElementPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  Visible                        ( CPF_Parm )

void UGFxObject::SetElementVisible ( int Index, unsigned long Visible )
{
	static UFunction* pFnSetElementVisible = NULL;

	if ( ! pFnSetElementVisible )
		pFnSetElementVisible = (UFunction*) UObject::GObjObjects()->Data[ 40693 ];

	UGFxObject_execSetElementVisible_Parms SetElementVisible_Parms;
	SetElementVisible_Parms.Index = Index;
	SetElementVisible_Parms.Visible = Visible;

	pFnSetElementVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementVisible, &SetElementVisible_Parms, NULL );

	pFnSetElementVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxObject::SetElementDisplayMatrix ( int Index, struct FMatrix M )
{
	static UFunction* pFnSetElementDisplayMatrix = NULL;

	if ( ! pFnSetElementDisplayMatrix )
		pFnSetElementDisplayMatrix = (UFunction*) UObject::GObjObjects()->Data[ 40690 ];

	UGFxObject_execSetElementDisplayMatrix_Parms SetElementDisplayMatrix_Parms;
	SetElementDisplayMatrix_Parms.Index = Index;
	memcpy ( &SetElementDisplayMatrix_Parms.M, &M, 0x40 );

	pFnSetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Parms, NULL );

	pFnSetElementDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASDisplayInfo          D                              ( CPF_Parm )

void UGFxObject::SetElementDisplayInfo ( int Index, struct FASDisplayInfo D )
{
	static UFunction* pFnSetElementDisplayInfo = NULL;

	if ( ! pFnSetElementDisplayInfo )
		pFnSetElementDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 40687 ];

	UGFxObject_execSetElementDisplayInfo_Parms SetElementDisplayInfo_Parms;
	SetElementDisplayInfo_Parms.Index = Index;
	memcpy ( &SetElementDisplayInfo_Parms.D, &D, 0x2C );

	pFnSetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementDisplayInfo, &SetElementDisplayInfo_Parms, NULL );

	pFnSetElementDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

struct FMatrix UGFxObject::GetElementDisplayMatrix ( int Index )
{
	static UFunction* pFnGetElementDisplayMatrix = NULL;

	if ( ! pFnGetElementDisplayMatrix )
		pFnGetElementDisplayMatrix = (UFunction*) UObject::GObjObjects()->Data[ 40684 ];

	UGFxObject_execGetElementDisplayMatrix_Parms GetElementDisplayMatrix_Parms;
	GetElementDisplayMatrix_Parms.Index = Index;

	pFnGetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Parms, NULL );

	pFnGetElementDisplayMatrix->FunctionFlags |= 0x400;

	return GetElementDisplayMatrix_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo ( int Index )
{
	static UFunction* pFnGetElementDisplayInfo = NULL;

	if ( ! pFnGetElementDisplayInfo )
		pFnGetElementDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 40681 ];

	UGFxObject_execGetElementDisplayInfo_Parms GetElementDisplayInfo_Parms;
	GetElementDisplayInfo_Parms.Index = Index;

	pFnGetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementDisplayInfo, &GetElementDisplayInfo_Parms, NULL );

	pFnGetElementDisplayInfo->FunctionFlags |= 0x400;

	return GetElementDisplayInfo_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetElementString ( int Index, struct FString S )
{
	static UFunction* pFnSetElementString = NULL;

	if ( ! pFnSetElementString )
		pFnSetElementString = (UFunction*) UObject::GObjObjects()->Data[ 40678 ];

	UGFxObject_execSetElementString_Parms SetElementString_Parms;
	SetElementString_Parms.Index = Index;
	memcpy ( &SetElementString_Parms.S, &S, 0xC );

	pFnSetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementString, &SetElementString_Parms, NULL );

	pFnSetElementString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// int                            I                              ( CPF_Parm )

void UGFxObject::SetElementInt ( int Index, int I )
{
	static UFunction* pFnSetElementInt = NULL;

	if ( ! pFnSetElementInt )
		pFnSetElementInt = (UFunction*) UObject::GObjObjects()->Data[ 40675 ];

	UGFxObject_execSetElementInt_Parms SetElementInt_Parms;
	SetElementInt_Parms.Index = Index;
	SetElementInt_Parms.I = I;

	pFnSetElementInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementInt, &SetElementInt_Parms, NULL );

	pFnSetElementInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// float                          F                              ( CPF_Parm )

void UGFxObject::SetElementFloat ( int Index, float F )
{
	static UFunction* pFnSetElementFloat = NULL;

	if ( ! pFnSetElementFloat )
		pFnSetElementFloat = (UFunction*) UObject::GObjObjects()->Data[ 40672 ];

	UGFxObject_execSetElementFloat_Parms SetElementFloat_Parms;
	SetElementFloat_Parms.Index = Index;
	SetElementFloat_Parms.F = F;

	pFnSetElementFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementFloat, &SetElementFloat_Parms, NULL );

	pFnSetElementFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

void UGFxObject::SetElementBool ( int Index, unsigned long B )
{
	static UFunction* pFnSetElementBool = NULL;

	if ( ! pFnSetElementBool )
		pFnSetElementBool = (UFunction*) UObject::GObjObjects()->Data[ 40669 ];

	UGFxObject_execSetElementBool_Parms SetElementBool_Parms;
	SetElementBool_Parms.Index = Index;
	SetElementBool_Parms.B = B;

	pFnSetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementBool, &SetElementBool_Parms, NULL );

	pFnSetElementBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// class UGFxObject*              val                            ( CPF_Parm )

void UGFxObject::SetElementObject ( int Index, class UGFxObject* val )
{
	static UFunction* pFnSetElementObject = NULL;

	if ( ! pFnSetElementObject )
		pFnSetElementObject = (UFunction*) UObject::GObjObjects()->Data[ 40666 ];

	UGFxObject_execSetElementObject_Parms SetElementObject_Parms;
	SetElementObject_Parms.Index = Index;
	SetElementObject_Parms.val = val;

	pFnSetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementObject, &SetElementObject_Parms, NULL );

	pFnSetElementObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetElement ( int Index, struct FASValue Arg )
{
	static UFunction* pFnSetElement = NULL;

	if ( ! pFnSetElement )
		pFnSetElement = (UFunction*) UObject::GObjObjects()->Data[ 40663 ];

	UGFxObject_execSetElement_Parms SetElement_Parms;
	SetElement_Parms.Index = Index;
	memcpy ( &SetElement_Parms.Arg, &Arg, 0x1C );

	pFnSetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElement, &SetElement_Parms, NULL );

	pFnSetElement->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FString UGFxObject::GetElementString ( int Index )
{
	static UFunction* pFnGetElementString = NULL;

	if ( ! pFnGetElementString )
		pFnGetElementString = (UFunction*) UObject::GObjObjects()->Data[ 40660 ];

	UGFxObject_execGetElementString_Parms GetElementString_Parms;
	GetElementString_Parms.Index = Index;

	pFnGetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementString, &GetElementString_Parms, NULL );

	pFnGetElementString->FunctionFlags |= 0x400;

	return GetElementString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

int UGFxObject::GetElementInt ( int Index )
{
	static UFunction* pFnGetElementInt = NULL;

	if ( ! pFnGetElementInt )
		pFnGetElementInt = (UFunction*) UObject::GObjObjects()->Data[ 40657 ];

	UGFxObject_execGetElementInt_Parms GetElementInt_Parms;
	GetElementInt_Parms.Index = Index;

	pFnGetElementInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementInt, &GetElementInt_Parms, NULL );

	pFnGetElementInt->FunctionFlags |= 0x400;

	return GetElementInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

float UGFxObject::GetElementFloat ( int Index )
{
	static UFunction* pFnGetElementFloat = NULL;

	if ( ! pFnGetElementFloat )
		pFnGetElementFloat = (UFunction*) UObject::GObjObjects()->Data[ 40654 ];

	UGFxObject_execGetElementFloat_Parms GetElementFloat_Parms;
	GetElementFloat_Parms.Index = Index;

	pFnGetElementFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementFloat, &GetElementFloat_Parms, NULL );

	pFnGetElementFloat->FunctionFlags |= 0x400;

	return GetElementFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

bool UGFxObject::GetElementBool ( int Index )
{
	static UFunction* pFnGetElementBool = NULL;

	if ( ! pFnGetElementBool )
		pFnGetElementBool = (UFunction*) UObject::GObjObjects()->Data[ 40651 ];

	UGFxObject_execGetElementBool_Parms GetElementBool_Parms;
	GetElementBool_Parms.Index = Index;

	pFnGetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementBool, &GetElementBool_Parms, NULL );

	pFnGetElementBool->FunctionFlags |= 0x400;

	return GetElementBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::GetElementObject ( int Index, class UClass* Type )
{
	static UFunction* pFnGetElementObject = NULL;

	if ( ! pFnGetElementObject )
		pFnGetElementObject = (UFunction*) UObject::GObjObjects()->Data[ 40647 ];

	UGFxObject_execGetElementObject_Parms GetElementObject_Parms;
	GetElementObject_Parms.Index = Index;
	GetElementObject_Parms.Type = Type;

	pFnGetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementObject, &GetElementObject_Parms, NULL );

	pFnGetElementObject->FunctionFlags |= 0x400;

	return GetElementObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FASValue UGFxObject::GetElement ( int Index )
{
	static UFunction* pFnGetElement = NULL;

	if ( ! pFnGetElement )
		pFnGetElement = (UFunction*) UObject::GObjObjects()->Data[ 40644 ];

	UGFxObject_execGetElement_Parms GetElement_Parms;
	GetElement_Parms.Index = Index;

	pFnGetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElement, &GetElement_Parms, NULL );

	pFnGetElement->FunctionFlags |= 0x400;

	return GetElement_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetText
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// class UTranslationContext*     InContext                      ( CPF_OptionalParm | CPF_Parm )

void UGFxObject::SetText ( struct FString Text, class UTranslationContext* InContext )
{
	static UFunction* pFnSetText = NULL;

	if ( ! pFnSetText )
		pFnSetText = (UFunction*) UObject::GObjObjects()->Data[ 40641 ];

	UGFxObject_execSetText_Parms SetText_Parms;
	memcpy ( &SetText_Parms.Text, &Text, 0xC );
	SetText_Parms.InContext = InContext;

	pFnSetText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetText, &SetText_Parms, NULL );

	pFnSetText->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGFxObject::GetText ( )
{
	static UFunction* pFnGetText = NULL;

	if ( ! pFnGetText )
		pFnGetText = (UFunction*) UObject::GObjObjects()->Data[ 40639 ];

	UGFxObject_execGetText_Parms GetText_Parms;

	pFnGetText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetText, &GetText_Parms, NULL );

	pFnGetText->FunctionFlags |= 0x400;

	return GetText_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  Visible                        ( CPF_Parm )

void UGFxObject::SetVisible ( unsigned long Visible )
{
	static UFunction* pFnSetVisible = NULL;

	if ( ! pFnSetVisible )
		pFnSetVisible = (UFunction*) UObject::GObjObjects()->Data[ 40637 ];

	UGFxObject_execSetVisible_Parms SetVisible_Parms;
	SetVisible_Parms.Visible = Visible;

	pFnSetVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVisible, &SetVisible_Parms, NULL );

	pFnSetVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxObject::SetDisplayMatrix3D ( struct FMatrix M )
{
	static UFunction* pFnSetDisplayMatrix3D = NULL;

	if ( ! pFnSetDisplayMatrix3D )
		pFnSetDisplayMatrix3D = (UFunction*) UObject::GObjObjects()->Data[ 40635 ];

	UGFxObject_execSetDisplayMatrix3D_Parms SetDisplayMatrix3D_Parms;
	memcpy ( &SetDisplayMatrix3D_Parms.M, &M, 0x40 );

	pFnSetDisplayMatrix3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Parms, NULL );

	pFnSetDisplayMatrix3D->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxObject::SetDisplayMatrix ( struct FMatrix M )
{
	static UFunction* pFnSetDisplayMatrix = NULL;

	if ( ! pFnSetDisplayMatrix )
		pFnSetDisplayMatrix = (UFunction*) UObject::GObjObjects()->Data[ 40633 ];

	UGFxObject_execSetDisplayMatrix_Parms SetDisplayMatrix_Parms;
	memcpy ( &SetDisplayMatrix_Parms.M, &M, 0x40 );

	pFnSetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayMatrix, &SetDisplayMatrix_Parms, NULL );

	pFnSetDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASColorTransform       cxform                         ( CPF_Parm )

void UGFxObject::SetColorTransform ( struct FASColorTransform cxform )
{
	static UFunction* pFnSetColorTransform = NULL;

	if ( ! pFnSetColorTransform )
		pFnSetColorTransform = (UFunction*) UObject::GObjObjects()->Data[ 40631 ];

	UGFxObject_execSetColorTransform_Parms SetColorTransform_Parms;
	memcpy ( &SetColorTransform_Parms.cxform, &cxform, 0x20 );

	pFnSetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetColorTransform, &SetColorTransform_Parms, NULL );

	pFnSetColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

void UGFxObject::SetPosition ( float X, float Y )
{
	static UFunction* pFnSetPosition = NULL;

	if ( ! pFnSetPosition )
		pFnSetPosition = (UFunction*) UObject::GObjObjects()->Data[ 40628 ];

	UGFxObject_execSetPosition_Parms SetPosition_Parms;
	SetPosition_Parms.X = X;
	SetPosition_Parms.Y = Y;

	pFnSetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPosition, &SetPosition_Parms, NULL );

	pFnSetPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          D                              ( CPF_Parm )

void UGFxObject::SetDisplayInfo ( struct FASDisplayInfo D )
{
	static UFunction* pFnSetDisplayInfo = NULL;

	if ( ! pFnSetDisplayInfo )
		pFnSetDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 40626 ];

	UGFxObject_execSetDisplayInfo_Parms SetDisplayInfo_Parms;
	memcpy ( &SetDisplayInfo_Parms.D, &D, 0x2C );

	pFnSetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayInfo, &SetDisplayInfo_Parms, NULL );

	pFnSetDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FMatrix UGFxObject::GetDisplayMatrix3D ( )
{
	static UFunction* pFnGetDisplayMatrix3D = NULL;

	if ( ! pFnGetDisplayMatrix3D )
		pFnGetDisplayMatrix3D = (UFunction*) UObject::GObjObjects()->Data[ 40624 ];

	UGFxObject_execGetDisplayMatrix3D_Parms GetDisplayMatrix3D_Parms;

	pFnGetDisplayMatrix3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayMatrix3D, &GetDisplayMatrix3D_Parms, NULL );

	pFnGetDisplayMatrix3D->FunctionFlags |= 0x400;

	return GetDisplayMatrix3D_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FMatrix UGFxObject::GetDisplayMatrix ( )
{
	static UFunction* pFnGetDisplayMatrix = NULL;

	if ( ! pFnGetDisplayMatrix )
		pFnGetDisplayMatrix = (UFunction*) UObject::GObjObjects()->Data[ 40622 ];

	UGFxObject_execGetDisplayMatrix_Parms GetDisplayMatrix_Parms;

	pFnGetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayMatrix, &GetDisplayMatrix_Parms, NULL );

	pFnGetDisplayMatrix->FunctionFlags |= 0x400;

	return GetDisplayMatrix_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASColorTransform       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FASColorTransform UGFxObject::GetColorTransform ( )
{
	static UFunction* pFnGetColorTransform = NULL;

	if ( ! pFnGetColorTransform )
		pFnGetColorTransform = (UFunction*) UObject::GObjObjects()->Data[ 40620 ];

	UGFxObject_execGetColorTransform_Parms GetColorTransform_Parms;

	pFnGetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetColorTransform, &GetColorTransform_Parms, NULL );

	pFnGetColorTransform->FunctionFlags |= 0x400;

	return GetColorTransform_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm | CPF_OutParm )
// float                          Y                              ( CPF_Parm | CPF_OutParm )

bool UGFxObject::GetPosition ( float* X, float* Y )
{
	static UFunction* pFnGetPosition = NULL;

	if ( ! pFnGetPosition )
		pFnGetPosition = (UFunction*) UObject::GObjObjects()->Data[ 40616 ];

	UGFxObject_execGetPosition_Parms GetPosition_Parms;

	pFnGetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPosition, &GetPosition_Parms, NULL );

	pFnGetPosition->FunctionFlags |= 0x400;

	if ( X )
		*X = GetPosition_Parms.X;

	if ( Y )
		*Y = GetPosition_Parms.Y;

	return GetPosition_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FASDisplayInfo UGFxObject::GetDisplayInfo ( )
{
	static UFunction* pFnGetDisplayInfo = NULL;

	if ( ! pFnGetDisplayInfo )
		pFnGetDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 40614 ];

	UGFxObject_execGetDisplayInfo_Parms GetDisplayInfo_Parms;

	pFnGetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayInfo, &GetDisplayInfo_Parms, NULL );

	pFnGetDisplayInfo->FunctionFlags |= 0x400;

	return GetDisplayInfo_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.TranslateString
// [0x00026400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 StringToTranslate              ( CPF_Parm | CPF_NeedCtorLink )
// class UTranslationContext*     InContext                      ( CPF_OptionalParm | CPF_Parm )

struct FString UGFxObject::TranslateString ( struct FString StringToTranslate, class UTranslationContext* InContext )
{
	static UFunction* pFnTranslateString = NULL;

	if ( ! pFnTranslateString )
		pFnTranslateString = (UFunction*) UObject::GObjObjects()->Data[ 40610 ];

	UGFxObject_execTranslateString_Parms TranslateString_Parms;
	memcpy ( &TranslateString_Parms.StringToTranslate, &StringToTranslate, 0xC );
	TranslateString_Parms.InContext = InContext;

	pFnTranslateString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTranslateString, &TranslateString_Parms, NULL );

	pFnTranslateString->FunctionFlags |= 0x400;

	return TranslateString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 context                        ( CPF_Parm )
// struct FName                   fname                          ( CPF_Parm )

void UGFxObject::SetFunction ( struct FString Member, class UObject* context, struct FName fname )
{
	static UFunction* pFnSetFunction = NULL;

	if ( ! pFnSetFunction )
		pFnSetFunction = (UFunction*) UObject::GObjObjects()->Data[ 40606 ];

	UGFxObject_execSetFunction_Parms SetFunction_Parms;
	memcpy ( &SetFunction_Parms.Member, &Member, 0xC );
	SetFunction_Parms.context = context;
	memcpy ( &SetFunction_Parms.fname, &fname, 0x8 );

	pFnSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFunction, &SetFunction_Parms, NULL );

	pFnSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              val                            ( CPF_Parm )

void UGFxObject::SetObject ( struct FString Member, class UGFxObject* val )
{
	static UFunction* pFnSetObject = NULL;

	if ( ! pFnSetObject )
		pFnSetObject = (UFunction*) UObject::GObjObjects()->Data[ 40603 ];

	UGFxObject_execSetObject_Parms SetObject_Parms;
	memcpy ( &SetObject_Parms.Member, &Member, 0xC );
	SetObject_Parms.val = val;

	pFnSetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObject, &SetObject_Parms, NULL );

	pFnSetObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetString
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )
// class UTranslationContext*     InContext                      ( CPF_OptionalParm | CPF_Parm )

void UGFxObject::SetString ( struct FString Member, struct FString S, class UTranslationContext* InContext )
{
	static UFunction* pFnSetString = NULL;

	if ( ! pFnSetString )
		pFnSetString = (UFunction*) UObject::GObjObjects()->Data[ 40599 ];

	UGFxObject_execSetString_Parms SetString_Parms;
	memcpy ( &SetString_Parms.Member, &Member, 0xC );
	memcpy ( &SetString_Parms.S, &S, 0xC );
	SetString_Parms.InContext = InContext;

	pFnSetString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetString, &SetString_Parms, NULL );

	pFnSetString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

void UGFxObject::SetInt ( struct FString Member, int I )
{
	static UFunction* pFnSetInt = NULL;

	if ( ! pFnSetInt )
		pFnSetInt = (UFunction*) UObject::GObjObjects()->Data[ 40596 ];

	UGFxObject_execSetInt_Parms SetInt_Parms;
	memcpy ( &SetInt_Parms.Member, &Member, 0xC );
	SetInt_Parms.I = I;

	pFnSetInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetInt, &SetInt_Parms, NULL );

	pFnSetInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxObject::SetFloat ( struct FString Member, float F )
{
	static UFunction* pFnSetFloat = NULL;

	if ( ! pFnSetFloat )
		pFnSetFloat = (UFunction*) UObject::GObjObjects()->Data[ 40593 ];

	UGFxObject_execSetFloat_Parms SetFloat_Parms;
	memcpy ( &SetFloat_Parms.Member, &Member, 0xC );
	SetFloat_Parms.F = F;

	pFnSetFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFloat, &SetFloat_Parms, NULL );

	pFnSetFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxObject::SetBool ( struct FString Member, unsigned long B )
{
	static UFunction* pFnSetBool = NULL;

	if ( ! pFnSetBool )
		pFnSetBool = (UFunction*) UObject::GObjObjects()->Data[ 40590 ];

	UGFxObject_execSetBool_Parms SetBool_Parms;
	memcpy ( &SetBool_Parms.Member, &Member, 0xC );
	SetBool_Parms.B = B;

	pFnSetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBool, &SetBool_Parms, NULL );

	pFnSetBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Set
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::Set ( struct FString Member, struct FASValue Arg )
{
	static UFunction* pFnSet = NULL;

	if ( ! pFnSet )
		pFnSet = (UFunction*) UObject::GObjObjects()->Data[ 40587 ];

	UGFxObject_execSet_Parms Set_Parms;
	memcpy ( &Set_Parms.Member, &Member, 0xC );
	memcpy ( &Set_Parms.Arg, &Arg, 0x1C );

	pFnSet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet, &Set_Parms, NULL );

	pFnSet->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::GetObject ( struct FString Member, class UClass* Type )
{
	static UFunction* pFnGetObject = NULL;

	if ( ! pFnGetObject )
		pFnGetObject = (UFunction*) UObject::GObjObjects()->Data[ 40583 ];

	UGFxObject_execGetObject_Parms GetObject_Parms;
	memcpy ( &GetObject_Parms.Member, &Member, 0xC );
	GetObject_Parms.Type = Type;

	pFnGetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetObject, &GetObject_Parms, NULL );

	pFnGetObject->FunctionFlags |= 0x400;

	return GetObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxObject::GetString ( struct FString Member )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 40580 ];

	UGFxObject_execGetString_Parms GetString_Parms;
	memcpy ( &GetString_Parms.Member, &Member, 0xC );

	pFnGetString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	pFnGetString->FunctionFlags |= 0x400;

	return GetString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

int UGFxObject::GetInt ( struct FString Member )
{
	static UFunction* pFnGetInt = NULL;

	if ( ! pFnGetInt )
		pFnGetInt = (UFunction*) UObject::GObjObjects()->Data[ 40577 ];

	UGFxObject_execGetInt_Parms GetInt_Parms;
	memcpy ( &GetInt_Parms.Member, &Member, 0xC );

	pFnGetInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInt, &GetInt_Parms, NULL );

	pFnGetInt->FunctionFlags |= 0x400;

	return GetInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxObject::GetFloat ( struct FString Member )
{
	static UFunction* pFnGetFloat = NULL;

	if ( ! pFnGetFloat )
		pFnGetFloat = (UFunction*) UObject::GObjObjects()->Data[ 40574 ];

	UGFxObject_execGetFloat_Parms GetFloat_Parms;
	memcpy ( &GetFloat_Parms.Member, &Member, 0xC );

	pFnGetFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFloat, &GetFloat_Parms, NULL );

	pFnGetFloat->FunctionFlags |= 0x400;

	return GetFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxObject::GetBool ( struct FString Member )
{
	static UFunction* pFnGetBool = NULL;

	if ( ! pFnGetBool )
		pFnGetBool = (UFunction*) UObject::GObjObjects()->Data[ 40571 ];

	UGFxObject_execGetBool_Parms GetBool_Parms;
	memcpy ( &GetBool_Parms.Member, &Member, 0xC );

	pFnGetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBool, &GetBool_Parms, NULL );

	pFnGetBool->FunctionFlags |= 0x400;

	return GetBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.Get
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxObject::Get ( struct FString Member )
{
	static UFunction* pFnGet = NULL;

	if ( ! pFnGet )
		pFnGet = (UFunction*) UObject::GObjObjects()->Data[ 40568 ];

	UGFxObject_execGet_Parms Get_Parms;
	memcpy ( &Get_Parms.Member, &Member, 0xC );

	pFnGet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGet, &Get_Parms, NULL );

	pFnGet->FunctionFlags |= 0x400;

	return Get_Parms.ReturnValue;
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// struct FString                 Event                          ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::ASRemoveAllEventListeners ( struct FString Event )
{
	static UFunction* pFnASRemoveAllEventListeners = NULL;

	if ( ! pFnASRemoveAllEventListeners )
		pFnASRemoveAllEventListeners = (UFunction*) UObject::GObjObjects()->Data[ 40839 ];

	UGFxClikWidget_execASRemoveAllEventListeners_Parms ASRemoveAllEventListeners_Parms;
	memcpy ( &ASRemoveAllEventListeners_Parms.Event, &Event, 0xC );

	this->ProcessEvent ( pFnASRemoveAllEventListeners, &ASRemoveAllEventListeners_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x00044003] ( FUNC_Final )
// Parameters infos:
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              O                              ( CPF_Parm )
// unsigned long                  useCapture                     ( CPF_OptionalParm | CPF_Parm )
// int                            listenerPriority               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  useWeakReference               ( CPF_OptionalParm | CPF_Parm )

void UGFxClikWidget::AS3AddEventListener ( struct FString Type, class UGFxObject* O, unsigned long useCapture, int listenerPriority, unsigned long useWeakReference )
{
	static UFunction* pFnAS3AddEventListener = NULL;

	if ( ! pFnAS3AddEventListener )
		pFnAS3AddEventListener = (UFunction*) UObject::GObjObjects()->Data[ 40835 ];

	UGFxClikWidget_execAS3AddEventListener_Parms AS3AddEventListener_Parms;
	memcpy ( &AS3AddEventListener_Parms.Type, &Type, 0xC );
	AS3AddEventListener_Parms.O = O;
	AS3AddEventListener_Parms.useCapture = useCapture;
	AS3AddEventListener_Parms.listenerPriority = listenerPriority;
	AS3AddEventListener_Parms.useWeakReference = useWeakReference;

	this->ProcessEvent ( pFnAS3AddEventListener, &AS3AddEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              O                              ( CPF_Parm )
// struct FString                 func                           ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::ASAddEventListener ( struct FString Type, class UGFxObject* O, struct FString func )
{
	static UFunction* pFnASAddEventListener = NULL;

	if ( ! pFnASAddEventListener )
		pFnASAddEventListener = (UFunction*) UObject::GObjObjects()->Data[ 40836 ];

	UGFxClikWidget_execASAddEventListener_Parms ASAddEventListener_Parms;
	memcpy ( &ASAddEventListener_Parms.Type, &Type, 0xC );
	ASAddEventListener_Parms.O = O;
	memcpy ( &ASAddEventListener_Parms.func, &func, 0xC );

	this->ProcessEvent ( pFnASAddEventListener, &ASAddEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              O                              ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         Listener                       ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::SetListener ( class UGFxObject* O, struct FString Member, struct FScriptDelegate Listener )
{
	static UFunction* pFnSetListener = NULL;

	if ( ! pFnSetListener )
		pFnSetListener = (UFunction*) UObject::GObjObjects()->Data[ 40834 ];

	UGFxClikWidget_execSetListener_Parms SetListener_Parms;
	SetListener_Parms.O = O;
	memcpy ( &SetListener_Parms.Member, &Member, 0xC );
	memcpy ( &SetListener_Parms.Listener, &Listener, 0xC );

	this->ProcessEvent ( pFnSetListener, &SetListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   Typename                       ( CPF_Parm )

struct FString UGFxClikWidget::GetEventStringFromTypename ( struct FName Typename )
{
	static UFunction* pFnGetEventStringFromTypename = NULL;

	if ( ! pFnGetEventStringFromTypename )
		pFnGetEventStringFromTypename = (UFunction*) UObject::GObjObjects()->Data[ 40833 ];

	UGFxClikWidget_execGetEventStringFromTypename_Parms GetEventStringFromTypename_Parms;
	memcpy ( &GetEventStringFromTypename_Parms.Typename, &Typename, 0x8 );

	this->ProcessEvent ( pFnGetEventStringFromTypename, &GetEventStringFromTypename_Parms, NULL );

	return GetEventStringFromTypename_Parms.ReturnValue;
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020002] 
// Parameters infos:
// struct FString                 Event                          ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::RemoveAllEventListeners ( struct FString Event )
{
	static UFunction* pFnRemoveAllEventListeners = NULL;

	if ( ! pFnRemoveAllEventListeners )
		pFnRemoveAllEventListeners = (UFunction*) UObject::GObjObjects()->Data[ 40837 ];

	UGFxClikWidget_execRemoveAllEventListeners_Parms RemoveAllEventListeners_Parms;
	memcpy ( &RemoveAllEventListeners_Parms.Event, &Event, 0xC );

	this->ProcessEvent ( pFnRemoveAllEventListeners, &RemoveAllEventListeners_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00024002] 
// Parameters infos:
// struct FName                   Type                           ( CPF_Parm )
// struct FScriptDelegate         Listener                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  useCapture                     ( CPF_OptionalParm | CPF_Parm )
// int                            listenerPriority               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  useWeakReference               ( CPF_OptionalParm | CPF_Parm )

void UGFxClikWidget::AddEventListener ( struct FName Type, struct FScriptDelegate Listener, unsigned long useCapture, int listenerPriority, unsigned long useWeakReference )
{
	static UFunction* pFnAddEventListener = NULL;

	if ( ! pFnAddEventListener )
		pFnAddEventListener = (UFunction*) UObject::GObjObjects()->Data[ 40824 ];

	UGFxClikWidget_execAddEventListener_Parms AddEventListener_Parms;
	memcpy ( &AddEventListener_Parms.Type, &Type, 0x8 );
	memcpy ( &AddEventListener_Parms.Listener, &Listener, 0xC );
	AddEventListener_Parms.useCapture = useCapture;
	AddEventListener_Parms.listenerPriority = listenerPriority;
	AddEventListener_Parms.useWeakReference = useWeakReference;

	this->ProcessEvent ( pFnAddEventListener, &AddEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] 
// Parameters infos:
// struct FEventData              Data                           ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::EventListener ( struct FEventData Data )
{
	static UFunction* pFnEventListener = NULL;

	if ( ! pFnEventListener )
		pFnEventListener = (UFunction*) UObject::GObjObjects()->Data[ 40821 ];

	UGFxClikWidget_execEventListener_Parms EventListener_Parms;
	memcpy ( &EventListener_Parms.Data, &Data, 0x28 );

	this->ProcessEvent ( pFnEventListener, &EventListener_Parms, NULL );
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 40171 ];

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 40175 ];

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 40514 ];

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 40530 ];

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 40537 ];

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxMoviePlayer*         Movie                          ( CPF_Parm )
// class UGFxEvent_FSCommand*     Event                          ( CPF_Parm )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxFSCmdHandler_Kismet::eventFSCommand ( class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, struct FString Cmd, struct FString Arg )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = (UFunction*) UObject::GObjObjects()->Data[ 40871 ];

	UGFxFSCmdHandler_Kismet_eventFSCommand_Parms FSCommand_Parms;
	FSCommand_Parms.Movie = Movie;
	FSCommand_Parms.Event = Event;
	memcpy ( &FSCommand_Parms.Cmd, &Cmd, 0xC );
	memcpy ( &FSCommand_Parms.Arg, &Arg, 0xC );

	pFnFSCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	pFnFSCommand->FunctionFlags |= 0x400;

	return FSCommand_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif