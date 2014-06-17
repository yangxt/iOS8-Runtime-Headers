/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class NSString, CALayer;

@interface MCDButton : UIButton  {
    CALayer *_focusColorLayer;
    BOOL _showBezelInTouch;
    NSString *_labelTemplateString;
}

@property(copy) NSString * labelTemplateString;
@property(getter=isSelected) BOOL selected;
@property BOOL showBezelInTouch;

+ (id)buttonWithType:(int)arg1;

- (BOOL)showBezelInTouch;
- (id)labelTemplateString;
- (void)_updateButtonStyle;
- (void)setLabelTemplateString:(id)arg1;
- (void)setShowBezelInTouch:(BOOL)arg1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)_isFocusableElement;
- (void)_focusStateDidChange;
- (void)layoutSubviews;

@end