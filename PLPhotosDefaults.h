/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject  {
    BOOL _shouldRepeat;
    BOOL _shouldShuffle;
    BOOL _shouldPlayMusic;
    BOOL _summarizeMomentSections;
    int _transition;
    int _secondsPerSlide;
    MPMediaItemCollection *_musicCollection;
}

+ (int)randomTransition;
+ (id)sharedInstance;

- (void)reloadPhotoDefaultValues;
- (void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1;
- (void)setShouldPlayMusic:(BOOL)arg1;
- (int)transitionForAnimationMovingForward:(BOOL)arg1;
- (BOOL)shouldRepeat;
- (BOOL)shouldShuffle;
- (BOOL)shouldPlayMusic;
- (int)secondsPerSlide;
- (int)transition;
- (void)setTransition:(int)arg1;
- (BOOL)summarizeMomentSections;
- (id)musicCollection;
- (void)setMusicCollection:(id)arg1;
- (void)dealloc;
- (id)init;

@end