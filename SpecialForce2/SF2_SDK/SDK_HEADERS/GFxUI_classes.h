/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_classes.h
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

// Enum GFxUI.SwfMovie.FlashTextureRescale
/*enum FlashTextureRescale
{
	FlashTextureScale_High                             = 0,
	FlashTextureScale_Low                              = 1,
	FlashTextureScale_NextLow                          = 2,
	FlashTextureScale_Mult4                            = 3,
	FlashTextureScale_None                             = 4,
	FlashTextureScale_MAX                              = 5
};*/

// Enum GFxUI.GFxMoviePlayer.ASType
/*enum ASType
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_Int                                             = 3,
	AS_String                                          = 4,
	AS_Boolean                                         = 5,
	AS_MAX                                             = 6
};*/

// Enum GFxUI.GFxMoviePlayer.GFxAlign
/*enum GFxAlign
{
	Align_Center                                       = 0,
	Align_TopCenter                                    = 1,
	Align_BottomCenter                                 = 2,
	Align_CenterLeft                                   = 3,
	Align_CenterRight                                  = 4,
	Align_TopLeft                                      = 5,
	Align_TopRight                                     = 6,
	Align_BottomLeft                                   = 7,
	Align_BottomRight                                  = 8,
	Align_MAX                                          = 9
};*/

// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
/*enum GFxScaleMode
{
	SM_NoScale                                         = 0,
	SM_ShowAll                                         = 1,
	SM_ExactFit                                        = 2,
	SM_NoBorder                                        = 3,
	SM_MAX                                             = 4
};*/

// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
/*enum GFxTimingMode
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_MAX                                             = 2
};*/

// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
/*enum GFxRenderTextureMode
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxEngine
// 0x0010 (0x004C - 0x003C)
class UGFxEngine : public UObject
{
public:
	TArray< struct FGCReference >                      GCReferences;                                     		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                RefCount;                                         		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2900 ];

		return pClassPointer;
	};

};

UClass* UGFxEngine::pClassPointer = NULL;

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2902 ];

		return pClassPointer;
	};

	bool eventFSCommand ( class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, struct FString Cmd, struct FString Arg );
};

UClass* UGFxFSCmdHandler::pClassPointer = NULL;

// Class GFxUI.GFxInteraction
// 0x0008 (0x0074 - 0x006C)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x006C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bFakeMobileTouches : 1;                           		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2904 ];

		return pClassPointer;
	};

	void CloseAllMoviePlayers ( );
	void NotifySplitscreenLayoutChanged ( );
	void NotifyPlayerRemoved ( int PlayerIndex, class ULocalPlayer* RemovedPlayer );
	void NotifyPlayerAdded ( int PlayerIndex, class ULocalPlayer* AddedPlayer );
	void NotifyGameSessionEnded ( );
	class UGFxMoviePlayer* GetFocusMovie ( int ControllerId );
};

UClass* UGFxInteraction::pClassPointer = NULL;

// Class GFxUI.GFxMoviePlayer
// 0x0160 (0x019C - 0x003C)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                           		// 0x003C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    pCaptureKeys;                                     		// 0x0040 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    pFocusIgnoreKeys;                                 		// 0x0044 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0048 (0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x0084 (0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                    		// 0x00C0 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class USwfMovie*                                   MovieInfo;                                        		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMovieIsOpen : 1;                                 		// 0x00C8 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                 		// 0x00C8 (0x0004) [0x0000000000002002] [0x00000008] ( CPF_Const | CPF_Transient )
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      IsIMECandidateOpen : 1;                           		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      IsIMECompositionStart : 1;                        		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bDoNotAdvance : 1;                                		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bDoNotRender : 1;                                 		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bDoNotRenderTexture : 1;                          		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bAllowInput : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bAllowFocus : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bAutoPlay : 1;                                    		// 0x00C8 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bPauseGameWhileActive : 1;                        		// 0x00C8 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bDisableWorldRendering : 1;                       		// 0x00C8 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bCaptureWorldRendering : 1;                       		// 0x00C8 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bCloseOnLevelChange : 1;                          		// 0x00C8 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bOnlyOwnerFocusable : 1;                          		// 0x00C8 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bForceFullViewport : 1;                           		// 0x00C8 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bDiscardNonOwnerInput : 1;                        		// 0x00C8 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bCaptureInput : 1;                                		// 0x00C8 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bCaptureMouseInput : 1;                           		// 0x00C8 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bIgnoreMouseInput : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                 		// 0x00C8 (0x0004) [0x0000000000002000] [0x00800000] ( CPF_Transient )
	unsigned long                                      bShowHardwareMouseCursor : 1;                     		// 0x00C8 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bBlurLesserMovies : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bHideLesserMovies : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bIsPriorityBlurred : 1;                           		// 0x00C8 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bIsPriorityHidden : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      bIgnoreVisibilityEffect : 1;                      		// 0x00C8 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      bIgnoreBlurEffect : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x40000000] 
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LocalPlayerOwnerIndex;                            		// 0x00D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     ExternalInterface;                                		// 0x00D4 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             CaptureKeys;                                      		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             FocusIgnoreKeys;                                  		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      SceneDPG;                                         		// 0x00F0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TimingMode;                                       		// 0x00F1 (0x0001) [0x0000000000000000]              
	unsigned char                                      RenderTextureMode;                                		// 0x00F2 (0x0001) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x00F3 (0x0001) [0x0000000000000000]              
	TArray< struct FExternalTexture >                  ExternalTextures;                                 		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSoundThemeBinding >                SoundThemes;                                      		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FGFxWidgetBinding >                 WidgetBindings;                                   		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x3C ];                            		// 0x0118 (0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	struct FString                                     IMECompositingString;                             		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fIMECandidateCloseTime;                           		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              fIMECompositionEndTime;                           		// 0x0164 (0x0004) [0x0000000000000000]              
	int                                                IMEConversion;                                    		// 0x0168 (0x0004) [0x0000000000000000]              
	float                                              IMEKeyInputDisableTime;                           		// 0x016C (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        ObjectValues;                                     		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  SplitscreenLayoutObject;                          		// 0x017C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SplitscreenLayoutYAdjust;                         		// 0x0180 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< class UObject* >                           ExternalInterfaceListener;                        		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                        		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2906 ];

		return pClassPointer;
	};

	void RemoveExternalInterfaceListen ( class UObject* Obj );
	void AddExternalInterfaceListen ( class UObject* Obj );
	void UpdateSplitscreenLayout ( );
	void ApplyPriorityVisibilityEffect ( unsigned long bRemoveEffect );
	void ApplyPriorityBlurEffect ( unsigned long bRemoveEffect );
	void eventApplyPriorityEffect ( unsigned long bRequestedBlurState, unsigned long bRequestedHiddenState );
	void PlaySoundFromTheme ( struct FName EventName, struct FName SoundThemeName );
	void eventOnFocusLost ( int LocalPlayerIndex );
	void eventOnFocusGained ( int LocalPlayerIndex );
	void eventConsoleCommand ( struct FString Command );
	class APlayerController* eventGetPC ( );
	class ULocalPlayer* eventGetLP ( );
	void Init ( class ULocalPlayer* LocPlay );
	void SetDefaultIME ( );
	bool eventIsEnableDefaultIME ( );
	bool eventIsInDefaultIME ( struct FString strIME );
	void eventIMETextInputUpdated ( );
	void SetWidgetPathBinding ( class UGFxObject* WidgetToBind, struct FName Path );
	void eventRestoreDevice ( );
	void eventPostWidgetInit ( );
	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	class UGFxObject* ActionScriptConstructor ( struct FString ClassName );
	class UGFxObject* ActionScriptObject ( struct FString Path );
	struct FString ActionScriptString ( struct FString Path );
	float ActionScriptFloat ( struct FString Path );
	int ActionScriptInt ( struct FString Path );
	void ActionScriptVoid ( struct FString Path );
	struct FASValue Invoke ( struct FString method, TArray< struct FASValue > args );
	void ActionScriptSetFunction ( class UGFxObject* Object, struct FString Member );
	class UGFxObject* CreateArray ( );
	class UGFxObject* CreateObject ( struct FString ASClass, class UClass* Type, TArray< struct FASValue > args );
	bool SetVariableStringArray ( struct FString Path, int Index, TArray< struct FString > Arg );
	bool SetVariableFloatArray ( struct FString Path, int Index, TArray< float > Arg );
	bool SetVariableIntArray ( struct FString Path, int Index, TArray< int > Arg );
	bool SetVariableArray ( struct FString Path, int Index, TArray< struct FASValue > Arg );
	bool GetVariableStringArray ( struct FString Path, int Index, TArray< struct FString >* Arg );
	bool GetVariableFloatArray ( struct FString Path, int Index, TArray< float >* Arg );
	bool GetVariableIntArray ( struct FString Path, int Index, TArray< int >* Arg );
	bool GetVariableArray ( struct FString Path, int Index, TArray< struct FASValue >* Arg );
	void SetVariableObject ( struct FString Path, class UGFxObject* Object );
	void SetVariableString ( struct FString Path, struct FString S );
	void SetVariableInt ( struct FString Path, int I );
	void SetVariableNumber ( struct FString Path, float F );
	void SetVariableBool ( struct FString Path, unsigned long B );
	void SetVariable ( struct FString Path, struct FASValue Arg );
	class UGFxObject* GetVariableObject ( struct FString Path, class UClass* Type );
	struct FString GetVariableString ( struct FString Path );
	int GetVariableInt ( struct FString Path );
	float GetVariableNumber ( struct FString Path );
	bool GetVariableBool ( struct FString Path );
	struct FASValue GetVariable ( struct FString Path );
	int GetAVMVersion ( );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void FlushPlayerInput ( unsigned long capturekeysonly );
	void ClearFocusIgnoreKeys ( );
	void AddFocusIgnoreKey ( struct FName Key );
	void ClearCaptureKeys ( );
	void AddCaptureKey ( struct FName Key );
	void SetMovieCanReceiveInput ( unsigned long bCanReceiveInput );
	void SetMovieCanReceiveFocus ( unsigned long bCanReceiveFocus );
	void SetFocus ( unsigned long CaptureInput, unsigned long Focus );
	void SetPerspective3D ( struct FMatrix* matPersp );
	void SetView3D ( struct FMatrix* matView );
	void GetVisibleFrameRect ( float* x0, float* y0, float* X1, float* Y1 );
	void SetAlignment ( unsigned char A );
	void SetViewScaleMode ( unsigned char SM );
	void SetViewport ( int X, int Y, int Width, int Height );
	class UGameViewportClient* GetGameViewportClient ( );
	void SetPriority ( unsigned char NewPriority );
	bool SetExternalTexture ( struct FString Resource, class UTexture* Texture );
	void SetExternalInterface ( class UObject* H );
	void SetTimingMode ( unsigned char Mode );
	void SetMovieInfo ( class USwfMovie* Data );
	void eventConditionalClearPause ( );
	void eventOnCleanup ( );
	void eventOnClose ( );
	void Close ( unsigned long Unload );
	void SetPause ( unsigned long bPausePlayback );
	void OnPostAdvance ( float DeltaTime );
	void PostAdvance ( float DeltaTime );
	void Advance ( float Time );
	bool eventStart ( unsigned long StartPaused );
};

UClass* UGFxMoviePlayer::pClassPointer = NULL;

// Class GFxUI.GFxObject
// 0x003C (0x0078 - 0x003C)
class UGFxObject : public UObject
{
public:
	int                                                Value[ 0xC ];                                     		// 0x003C (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FGFxWidgetBinding >                 SubWidgetBindings;                                		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2908 ];

		return pClassPointer;
	};

	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	int ANSILength ( struct FString Str );
	class UGFxObject* AttachMovie ( struct FString symbolname, struct FString instancename, int Depth, class UClass* Type );
	class UGFxObject* CreateEmptyMovieClip ( struct FString instancename, int Depth, class UClass* Type );
	void GotoAndStopI ( int frame );
	void GotoAndStop ( struct FString frame );
	void GotoAndPlayI ( int frame );
	void GotoAndPlay ( struct FString frame );
	TArray< class UGFxObject* > ActionScriptArray ( struct FString Path );
	class UGFxObject* ActionScriptObject ( struct FString Path );
	struct FString ActionScriptString ( struct FString method );
	float ActionScriptFloat ( struct FString method );
	int ActionScriptInt ( struct FString method );
	void ActionScriptVoid ( struct FString method );
	struct FASValue Invoke ( struct FString Member, TArray< struct FASValue > args );
	void ActionScriptSetFunctionOn ( class UGFxObject* Target, struct FString Member );
	void ActionScriptSetFunction ( struct FString Member );
	void SetElementMemberString ( int Index, struct FString Member, struct FString S );
	void SetElementMemberInt ( int Index, struct FString Member, int I );
	void SetElementMemberFloat ( int Index, struct FString Member, float F );
	void SetElementMemberBool ( int Index, struct FString Member, unsigned long B );
	void SetElementMemberObject ( int Index, struct FString Member, class UGFxObject* val );
	void SetElementMember ( int Index, struct FString Member, struct FASValue Arg );
	struct FString GetElementMemberString ( int Index, struct FString Member );
	int GetElementMemberInt ( int Index, struct FString Member );
	float GetElementMemberFloat ( int Index, struct FString Member );
	bool GetElementMemberBool ( int Index, struct FString Member );
	class UGFxObject* GetElementMemberObject ( int Index, struct FString Member, class UClass* Type );
	struct FASValue GetElementMember ( int Index, struct FString Member );
	void SetElementColorTransform ( int Index, struct FASColorTransform cxform );
	void SetElementPosition ( int Index, float X, float Y );
	void SetElementVisible ( int Index, unsigned long Visible );
	void SetElementDisplayMatrix ( int Index, struct FMatrix M );
	void SetElementDisplayInfo ( int Index, struct FASDisplayInfo D );
	struct FMatrix GetElementDisplayMatrix ( int Index );
	struct FASDisplayInfo GetElementDisplayInfo ( int Index );
	void SetElementString ( int Index, struct FString S );
	void SetElementInt ( int Index, int I );
	void SetElementFloat ( int Index, float F );
	void SetElementBool ( int Index, unsigned long B );
	void SetElementObject ( int Index, class UGFxObject* val );
	void SetElement ( int Index, struct FASValue Arg );
	struct FString GetElementString ( int Index );
	int GetElementInt ( int Index );
	float GetElementFloat ( int Index );
	bool GetElementBool ( int Index );
	class UGFxObject* GetElementObject ( int Index, class UClass* Type );
	struct FASValue GetElement ( int Index );
	void SetText ( struct FString Text, class UTranslationContext* InContext );
	struct FString GetText ( );
	void SetVisible ( unsigned long Visible );
	void SetDisplayMatrix3D ( struct FMatrix M );
	void SetDisplayMatrix ( struct FMatrix M );
	void SetColorTransform ( struct FASColorTransform cxform );
	void SetPosition ( float X, float Y );
	void SetDisplayInfo ( struct FASDisplayInfo D );
	struct FMatrix GetDisplayMatrix3D ( );
	struct FMatrix GetDisplayMatrix ( );
	struct FASColorTransform GetColorTransform ( );
	bool GetPosition ( float* X, float* Y );
	struct FASDisplayInfo GetDisplayInfo ( );
	struct FString TranslateString ( struct FString StringToTranslate, class UTranslationContext* InContext );
	void SetFunction ( struct FString Member, class UObject* context, struct FName fname );
	void SetObject ( struct FString Member, class UGFxObject* val );
	void SetString ( struct FString Member, struct FString S, class UTranslationContext* InContext );
	void SetInt ( struct FString Member, int I );
	void SetFloat ( struct FString Member, float F );
	void SetBool ( struct FString Member, unsigned long B );
	void Set ( struct FString Member, struct FASValue Arg );
	class UGFxObject* GetObject ( struct FString Member, class UClass* Type );
	struct FString GetString ( struct FString Member );
	int GetInt ( struct FString Member );
	float GetFloat ( struct FString Member );
	bool GetBool ( struct FString Member );
	struct FASValue Get ( struct FString Member );
};

UClass* UGFxObject::pClassPointer = NULL;

// Class GFxUI.GFxClikWidget
// 0x000C (0x0084 - 0x0078)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                        		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2910 ];

		return pClassPointer;
	};

	void ASRemoveAllEventListeners ( struct FString Event );
	void AS3AddEventListener ( struct FString Type, class UGFxObject* O, unsigned long useCapture, int listenerPriority, unsigned long useWeakReference );
	void ASAddEventListener ( struct FString Type, class UGFxObject* O, struct FString func );
	void SetListener ( class UGFxObject* O, struct FString Member, struct FScriptDelegate Listener );
	struct FString GetEventStringFromTypename ( struct FName Typename );
	void RemoveAllEventListeners ( struct FString Event );
	void AddEventListener ( struct FName Type, struct FScriptDelegate Listener, unsigned long useCapture, int listenerPriority, unsigned long useWeakReference );
	void EventListener ( struct FEventData Data );
};

UClass* UGFxClikWidget::pClassPointer = NULL;

// Class GFxUI.GFxRawData
// 0x0030 (0x006C - 0x003C)
class UGFxRawData : public UObject
{
public:
	TArray< unsigned char >                            RawData;                                          		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FString >                           ReferencedSwfs;                                   		// 0x0048 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UObject* >                           References;                                       		// 0x0054 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UObject* >                           UserReferences;                                   		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2912 ];

		return pClassPointer;
	};

};

UClass* UGFxRawData::pClassPointer = NULL;

// Class GFxUI.SwfMovie
// 0x0040 (0x00AC - 0x006C)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                 		// 0x006C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                   		// 0x006C (0x0004) [0x0000000000020001] [0x00000002] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bPackTextures : 1;                                		// 0x006C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bForceSquarePacking : 1;                          		// 0x006C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	struct FString                                     SourceFile;                                       		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PackTextureSize;                                  		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TextureRescale;                                   		// 0x0080 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TextureFormat;                                    		// 0x0084 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     SourceFileTimestamp;                              		// 0x0090 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	int                                                RTTextures;                                       		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                RTVideoTextures;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ImportTimeStamp;                                  		// 0x00A4 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2914 ];

		return pClassPointer;
	};

};

UClass* USwfMovie::pClassPointer = NULL;

// Class GFxUI.FlashMovie
// 0x0000 (0x00AC - 0x00AC)
class UFlashMovie : public USwfMovie
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2916 ];

		return pClassPointer;
	};

};

UClass* UFlashMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_CloseMovie
// 0x0008 (0x00F0 - 0x00E8)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUnload : 1;                                      		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2918 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_CloseMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_GetVariable
// 0x0010 (0x00F8 - 0x00E8)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000000]              
	struct FString                                     Variable;                                         		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2920 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_GetVariable::pClassPointer = NULL;

// Class GFxUI.GFxAction_Invoke
// 0x001C (0x0104 - 0x00E8)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000000]              
	struct FString                                     MethodName;                                       		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FASValue >                          Arguments;                                        		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2922 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_Invoke::pClassPointer = NULL;

// Class GFxUI.GFxAction_OpenMovie
// 0x0030 (0x0118 - 0x00E8)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MoviePlayerClass;                                 		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGFxMoviePlayer*                             MoviePlayer;                                      		// 0x00F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTakeFocus : 1;                                   		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bStartPaused : 1;                                 		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x00F8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             CaptureKeys;                                      		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             FocusIgnoreKeys;                                  		// 0x010C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2924 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_OpenMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0010 (0x00F8 - 0x00E8)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             CaptureKeys;                                      		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2926 ];

		return pClassPointer;
	};

};

UClass* UGFxAction_SetCaptureKeys::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetVariable
// 0x0010 (0x00F8 - 0x00E8)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000000]              
	struct FString                                     Variable;                                         		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2928 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_SetVariable::pClassPointer = NULL;

// Class GFxUI.GFxEvent_FSCommand
// 0x0014 (0x0114 - 0x0100)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                            		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FSCommand;                                        		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxFSCmdHandler_Kismet*                     Handler;                                          		// 0x0110 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2930 ];

		return pClassPointer;
	};

};

UClass* UGFxEvent_FSCommand::pClassPointer = NULL;

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2932 ];

		return pClassPointer;
	};

	bool eventFSCommand ( class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, struct FString Cmd, struct FString Arg );
};

UClass* UGFxFSCmdHandler_Kismet::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif