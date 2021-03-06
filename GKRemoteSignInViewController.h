/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGame;

@interface GKRemoteSignInViewController : GKRemoteViewController <SignInServiceViewControllerDelegate> {
}

@property(retain) GKGame * game;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)unlockRotation;
- (id)_managingHostedAuthenticateViewController;
- (void)populateInitialStateForRemoteView:(id)arg1;
- (BOOL)serviceNeedsLocalPlayer;
- (void)remoteViewControllerIsCanceling;

@end
