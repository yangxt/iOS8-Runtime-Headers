/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class NSString, NSObject<OS_dispatch_queue>, NSDictionary, MediaControlClient;

@interface FigCPEFPAirPlaySession : NSObject  {
    BOOL _invalid;
    unsigned long _fairPlayContext;
    NSDictionary *_protectionInfo;
    NSDictionary *_contentInfo;
    MediaControlClient *_mediaControlClient;
    NSString *_mediaControlUUID;
    unsigned long _vodkaVersion;
    struct FPStreamOpaque_ { } *_fairPlaySession;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}


- (id)mediaControlParamsWithStoreResponse:(id)arg1;
- (id)legacySinfs;
- (id)sicWithPic:(id)arg1;
- (id)createPicRequest;
- (id)initWithFairPlayContext:(unsigned long)arg1 routeInfo:(id)arg2 mediaControlClient:(id)arg3 mediaControlUUID:(id)arg4;
- (void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(id)arg2;
- (void)endSession;
- (id)initWithFairPlayContext:(unsigned long)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 mediaControlClient:(id)arg4 mediaControlUUID:(id)arg5;
- (id)initWithFairPlayContext:(unsigned long)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 mediaControlClient:(id)arg4 mediaControlUUID:(id)arg5;
- (void)dealloc;
- (void)finalize;

@end