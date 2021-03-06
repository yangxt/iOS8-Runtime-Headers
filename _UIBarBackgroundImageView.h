/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIView;

@interface _UIBarBackgroundImageView : UIImageView  {
    UIView *_topStripView;
    UIImageView *_customImageContainer;
    BOOL _translucent;
}

@property(getter=isTranslucent) BOOL translucent;


- (void)removeTopStripView;
- (void)updateTopStripViewCreateIfNecessary;
- (void)setTranslucent:(BOOL)arg1;
- (id)topStripView;
- (id)image;
- (BOOL)isTranslucent;
- (void)setImage:(id)arg1;

@end
