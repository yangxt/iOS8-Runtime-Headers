/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSSerialQueue, FBSDisplay, FBSSceneSettings, NSMutableArray, FBSSceneClientSettings, NSString, <FBSSceneUpdater>, CADisplay, <FBSSceneDelegate>;

@interface FBSSceneImpl : FBSScene  {
    <FBSSceneDelegate> *_delegate;
    NSString *_identifier;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    <FBSSceneUpdater> *_updater;
    CADisplay *_display;
    FBSDisplay *_fbsDisplay;
    FBSSerialQueue *_internalQueue;
    NSMutableArray *_contexts;
    BOOL _shouldObserveContexts;
}

@property(getter=_internalQueue,readonly) FBSSerialQueue * internalQueue;


- (void)_updateContext:(id)arg1;
- (id)_initWithSerialQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)_internalQueue;
- (id)_descriptionWithMultilinePrefix:(id)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (id)_initWithUpdater:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id)arg5;
- (id)contexts;
- (void)updateClientSettingsWithBlock:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)_invalidate;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (id)identifier;
- (id)display;
- (id)clientSettings;
- (id)fbsDisplay;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)settings;
- (id)delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
