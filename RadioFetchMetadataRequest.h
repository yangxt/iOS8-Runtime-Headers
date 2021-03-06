/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSData, SSURLConnectionRequest;

@interface RadioFetchMetadataRequest : RadioRequest  {
    SSURLConnectionRequest *_request;
    NSArray *_itemIDs;
    NSData *_timedMetadata;
    NSArray *_tracks;
}

@property(copy) NSArray * itemIDs;
@property(copy) NSData * timedMetadata;
@property(retain) NSArray * tracks;


- (id)tracks;
- (void)setTimedMetadata:(id)arg1;
- (void)setTracks:(id)arg1;
- (id)_itemIDsToRadioTracks;
- (void)startWithCompletionHandler:(id)arg1;
- (void)setItemIDs:(id)arg1;
- (id)itemIDs;
- (void).cxx_destruct;
- (void)cancel;
- (id)timedMetadata;

@end
