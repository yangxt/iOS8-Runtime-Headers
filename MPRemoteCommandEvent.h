/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPRemoteCommand, NSDictionary;

@interface MPRemoteCommandEvent : NSObject  {
    NSDictionary *_mediaRemoteOptions;
    MPRemoteCommand *_command;
    double _timestamp;
}

@property(readonly) MPRemoteCommand * command;
@property(readonly) double timestamp;

+ (id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (double)timestamp;
- (id)init;
- (id)command;
- (id)mediaRemoteOptions;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end