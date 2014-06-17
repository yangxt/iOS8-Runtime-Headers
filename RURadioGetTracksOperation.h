/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPUserNotification, ISDialogOperation, NSLock, RadioStation, RadioGetTracksRequest, RadioPlaybackContext, RadioRequestContext;

@interface RURadioGetTracksOperation : NSOperation  {
    ISDialogOperation *_dialogOperation;
    MPUserNotification *_explicitUserNotification;
    RadioGetTracksRequest *_getTracksRequest;
    NSLock *_lock;
    unsigned int _numberOfTracks;
    RadioPlaybackContext *_playbackContext;
    RadioRequestContext *_requestContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseBlock;

    int _reasonType;
    RadioStation *_station;
}

@property unsigned int numberOfTracks;
@property(copy) RadioPlaybackContext * playbackContext;
@property(readonly) int reasonType;
@property(retain) RadioRequestContext * requestContext;
@property(copy) id responseBlock;
@property(readonly) RadioStation * station;


- (void)setResponseBlock:(id)arg1;
- (id)station;
- (unsigned int)numberOfTracks;
- (void)setRequestContext:(id)arg1;
- (int)reasonType;
- (id)playbackContext;
- (id)_heartbeatTokenDataAllowingDelay:(BOOL)arg1 error:(id*)arg2;
- (id)_runFullGetTracksProcessAllowingNoAvailableVersionDialog:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_newGetTracksRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (void)setPlaybackContext:(id)arg1;
- (void)setNumberOfTracks:(unsigned int)arg1;
- (id)initWithStation:(id)arg1 reasonType:(int)arg2;
- (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (void)dealloc;
- (id)responseBlock;
- (id)requestContext;

@end