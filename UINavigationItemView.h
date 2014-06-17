/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, UINavigationItem, UIView;

@interface UINavigationItemView : UIView  {
    UINavigationItem *_item;
    struct CGSize { 
        float width; 
        float height; 
    } _titleSize;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    BOOL _isCrossFading;
    BOOL _customFontSet;
    UILabel *_label;
    BOOL _isFadingInFromCustomAlpha;
}

@property(setter=_setFadingInFromCustomAlpha:) BOOL _isFadingInFromCustomAlpha;


- (void)_adjustLabelTrackingIfNecessary;
- (id)font;
- (void)_updateLabelContents;
- (void)_updateLabel;
- (float)_titleYAdjustmentCustomization;
- (id)_currentTextShadowColorForBarStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })_currentTextShadowOffsetForBarStyle:(int)arg1;
- (id)_currentTextColorForBarStyle:(int)arg1;
- (BOOL)_useSilverLookForBarStyle:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (void)_setFont:(id)arg1;
- (id)_defaultFont;
- (void)_setFadingInFromCustomAlpha:(BOOL)arg1;
- (BOOL)_isFadingInFromCustomAlpha;
- (struct CGSize { float x1; float x2; })_titleSize;
- (void)_cleanUpCrossView;
- (void)_crossFadeHiddingButton:(BOOL)arg1;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateLabelColor;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (BOOL)titleAutoresizesToFit;
- (id)initWithNavigationItem:(id)arg1;
- (void)_setLineBreakMode:(int)arg1;
- (void)_resetTitleSize;
- (id)_scriptingInfo;
- (void)setFont:(id)arg1;
- (id)title;
- (id)navigationItem;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end