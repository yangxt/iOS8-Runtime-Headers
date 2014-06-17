/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPlacemark, MKReverseGeocoderInternal, <MKReverseGeocoderDelegate>;

@interface MKReverseGeocoder : NSObject  {
    MKReverseGeocoderInternal *_internal;
}

@property <MKReverseGeocoderDelegate> * delegate;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) MKPlacemark * placemark;
@property(getter=isQuerying,readonly) BOOL querying;


- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinate;
- (void).cxx_destruct;
- (id)delegate;
- (void)cancel;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (void)start;
- (void)setDelegate:(id)arg1;
- (void)_notifyNoResults;
- (void)_notifyResult:(id)arg1;
- (BOOL)isQuerying;
- (void)_notifyError:(id)arg1;
- (id)placemark;

@end