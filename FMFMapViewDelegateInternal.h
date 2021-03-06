/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class <FMFMapViewDelegateInternalDelegate>, FMFWildcardGestureRecognizer;

@interface FMFMapViewDelegateInternal : NSObject <MKMapViewDelegate> {
    BOOL _respondingToUserTouch;
    <FMFMapViewDelegateInternalDelegate> *_delegate;
    FMFWildcardGestureRecognizer *_gr;
}

@property <FMFMapViewDelegateInternalDelegate> * delegate;
@property BOOL respondingToUserTouch;
@property(retain) FMFWildcardGestureRecognizer * gr;


- (id)gr;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsWithMinApplied:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_moveCenterByOffset:(struct CGPoint { float x1; float x2; })arg1 from:(struct { double x1; double x2; })arg2 mapView:(id)arg3;
- (id)fmfOverlayColor;
- (id)fmfOverlayColorSatellite;
- (BOOL)respondingToUserTouch;
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;
- (id)accuracyCircleForLocation:(id)arg1;
- (void)endTouches;
- (void)setRespondingToUserTouch:(BOOL)arg1;
- (void)setGr:(id)arg1;
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(BOOL)arg2 disallowAnimation:(BOOL)arg3;
- (void).cxx_destruct;
- (id)delegate;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)setDelegate:(id)arg1;

@end
