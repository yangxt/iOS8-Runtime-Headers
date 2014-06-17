/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSValue, _UIBarBackButtonItemAppearanceStorage, UIColor, NSMutableDictionary;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage  {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    UIColor *tintColor;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property(retain) UIColor * tintColor;
@property(retain) NSValue * titlePositionOffset;
@property(retain) NSValue * miniTitlePositionOffset;
@property(retain) NSValue * backButtonTitlePositionOffset;
@property(retain) NSValue * miniBackButtonTitlePositionOffset;


- (void)setBackButtonTitlePositionOffset:(id)arg1;
- (void)setMiniBackButtonTitlePositionOffset:(id)arg1;
- (void)setBackButtonBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (float)backButtonBackgroundVerticalAdjustmentForBarMetrics:(int)arg1;
- (id)backButtonTitlePositionOffset;
- (id)miniBackButtonTitlePositionOffset;
- (id)anyBackButtonBackgroundImage;
- (void)setTitlePositionOffset:(id)arg1;
- (void)setMiniTitlePositionOffset:(id)arg1;
- (void)setBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (float)backgroundVerticalAdjustmentForBarMetrics:(int)arg1;
- (id)titlePositionOffset;
- (id)miniTitlePositionOffset;
- (id)anyBackgroundImage;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)backButtonBackgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 isMini:(BOOL)arg4;
- (id)backgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(BOOL)arg3;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)dealloc;

@end