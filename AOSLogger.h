/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@interface AOSLogger : NSObject  {
    BOOL _isInternalBuild;
    BOOL _logLevelsMaxedOut;
    BOOL _logLocationIndicatorSent;
}

@property BOOL isInternalBuild;
@property BOOL logLevelsMaxedOut;
@property BOOL logLocationIndicatorSent;

+ (id)sharedInstance;

- (BOOL)isInternalBuild;
- (void)setIsInternalBuild:(BOOL)arg1;
- (void)logSettingsDidChange;
- (void)setLogLevelsMaxedOut:(BOOL)arg1;
- (void)setLogLocationIndicatorSent:(BOOL)arg1;
- (BOOL)logLocationIndicatorSent;
- (BOOL)logLevelsMaxedOut;
- (void)maxOutLogging;
- (void)logAtLevel:(int)arg1 facility:(id)arg2 filename:(const char *)arg3 lineNumber:(int)arg4 function:(const char *)arg5 message:(id)arg6;
- (id)init;

@end