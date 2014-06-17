/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, CKShareID, NSArray;

@interface CKDLikeItemsURLRequest : CKDURLRequest  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _itemLikedProgressBlock;

    NSArray *_itemIDsToLike;
    NSArray *_itemIDsToUnlike;
    CKShareID *_shareID;
    NSMutableDictionary *_itemIDsByRequestID;
}

@property(copy) id itemLikedProgressBlock;
@property(retain) NSArray * itemIDsToLike;
@property(retain) NSArray * itemIDsToUnlike;
@property(retain) CKShareID * shareID;
@property(retain) NSMutableDictionary * itemIDsByRequestID;


- (int)operationType;
- (void)setItemIDsByRequestID:(id)arg1;
- (id)itemIDsByRequestID;
- (void)setItemIDsToUnlike:(id)arg1;
- (void)setItemIDsToLike:(id)arg1;
- (id)initWithItemIDsToLike:(id)arg1 itemIDsToUnlike:(id)arg2 inShare:(id)arg3;
- (id)itemLikedProgressBlock;
- (id)itemIDsToUnlike;
- (id)itemIDsToLike;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (id)requestOperationClasses;
- (int)partitionType;
- (int)serverType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void)setItemLikedProgressBlock:(id)arg1;
- (void).cxx_destruct;

@end