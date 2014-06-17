/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class GEOGeocodeRequest;

@interface RTGeocoder : NSObject  {
    GEOGeocodeRequest *_geocodeRequest;
}

@property(retain) GEOGeocodeRequest * geocodeRequest;


- (void)_cancelRequest:(id)arg1;
- (id)geocodeAddressDictionary:(id)arg1;
- (id)geocodeLatitude:(double)arg1 longitude:(double)arg2;
- (void)geocodeAddressDictionary:(id)arg1 withHandler:(id)arg2;
- (id)geocodeRequest;
- (void)setGeocodeRequest:(id)arg1;
- (void)geocodeLatitude:(double)arg1 longitude:(double)arg2 handler:(id)arg3;
- (void)_geocodeCoordinate:(struct { double x1; double x2; })arg1 handler:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;

@end