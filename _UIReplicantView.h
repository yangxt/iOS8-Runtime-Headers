/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UISlotIdWrapper, UIScreen, _UIReplicantContentView;

@interface _UIReplicantView : UIView  {
    _UISlotIdWrapper *_slotIdWrapper;
    UIScreen *_screen;
    struct CGSize { 
        float width; 
        float height; 
    } _snapshotSize;
    _UIReplicantContentView *_contentView;
}

+ (id)snapshotWithScreen:(id)arg1 defer:(BOOL)arg2;
+ (id)snapshotWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)snapshotContext;
+ (id)_pendingSnapshotOfTarget:(id)arg1 snapshotBlock:(id)arg2;
+ (id)snapshotWithView:(id)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 defer:(BOOL)arg4;
+ (Class)layerClass;

- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_appliedTransform;
- (id)_copyResizableSnapshotViewFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
