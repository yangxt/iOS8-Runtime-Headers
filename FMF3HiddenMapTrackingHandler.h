/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class MKMapView, <FMF3HiddenMapTrackingHandlerDelegate>;

@interface FMF3HiddenMapTrackingHandler : NSObject <MKMapViewDelegate> {
    MKMapView *_hiddenMapView;
    <FMF3HiddenMapTrackingHandlerDelegate> *_delegate;
}

@property(retain) MKMapView * hiddenMapView;
@property <FMF3HiddenMapTrackingHandlerDelegate> * delegate;


- (void)setHiddenMapView:(id)arg1;
- (id)hiddenMapView;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1;
- (id)delegate;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
