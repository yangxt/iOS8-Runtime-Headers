/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class RadioStation, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface RUStationShareInformationProvider : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_shareTypeToLoadCompletionHandlers;
    NSMutableDictionary *_shareTypeToResponse;
    RadioStation *_station;
}

@property(readonly) RadioStation * station;


- (id)station;
- (void)loadShareInformationForShareType:(int)arg1 withCompletionHandler:(id)arg2;
- (void)_loadStationShareInfoForShareType:(int)arg1 withCompletionHandler:(id)arg2;
- (void).cxx_destruct;
- (id)initWithStation:(id)arg1;

@end