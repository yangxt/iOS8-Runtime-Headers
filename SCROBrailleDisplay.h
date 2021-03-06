/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROIOElementProtocol>, <SCROBrailleDriverProtocol>, SCROBrailleLine, SCROBrailleEventDispatcher, NSMutableString, NSLock, <SCROBrailleDisplayDelegate>, NSMutableArray, NSString, <SCROBrailleDisplayCommandDispatcherProtocol>, NSData;

@interface SCROBrailleDisplay : NSObject <SCROBrailleDisplayCommandDispatcherDelegate> {
    NSLock *_contentLock;
    <SCROBrailleDisplayDelegate> *_delegate;
    <SCROBrailleDisplayCommandDispatcherProtocol> *_commandDispatcher;
    <SCROBrailleDriverProtocol> *_brailleDriver;
    <SCROIOElementProtocol> *_ioElement;
    SCROBrailleLine *_brailleLine;
    SCROBrailleLine *_inputBrailleLine;
    int _contractionMode;
    BOOL _isInBrailleEntryMode;
    BOOL _showEightDot;
    BOOL _shouldBatchUpdates;
    BOOL _needsUpdating;
    BOOL _automaticBrailleTranslationEnabled;
    NSString *_driverIdentifier;
    NSString *_driverModelIdentifier;
    int _mainSize;
    int _statusSize;
    BOOL _postsKeyboardEvents;
    int _brailleInputMode;
    struct { 
        NSData *realData; 
        NSData *virtualData; 
        NSData *aggregatedData; 
        int virtualAlignment; 
        int masterStatusCellIndex; 
    } _status;
    SCROBrailleEventDispatcher *_eventDispatcher;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopTimer { } *_inputEventTimer;
    struct __CFRunLoopTimer { } *_blinkerEventTimer;
    BOOL _blinkingEnabled;
    BOOL _inputAllowed;
    BOOL _inputEnabled;
    struct { 
        double quietSince; 
        double busySince; 
        double nextWillMemorizeNotificationTime; 
        double memorizeNextKeyImmediatelyTimeout; 
        BOOL prepareToMemorizeNextKey; 
        BOOL requestPrepareToMemorizeNextKey; 
        BOOL memorizeNextKeyImmediately; 
        BOOL willMemorizeNow; 
        BOOL isQuiet; 
        BOOL newDown; 
        struct __CFArray {} *currentChord; 
        struct __CFSet {} *downKeys; 
        unsigned int routerEvent; 
        BOOL currentBrailleChordContainsSpacebar; 
        BOOL spacebarIsDown; 
        BOOL skipBrailleKeyboardKeyTranslation; 
        struct __CFArray {} *currentBrailleChord; 
        struct __CFSet {} *downBrailleDots; 
        unsigned int currentBrailleModifiers; 
        unsigned int downBrailleModifiers; 
        NSMutableString *brailleString; 
        struct _NSRange { 
            unsigned int location; 
            unsigned int length; 
        } brailleStringSelectionRange; 
        BOOL brailleStringNeedsUpdate; 
        NSMutableArray *brailleStringModifiers; 
        double lastBrailleChordPosted; 
        double brailleCharExponentialMovingAverage; 
        double brailleTranslationTimeout; 
    } _input;
    BOOL _isValid;
    BOOL _delegateWantsDisplayCallback;
}

@property BOOL delegateWantsDisplayCallback;
@property BOOL inputAllowed;
@property BOOL automaticBrailleTranslationEnabled;

+ (id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
+ (BOOL)brailleDriverClassIsValid:(Class)arg1;

- (void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1;
- (BOOL)automaticBrailleTranslationEnabled;
- (void)_blinkerEventHandler;
- (void)_inputEventHandler;
- (id)_newBrailleKeyboardKeyForText:(id)arg1 modifiers:(unsigned int)arg2;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2;
- (void)simulateKeypress:(id)arg1;
- (void)setStatusAttributesWithMasterCellIndex:(long)arg1 virtualAlignment:(int)arg2;
- (void)setDelegateWantsDisplayCallback:(BOOL)arg1;
- (BOOL)delegateWantsDisplayCallback;
- (long)masterStatusCellIndex;
- (int)virtualStatusAlignment;
- (void)setVirtualStatusAlignment:(int)arg1;
- (id)aggregatedStatus;
- (void)setAggregatedStatus:(id)arg1;
- (id)virtualStatus;
- (id)realStatus;
- (void)setBrailleFormatter:(id)arg1;
- (void)setInputAllowed:(BOOL)arg1;
- (id)ioElement;
- (id)lineDescriptor;
- (id)driverModelIdentifier;
- (id)driverIdentifier;
- (void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandTranslateForDispatcher:(id)arg1;
- (void)handleCommandEscapeForDispatcher:(id)arg1;
- (void)handleCommandForwardDeleteForDispatcher:(id)arg1;
- (void)handleCommandDeleteForDispatcher:(id)arg1;
- (void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandMoveRightForDispatcher:(id)arg1;
- (void)handleCommandMoveLeftForDispatcher:(id)arg1;
- (void)handleCommandPanRightForDispatcher:(id)arg1;
- (void)handleCommandPanLeftForDispatcher:(id)arg1;
- (void)_delayedSleepNotification:(id)arg1;
- (void)_delayedConfigurationChangeNotification;
- (void)_delayedUnloadNotification;
- (void)_stopMemorization;
- (id)_newBrailleKeyForCurrentBrailleChord;
- (BOOL)_hasBrailleChord;
- (id)_newBrailleKeyForCurrentKeyChord;
- (BOOL)_hasPressedBrailleKeys;
- (BOOL)_hasKeyChord;
- (id)brailleInputManager;
- (BOOL)inputAllowed;
- (void)panRight;
- (void)panLeft;
- (void)_appendTranslatedBrailleStringEventsToArray:(struct __CFArray {}**)arg1;
- (void)_processKeyEvents:(id)arg1;
- (void)setMasterStatusCellIndex:(long)arg1;
- (void)_setBrailleInputFormatter:(id)arg1;
- (void)_updateBrailleInputFormatter;
- (void)_translateBrailleStringAndPostEvent;
- (id)_statusStringWithDictionary:(id)arg1;
- (void)_setBrailleFormatter:(id)arg1;
- (void)_setBatchUpdates:(id)arg1;
- (void)_bulkStatusAttributesHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_configurationChangeHandler;
- (void)_unloadHandler;
- (void)_setIsInBrailleEntryMode:(BOOL)arg1;
- (BOOL)_isMemorizingKeys;
- (void)_panHandler:(id)arg1;
- (void)_setDelegateWantsDisplayCallbackHandler:(id)arg1;
- (void)_aggregatedStatusHandler:(id)arg1;
- (void)_statusDisplayHandler:(id)arg1;
- (void)_setBrailleFormatterHandler:(id)arg1;
- (int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3;
- (void)_sleepNotification:(id)arg1;
- (void)_configurationChangeNotification:(id)arg1;
- (void)_unloadNotification:(id)arg1;
- (void)_delayedDisplayLoad;
- (id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4;
- (int)statusSize;
- (int)mainSize;
- (void)_runThread;
- (id)configuration;
- (long)token;
- (BOOL)isLoaded;
- (void)endUpdates;
- (void)beginUpdates;
- (void)handleEvent:(id)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (void)dealloc;
- (void)_updateDisplay;

@end
