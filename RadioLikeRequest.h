/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class RadioStation, SSURLConnectionRequest;

@interface RadioLikeRequest : RadioRequest  {
    long long _itemID;
    int _likeStatus;
    SSURLConnectionRequest *_request;
    int _seedType;
    RadioStation *_station;
    BOOL _isSeed;
}

@property int likeStatus;
@property BOOL isSeed;


- (id)initWithTrack:(id)arg1 station:(id)arg2;
- (int)likeStatus;
- (void)startWithLikeCompletionHandler:(id)arg1;
- (void)setLikeStatus:(int)arg1;
- (id)initWithItemID:(long long)arg1 seedType:(int)arg2 station:(id)arg3;
- (void)setIsSeed:(BOOL)arg1;
- (id)initWithTrackID:(id)arg1 station:(id)arg2;
- (BOOL)isSeed;
- (void)startWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end