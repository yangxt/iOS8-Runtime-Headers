/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    int _mainSize;
    int _statusSize;
}


- (BOOL)setStatusCells:(const char *)arg1 length:(int)arg2;
- (BOOL)setMainCells:(const char *)arg1 length:(int)arg2;
- (int)statusSize;
- (int)mainSize;
- (id)getInputEvents;
- (int)brailleInputMode;
- (BOOL)postsKeyboardEvents;
- (BOOL)isInputEnabled;
- (BOOL)supportsBlinkingCursor;
- (BOOL)isSleeping;
- (BOOL)isDriverLoaded;
- (BOOL)unloadDriver;
- (int)loadDriverWithIOElement:(id)arg1;
- (unsigned int)interfaceVersion;
- (id)modelIdentifier;
- (void)dealloc;
- (id)init;

@end