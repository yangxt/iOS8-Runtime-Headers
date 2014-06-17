/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSNumber, MPMediaQuery, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject  {
    BOOL _wantsArtwork;
    MPMediaQuery *_albumItemsQuery;
    unsigned int _tokenID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseBlock;

    NSNumber *_storeLookupID;
}

@property(readonly) MPMediaQuery * albumItemsQuery;
@property(readonly) BOOL wantsArtwork;
@property(readonly) unsigned int tokenID;
@property(copy,readonly) id responseBlock;
@property(readonly) NSNumber * storeLookupID;
@property(readonly) NSString * storeLookupIDString;

+ (id)storeLookupIDForAlbumItemsQuery:(id)arg1;

- (void).cxx_destruct;
- (id)storeLookupID;
- (id)responseBlock;
- (unsigned int)tokenID;
- (id)albumItemsQuery;
- (id)newLookupRequest;
- (id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1;
- (id)initWithAlbumItemsQuery:(id)arg1 tokenID:(int)arg2 wantsArtwork:(BOOL)arg3 responseBlock:(id)arg4;
- (id)storeLookupIDString;
- (id)lookupRequestForStorePlaylistIdentifier:(id)arg1;
- (id)_specificationForArtworkSizesToRequest;
- (BOOL)wantsArtwork;

@end