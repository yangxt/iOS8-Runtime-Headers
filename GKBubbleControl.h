/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKBubbleView;

@interface GKBubbleControl : UIControl <NSCopying> {
    BOOL _animatingIn;
    BOOL _animateOnTouch;
    GKBubbleView *_bubbleView;
}

@property(getter=isSharedBubble,readonly) BOOL sharedBubble;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } screenFrame;
@property(readonly) struct CGPoint { float x1; float x2; } screenPosition;
@property(readonly) struct CGSize { float x1; float x2; } screenSize;
@property union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } worldPosition;
@property(readonly) union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } worldSize;
@property int bubbleType;
@property(retain) GKBubbleView * bubbleView;
@property BOOL animateOnTouch;


- (struct CGSize { float x1; float x2; })screenSize;
- (void)bounceAfterDelay:(double)arg1 fromZ:(float)arg2 toZ:(float)arg3;
- (BOOL)bouncing;
- (void)setBubbleView:(id)arg1;
- (id)pathForHitTesting;
- (void)didTouchUp;
- (void)didTouchDown;
- (BOOL)animateOnTouch;
- (void)setAnimateOnTouch:(BOOL)arg1;
- (void)setBubbleType:(int)arg1;
- (id)contentsWrapperView;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPositionForScreenFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScreenFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenFrame;
- (void)setScreenPosition:(struct CGPoint { float x1; float x2; })arg1 andScreenSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setWorldPosition:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg1;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPositionForScreenPosition:(struct CGPoint { float x1; float x2; })arg1 andScreenSize:(struct CGSize { float x1; float x2; })arg2;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldSize;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPosition;
- (BOOL)isSharedBubble;
- (id)bubbleView;
- (struct CGPoint { float x1; float x2; })screenPosition;
- (int)bubbleType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (id)description;
- (void)dealloc;

@end
