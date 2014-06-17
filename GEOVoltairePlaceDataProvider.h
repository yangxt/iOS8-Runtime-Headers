/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORequester;

@interface GEOVoltairePlaceDataProvider : GEOPlaceDataProvider <PBRequesterDelegate> {
    GEORequester *_requester;
    BOOL _cancelled;
}

@property(retain) GEORequester * requester;

+ (id)providerURL;

- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;
- (void)cleanupRequester;
- (void)cancelProviderRequest;
- (void)setRequester:(id)arg1;
- (id)requester;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)dealloc;

@end