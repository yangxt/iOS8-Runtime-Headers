/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent  {
    unsigned int _shuffleType;
}

@property(readonly) unsigned int shuffleType;


- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (unsigned int)shuffleType;

@end
