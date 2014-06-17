/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class <PLBasebandLogChannelDelegate>;

@interface PLBasebandLogChannel : NSObject  {
    struct __CFMessagePort { } *remotePort;
    struct __CFMessagePort { } *localPort;
    BOOL cachingEnabled;
    <PLBasebandLogChannelDelegate> *delegate;
}

@property <PLBasebandLogChannelDelegate> * delegate;
@property(readonly) BOOL isValid;
@property BOOL cachingEnabled;


- (void)connectionInvalidated:(id)arg1;
- (void)setChannelTimeout:(double)arg1;
- (void)setHardwareLoggingLevel:(unsigned int)arg1 withWindowSize:(unsigned int)arg2;
- (void)enableLogCodes:(id)arg1 andEvents:(id)arg2;
- (void)commitHardwareLogs;
- (BOOL)openWithConnection:(id)arg1;
- (BOOL)cachingEnabled;
- (void)sendObjectOverRemotePort:(id)arg1;
- (void)setCachingEnabled:(BOOL)arg1;
- (void)close;
- (BOOL)isValid;
- (id)delegate;
- (void)invalidate;
- (void)flush;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end