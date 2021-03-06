/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent  {
    BOOL _requestingPlaybackInitialization;
    NSURL *_stationURL;
}

@property(readonly) NSURL * stationURL;
@property(getter=isRequestingPlaybackInitialization,readonly) BOOL requestingPlaybackInitialization;


- (void).cxx_destruct;
- (BOOL)isRequestingPlaybackInitialization;
- (id)stationURL;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
