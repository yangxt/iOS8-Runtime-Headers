/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSArray, GKBubbleFlowRootViewController;

@interface GKTabBarController : UITabBarController  {
    GKBubbleFlowRootViewController *_bubbleFlowRootViewController;
    unsigned int _deferedRotationCount;
}

@property(readonly) NSArray * modalChildViewControllers;
@property(readonly) BOOL tabBarCovered;
@property(retain) GKBubbleFlowRootViewController * bubbleFlowRootViewController;
@property unsigned int deferedRotationCount;


- (int)lastKnownOrientation;
- (id)deferRotation;
- (void)clearInterstitialViewAnimated:(BOOL)arg1;
- (void)showInterstitialViewAnimated:(BOOL)arg1;
- (BOOL)tabBarCovered;
- (void)setDeferedRotationCount:(unsigned int)arg1;
- (unsigned int)deferedRotationCount;
- (BOOL)_isBeingCoveredByBubbleFlowRootViewController;
- (id)bubbleFlowRootViewController;
- (void)_ensureWeHaveAPresentedBubbleFlowRootViewController;
- (BOOL)_useBubbleFlowRootViewControllerToPresent:(id)arg1;
- (void)setBubbleFlowRootViewController:(id)arg1;
- (BOOL)_hasBubbleFlowRootViewController;
- (id)modalChildViewControllers;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(id)arg2;
- (id)viewControllers;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (id)init;

@end
