/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTSiriUIPolicy : _VTStatePolicy  {
    unsigned char _siriState;
    int _notifyToken;
}


- (void)_unregisterForSiriStateUpdates;
- (void)_enabledAssertionStatusUpdated;
- (void)_registerForSiriStateUpdates;
- (id)initWithCallback:(id)arg1 queue:(id)arg2;
- (BOOL)isEnabled;
- (void)dealloc;

@end
