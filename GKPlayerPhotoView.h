/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImage, GKPlayer;

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer> {
    GKPlayer *_player;
    UIImage *_actualImage;
    int _onAdaptiveBackground;
}

@property(retain) UIImage * actualImage;
@property(getter=isOnAdaptiveBackground) int onAdaptiveBackground;
@property(retain) GKPlayer * player;

+ (void)initialize;

- (id)player;
- (int)isOnAdaptiveBackground;
- (void)refreshPhoto;
- (void)setOnAdaptiveBackground:(int)arg1;
- (void)refreshPhotoWithCompletionHandler:(id)arg1;
- (void)setActualImage:(id)arg1;
- (id)actualImage;
- (void)setHighlighted:(BOOL)arg1;
- (void)invalidateIntrinsicContentSize;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)dealloc;

@end