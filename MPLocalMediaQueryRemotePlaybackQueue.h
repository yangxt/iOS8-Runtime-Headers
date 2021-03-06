/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaQuery;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue  {
    MPMediaQuery *_mediaQuery;
    MPMediaItem *_firstItem;
    unsigned int _shuffleType;
    unsigned int _repeatType;
}

@property(readonly) MPMediaQuery * mediaQuery;
@property(readonly) MPMediaItem * firstItem;
@property(readonly) unsigned int shuffleType;
@property(readonly) unsigned int repeatType;


- (void).cxx_destruct;
- (id)firstItem;
- (id)mediaQuery;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (unsigned int)shuffleType;
- (unsigned int)repeatType;

@end
