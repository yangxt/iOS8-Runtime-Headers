/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableOrderedSet, NSString, NSOrderedSet;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry  {
}

@property(retain) NSString * entryCloudAssetGUID;
@property(retain) NSOrderedSet * entryComments;
@property(retain) NSOrderedSet * entryLikeComments;
@property(readonly) NSMutableOrderedSet * mutableEntryLikeComments;
@property(readonly) NSMutableOrderedSet * mutableEntryComments;

+ (id)entityName;

- (id)mutableEntryComments;
- (id)mutableEntryLikeComments;
- (BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end