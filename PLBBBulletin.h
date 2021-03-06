/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet, NSString, NSArray, NSDate, NSDictionary;

@interface PLBBBulletin : NSObject  {
    long long _bulletinType;
    NSString *_senderName;
    NSString *_senderEmailAddress;
    NSString *_albumTitle;
    NSString *_photosBatchID;
    NSString *_mainAssetUUID;
    BOOL _mainAssetIsMine;
    BOOL _mainAssetIsVideo;
    BOOL _containsBatchFirstKnownAsset;
    NSMutableSet *_assetUUIDs;
    int _assetCount;
    NSMutableSet *_placeholderAssetUUIDs;
    NSMutableSet *_lowResThumbAssetUUIDs;
    int _invitationState;
    NSString *_firstCommentGUID;
    NSDate *_commentDate;
    NSString *_commentText;
    int _commentCount;
    BOOL _commentIsCaption;
    BOOL _suppressAlert;
    NSMutableSet *_senderNames;
    BOOL _forMultipleAsset;
    BOOL _allMultipleAssetIsMine;
    BOOL _isMixedType;
    unsigned int _recordID;
    unsigned int _replacedBulletinRecordID;
    unsigned int _originalRecordID;
    NSString *_albumUUID;
    NSDate *_date;
    NSDate *_originalDate;
    NSDate *_expirationDate;
}

@property(readonly) long long bulletinType;
@property unsigned int recordID;
@property unsigned int replacedBulletinRecordID;
@property unsigned int originalRecordID;
@property(readonly) NSString * albumUUID;
@property(readonly) NSString * mainAssetUUID;
@property(readonly) NSString * senderEmailAddress;
@property(readonly) NSString * title;
@property(readonly) NSString * message;
@property(readonly) NSDate * date;
@property(copy) NSDate * originalDate;
@property(readonly) NSDate * expirationDate;
@property(readonly) NSString * destinationURLString;
@property(readonly) BOOL hasThumbnail;
@property(readonly) NSArray * suppressionContexts;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) BOOL canMergeWithPersistedBulletins;
@property(readonly) BOOL allAssetsAreFullResolution;
@property(readonly) BOOL thumbnailAssetIsPlaceholder;
@property(readonly) double completionPercentage;
@property BOOL suppressAlert;


- (BOOL)suppressAlert;
- (id)expirationDate;
- (unsigned int)recordID;
- (BOOL)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
- (double)completionPercentage;
- (BOOL)thumbnailAssetIsPlaceholder;
- (BOOL)allAssetsAreFullResolution;
- (id)bulletinByMergingWithBulletin:(id)arg1;
- (id)suppressionContexts;
- (id)destinationURLString;
- (id)_localizedCountFormatter;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletinDictionary:(id)arg2;
- (id)originalDate;
- (id)_initWithLikesCount:(int)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12 senderNames:(id)arg13 forMultipleAsset:(BOOL)arg14 allMultipleAssetIsMine:(BOOL)arg15 isMixedType:(BOOL)arg16;
- (id)_initWithCommentsCount:(int)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12;
- (void)setSuppressAlert:(BOOL)arg1;
- (void)setOriginalDate:(id)arg1;
- (void)setReplacedBulletinRecordID:(unsigned int)arg1;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletin:(id)arg2;
- (id)_initWithType:(long long)arg1;
- (id)bulletinByMergingWithBulletinDictionary:(id)arg1;
- (BOOL)canMergeWithPersistedBulletins;
- (void)setOriginalRecordID:(unsigned int)arg1;
- (unsigned int)originalRecordID;
- (void)setRecordID:(unsigned int)arg1;
- (BOOL)isCommentPiggyBackedOnPhotosAddedBulletin;
- (id)albumUUID;
- (long long)bulletinType;
- (unsigned int)replacedBulletinRecordID;
- (id)initWithLikeAdded:(id)arg1;
- (id)mainAssetUUID;
- (id)initWithCommentAdded:(id)arg1;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned int)arg2 toAlbum:(id)arg3;
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)senderEmailAddress;
- (id)initWithInvitationAlbum:(id)arg1;
- (BOOL)hasThumbnail;
- (id)dictionaryRepresentation;
- (id)message;
- (id)date;
- (id)title;
- (id)description;
- (void)dealloc;
- (id)init;

@end
