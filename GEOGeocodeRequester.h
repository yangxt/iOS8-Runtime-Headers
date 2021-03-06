/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMapTable, NSLock;

@interface GEOGeocodeRequester : NSObject  {
    NSMapTable *_pendingGeocodes;
    NSMapTable *_pendingBatchGeocodes;
    NSLock *_pendingGeocodesLock;
}

+ (id)sharedGeocodeRequester;
+ (void)_countryProvidersDidChange:(id)arg1;

- (void)batchReverseGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)forwardGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)cancelBatchReverseGeocode:(id)arg1;
- (void)cancelGeocode:(id)arg1;
- (void)reverseGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)dealloc;
- (id)init;

@end
