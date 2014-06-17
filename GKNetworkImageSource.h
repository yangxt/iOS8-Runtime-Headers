/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource  {
    NSMutableDictionary *_loadingGroups;
}

@property NSMutableDictionary * loadingGroups;


- (void)setLoadingGroups:(id)arg1;
- (id)loadingGroups;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(id)arg4;
- (BOOL)imageNeedsRefresh:(id)arg1;
- (void)dealloc;

@end