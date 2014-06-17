/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSThread;

@interface GEORequester : PBRequester  {
    BOOL _disableReplay;
    NSThread *_thread;
    BOOL _usePersistentConnection;
    BOOL _useBackgroundConnection;
    NSString *_debugRequestName;
}

@property BOOL disableReplay;
@property(retain) NSString * debugRequestName;

+ (void)setOSVersion:(id)arg1;
+ (void)setAppID:(id)arg1;
+ (void)replayRequests;
+ (void)stopAllRequests;
+ (void)enablePersistentConnection;
+ (void)setLogRequestResponseDirectory:(id)arg1;
+ (id)_logRequestResponseDirectory;

- (void)setDisableReplay:(BOOL)arg1;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2;
- (id)persistentConnectionSession;
- (struct _CFURLRequest { }*)newCFMutableURLRequestWithURL:(id)arg1;
- (id)requestPreamble;
- (id)logResponseToFile;
- (id)logRequestToFile;
- (id)debugRequestName;
- (void)startWithConnectionProperties:(id)arg1;
- (void)_handleResumeOnThread;
- (BOOL)disableReplay;
- (void)_handleSuspendOnThread;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_applicationDidStopAllRequests:(id)arg1;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (void)setDebugRequestName:(id)arg1;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 useBackgroundConnection:(BOOL)arg3;
- (void)start;
- (void)dealloc;

@end