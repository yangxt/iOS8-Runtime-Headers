/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView  {
    unsigned int _scaleMode;
}

@property(retain) AVPlayer * player;
@property unsigned int scaleMode;
@property(retain,readonly) AVPlayerLayer * layer;

+ (Class)layerClass;

- (id)player;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)scaleMode;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1 duration:(double)arg2;
- (void)setScaleMode:(unsigned int)arg1;

@end