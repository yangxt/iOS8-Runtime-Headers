/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIVisualEffectContentView, UIView, NSString, UIVisualEffect;

@interface UIVisualEffectView : UIView <NSSecureCoding> {
    _UIVisualEffectContentView *_contentView;
    NSString *_groupName;
    UIVisualEffect *_effect;
}

@property(retain) UIView * contentView;
@property(copy) UIVisualEffect * effect;
@property(setter=_setGroupName:,copy) NSString * _groupName;

+ (BOOL)supportsSecureCoding;

- (void)setEffect:(id)arg1;
- (void)_applyGroupNameToSubviews;
- (void)_configureForEffectConfig:(id)arg1;
- (void)_configureForEffectSettings:(id)arg1;
- (id)effect;
- (void)_setEffect:(id)arg1;
- (void)_createContentViewIfNecessary;
- (void)_configureForCurrentEffect;
- (void)_setGroupName:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)_groupName;
- (void)setMaskView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end