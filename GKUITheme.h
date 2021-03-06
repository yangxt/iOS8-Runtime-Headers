/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImage, NSCache, GKGameListIconBrush, GKNetworkImageSource;

@interface GKUITheme : NSObject  {
    NSCache *_resourceCache;
}

@property(retain,readonly) GKNetworkImageSource * macGameIconSource;
@property(retain,readonly) GKNetworkImageSource * gameListIconSource;
@property(retain,readonly) GKNetworkImageSource * photoListSource;
@property(retain,readonly) GKNetworkImageSource * photoDetailSource;
@property(retain,readonly) GKNetworkImageSource * iconLeaderboardListSource;
@property(retain,readonly) GKNetworkImageSource * iconLeaderboardSetListSource;
@property(readonly) GKNetworkImageSource * untreatedAchievementImageSource;
@property(retain,readonly) GKGameListIconBrush * gameListIconBrush;
@property(retain,readonly) UIImage * ratingStarsBackgroundImage;
@property(retain,readonly) UIImage * ratingStarsForegroundImage;
@property(retain,readonly) UIImage * interactiveRatingStarsForeground;
@property(retain,readonly) UIImage * interactiveRatingStarsBackground;
@property(readonly) struct CGSize { float x1; float x2; } formSheetSize;
@property(readonly) float formSheetCornerRadius;
@property(retain) NSCache * resourceCache;

+ (id)sharedTheme;

- (id)navbarActionButtonIcon;
- (id)removePlayerButtonImage;
- (id)addPlayerButtonImage;
- (id)iconLeaderboardSetListSource;
- (id)iconLeaderboardListSource;
- (id)untreatedAchievementImageSource;
- (float)formSheetCornerRadius;
- (id)tabbarIconTurnsSelected:(BOOL)arg1;
- (id)tabbarIconChallengesSelected:(BOOL)arg1;
- (id)tabbarIconMeSelected:(BOOL)arg1;
- (id)tabbarIconGamesSelected:(BOOL)arg1;
- (id)tabbarIconFriendsSelected:(BOOL)arg1;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)eventIconImage;
- (id)interactiveRatingStarsBackground;
- (id)interactiveRatingStarsForeground;
- (id)defaultLeaderboardIcon;
- (id)defaultPlayerPhoto;
- (id)gameListIconBrush;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(id)arg2;
- (id)resourceWithName:(id)arg1 missingHandler:(id)arg2;
- (id)_tabBarIconImageNamed:(id)arg1 selectedName:(id)arg2 selected:(BOOL)arg3;
- (void)setResourceCache:(id)arg1;
- (id)resourceCache;
- (void)clearResourceCache;
- (id)macGameIconSource;
- (id)gameListIconSource;
- (id)photoDetailSource;
- (id)photoListSource;
- (id)bubbleTurns;
- (id)bubbleSignin;
- (id)bubbleShare;
- (id)bubbleRequests;
- (id)bubblePoints;
- (id)bubblePlay;
- (id)bubbleInvite;
- (id)bubbleGames;
- (id)bubbleDecline;
- (id)bubbleChallenges;
- (id)bubbleAccept;
- (id)bubbleHighlight;
- (id)bubbleFriends;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)statusDotImage;
- (id)ratingStarsForegroundImage;
- (id)ratingStarsBackgroundImage;
- (struct CGSize { float x1; float x2; })formSheetSize;
- (id)imageNamed:(id)arg1;
- (void)dealloc;
- (id)init;

@end
